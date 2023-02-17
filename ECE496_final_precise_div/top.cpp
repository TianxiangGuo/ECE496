#include <iostream>

#include "common.hpp"
#include "parameters.hpp"
#include "top.hpp"
using namespace std;

void read_data(
		hls::stream<dataword>& in,	// input packets
		hls::stream<ap_uint<96> >& out_meta,// Output metadata. Note the space between '>' - this is mandatory somehow, else compile error
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_num_unrolled_iter,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> >& out,
		hls::stream<ap_int<32> >& max_input)
{

	// Read in metadata
	dataword pkt = in.read();
	unsigned int num_batches = pkt.data.range(31, 0);
	unsigned int batch_size = pkt.data.range(63, 32);
	unsigned int unquant_N = pkt.data.range(95, 64);
	unsigned int unrolled_iterations = batch_size / config_t::UNROLL_FACTOR;
	ap_uint<96> all_metadata = pkt.data.range(96, 0);
	const ap_int<config_t::DATA_WIDTH> neg_inf = 1 << (config_t::DATA_WIDTH - 1);

	out_meta.write(all_metadata);
	out_num_batches.write(num_batches);
	out_num_unrolled_iter.write(unrolled_iterations);

	ap_int<config_t::DATA_WIDTH> max_1[config_t::VEC_WIDTH / 2];
	ap_int<config_t::DATA_WIDTH> max_2[config_t::VEC_WIDTH / 4];
	ap_int<config_t::DATA_WIDTH> max_3[config_t::VEC_WIDTH / 8];
	ap_int<config_t::DATA_WIDTH> buffer[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH> max_val;
#pragma HLS ARRAY_PARTITION variable=buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=max_1 complete dim=0
#pragma HLS ARRAY_PARTITION variable=max_2 complete dim=0
#pragma HLS ARRAY_PARTITION variable=max_3 complete dim=0

	// This portion is independent of UNROLL_FACTOR since input size is variable. Because numbers reside
	// in individual packets, first find the max number from each packet, then binary search to find the global max.
	// Assume one packet only holds data for one batch.
	for (int batch = 0; batch < num_batches; batch++) {
#pragma HLS loop_tripcount min=1 max=512

		for (int packet = 0; packet < batch_size / config_t::VEC_WIDTH; packet++) {
			// This loop can be pipelined, and take in one data per cycle
#pragma HLS pipeline ii=1

			// reset
			if (packet == 0) {
				max_val = neg_inf;
			}

			pkt = in.read();
			ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> out_data;

			// Read the numbers and put them in buffer, as well as max_1
			for (int i = 0; i < (config_t::VEC_WIDTH >> 1); i++) {
#pragma HLS unroll
				int num1_idx = i << 1;
				int num2_idx = num1_idx + 1;
				ap_int<config_t::DATA_WIDTH> read_num1 = pkt.data.range(
						config_t::DATA_WIDTH * (num1_idx + 1) - 1,
						config_t::DATA_WIDTH * num1_idx);
				ap_int<config_t::DATA_WIDTH> read_num2 = pkt.data.range(
						config_t::DATA_WIDTH * (num2_idx + 1) - 1,
						config_t::DATA_WIDTH * (num2_idx));
				buffer[num1_idx] = read_num1;
				buffer[num2_idx] = read_num2;
				if (read_num1 > read_num2) {
					max_1[i] = read_num1;
				} else {
					max_1[i] = read_num2;
				}
			}

			for (int iter = 0; iter < config_t::VEC_WIDTH / config_t::UNROLL_FACTOR; iter++) {
#pragma HLS pipeline ii=1
				ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> out_data;
				for (int num = 0; num < config_t::UNROLL_FACTOR; num++) {
#pragma HLS unroll
					out_data.range(config_t::DATA_WIDTH * (num + 1) - 1, config_t::DATA_WIDTH * num) = buffer[num + iter * config_t::UNROLL_FACTOR];
				}
				out.write(out_data);
			}

			// Further find the max value. This if-statement will be true if the packet size
			// remains 512 bits, and the input numbers remain 32-bit. These are defined by I-BERT,
			// so we can assume this will be true.
			if (config_t::VEC_WIDTH == 16) {
				for (int k = 0; k < 4; k++) {
#pragma HLS unroll
					if (max_1[2 * k] < max_1[2 * k + 1]) {
						max_2[k] = max_1[2 * k + 1];
					} else {
						max_2[k] = max_1[2 * k];
					}
				}

				for (int k = 0; k < 2; k++) {
#pragma HLS unroll
					if (max_2[2 * k] < max_2[2 * k + 1]) {
						max_3[k] = max_2[2 * k + 1];
					} else {
						max_3[k] = max_2[2 * k];
					}
				}

				if (max_3[0] < max_3[1] && max_3[1] > max_val) {
					max_val = max_3[1];
				} else if (max_3[0] >= max_3[1] && max_3[0] > max_val) {
					max_val = max_3[0];
				}
			}

			if (packet == batch_size / config_t::VEC_WIDTH - 1) {
				max_input.write(max_val);
			}
		}
	}
}

void subtract_max(hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_unrolled_iterations,
		hls::stream<ap_int<32> >& in_max,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> >& in,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> >& out) {
	const ap_int<config_t::DATA_WIDTH> neg_inf = 1 << (config_t::DATA_WIDTH - 1);
	// Read metadata
	unsigned int unrolled_iterations = in_num_unrolled_iter.read();
	unsigned int num_batches = in_num_batches.read();
	out_num_batches.write(num_batches);
	out_unrolled_iterations.write(unrolled_iterations);

	ap_int<32> max_val;
	for (int batch = 0; batch < num_batches; batch++) {
		for (int iter = 0; iter < unrolled_iterations; iter++) {
#pragma HLS pipeline ii=1
			ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> out_data;

			if (iter == 0) {
				max_val = in_max.read();
			}

			ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> in_data =
					in.read();
			for (int num = 0; num < config_t::UNROLL_FACTOR; num++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in_data.range(config_t::DATA_WIDTH * (num + 1) - 1, config_t::DATA_WIDTH * num);
				if (read == neg_inf) {
					out_data.range(config_t::DATA_WIDTH * (num + 1) - 1, config_t::DATA_WIDTH * num) = neg_inf;
				} else {
					// there's an implicit assumption that read will never be close to neg_inf (but not neg_inf)
					out_data.range(config_t::DATA_WIDTH * (num + 1) - 1, config_t::DATA_WIDTH * num) = read - max_val;
				}
			}
			out.write(out_data);
		}
	}
}

void process_1(
		hls::stream<ap_uint<32> >& in_iter_r,
		hls::stream<ap_uint<32> >& in_iter_c,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> > &in,
		hls::stream<ap_uint<32> >& out_iter_r,
		hls::stream<ap_uint<32> >& out_iter_c,
		hls::stream<ap_int<config_t::DATA_WIDTH * 2 * config_t::UNROLL_FACTOR> > &out)
{
	// read N
	unsigned int ITER = in_iter_c.read();
	unsigned int N_r = in_iter_r.read();
	out_iter_r.write(N_r);
	out_iter_c.write(ITER);

	ap_int<config_t::DATA_WIDTH> x[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> q[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> r[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH * 2> exp[config_t::UNROLL_FACTOR];

#pragma HLS ARRAY_PARTITION variable=x dim=0 complete
#pragma HLS ARRAY_PARTITION variable=q dim=0 complete
#pragma HLS ARRAY_PARTITION variable=r dim=0 complete
#pragma HLS ARRAY_PARTITION variable=exp dim=0 complete
	for (int i = 0; i < N_r; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int l = 0; l < ITER; l++) {
#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
#pragma HLS pipeline ii=1

			ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> temp = in.read();

			ap_int<config_t::DATA_WIDTH * 2 * config_t::UNROLL_FACTOR> out_data;

			for (int j = 0; j < config_t::UNROLL_FACTOR; j++) {
#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = temp.range(config_t::DATA_WIDTH * (j + 1) - 1, config_t::DATA_WIDTH * j);

				if (read < self_const * x0) {
					x[j] = self_const * x0;
				} else {
					x[j] = read;
				}

				q[j] = x[j] / x0;
				r[j] = x[j] - x0 * q[j];

				ap_int<config_t::DATA_WIDTH * 2> temp = ((r[j] + b) * r[j] + c) << (self_const - q[j]);

				if (temp < 0) {
					exp[j] = 0;
				} else {
					exp[j] = temp;
				}

				out_data.range(config_t::DATA_WIDTH * 2 * (j + 1) - 1, config_t::DATA_WIDTH * 2 * j) = exp[j];
			}

			out.write(out_data);
		}
	}
}

void QuantAct_1_channel_mine(hls::stream<ap_uint<32> >& in_iter_r,
		hls::stream<ap_uint<32> >& in_iter_c,
		hls::stream<ap_int<config_t::DATA_WIDTH * 2 * config_t::UNROLL_FACTOR> > &in,
		hls::stream<ap_uint<32> >& out_iter_r,
		hls::stream<ap_uint<32> >& out_iter_c,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH * config_t::UNROLL_FACTOR> > &out,
		hls::stream<ap_int<32> >&sum_output) {
	// read N
	unsigned int ITER = in_iter_c.read();
	unsigned int N_r = in_iter_r.read();
	out_iter_r.write(N_r);
	out_iter_c.write(ITER);
	ap_int<config_t::DATA_WIDTH> sum_val;
	ap_int<config_t::DATA_WIDTH> sum[config_t::UNROLL_FACTOR];
#pragma HLS ARRAY_PARTITION variable=sum dim=0 complete

	// read
	for (int i = 0; i < N_r; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int l = 0; l < ITER; l++) {
#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
#pragma HLS pipeline ii=1

			ap_int<config_t::DATA_WIDTH * 2 * config_t::UNROLL_FACTOR> in_read = in.read();
			ap_int<config_t::QUANT_DATA_WIDTH * config_t::UNROLL_FACTOR> out_data;

			for (int k = 0; k < config_t::UNROLL_FACTOR; k++) {
#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH * 2> read = in_read.range(config_t::DATA_WIDTH * 2 * (k + 1) - 1, config_t::DATA_WIDTH * 2 * k);
				ap_int<config_t::DATA_WIDTH * 3> read1 = read * m;
				ap_int<config_t::QUANT_DATA_WIDTH> read2;

				if (read1.bit(e - 1)) {
					read2 = (read1 >> e) + 1;
				} else {
					read2 = read1 >> e;
				}

				if (l == 0) {
					sum[k] = read2;
				} else {
					sum[k] += read2;
				}
				out_data.range(config_t::QUANT_DATA_WIDTH * (k + 1) - 1, config_t::QUANT_DATA_WIDTH * k) = read2;
			}

			out.write(out_data);

			if (l == ITER - 1) {
				sum_val = 0;
				for (int k = 0; k < config_t::UNROLL_FACTOR; k++) {
#pragma HLS unroll
					sum_val += sum[k];
				}
				sum_output.write(sum_val);
			}
		}
	}
}


void softmax_divide_precise(hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH * config_t::UNROLL_FACTOR> >& in,
		hls::stream<ap_int<32> >& sum,
		hls::stream<ap_uint<32> >& out_num_unrolled_iter,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> >& out) {
	// Read metadata
	unsigned int unrolled_iterations = in_num_unrolled_iter.read();
	unsigned int num_batches = in_num_batches.read();
	out_num_unrolled_iter.write(unrolled_iterations);

	ap_int<32> my_sum;
	for (int batch = 0; batch < num_batches; batch++) {
#pragma HLS loop tripcount min=1 max=512

		for (int iter = 0; iter < unrolled_iterations; iter++) {
#pragma HLS pipeline ii=1

			if (iter == 0) {
				my_sum = sum.read();
			}

			ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> out_temp;
			ap_int<config_t::QUANT_DATA_WIDTH * config_t::UNROLL_FACTOR> in_nums = in.read();
			for (int unroll = 0; unroll < config_t::UNROLL_FACTOR; unroll++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in_nums.range(config_t::QUANT_DATA_WIDTH * (unroll + 1) - 1, config_t::QUANT_DATA_WIDTH * unroll) << config_t::OUT_DATA_WIDTH;

				ap_int<config_t::DATA_WIDTH> div_result = read / my_sum;
				if (div_result.range(config_t::DATA_WIDTH-1, config_t::OUT_DATA_WIDTH) != 0) {
					// cap the result to be 255
					div_result = 255;
				}
				out_temp.range(config_t::OUT_DATA_WIDTH * (unroll + 1) - 1, config_t::OUT_DATA_WIDTH * unroll) = div_result;
			}
			out.write(out_temp);
		}
	}
}


void write(hls::stream<ap_uint<96> >& in_n,
		hls::stream<ap_uint<32> >& in_iter_c,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> > &in,
		hls::stream<dataword>& out) {
	// read N
	ap_uint<96> N = in_n.read();
	unsigned int ITER = in_iter_c.read();
	unsigned int N_r = N.range(31, 0);
	unsigned int N_c = N.range(63, 32);
	unsigned int unquant_N = N.range(95, 64);
	// new N_c
	unsigned int NN_c;

	// set a new N_c for softmax_matmul
	if (N_c < config_t::OUT_VEC_WIDTH) {
		NN_c = config_t::OUT_VEC_WIDTH;
	} else if (N_c % config_t::OUT_VEC_WIDTH == 0) {
		NN_c = N_c;
	} else {
		NN_c = config_t::OUT_VEC_WIDTH * (N_c / config_t::OUT_VEC_WIDTH + 1);
	}

	dataword out_data;

	out_data.data.range(31, 0) = N_r;
	out_data.data.range(63, 32) = NN_c;
	out_data.data.range(95, 64) = unquant_N;
	out_data.dest = 255;
	out_data.id = 0;
	out_data.last = 0;
	out_data.user = NN_c / config_t::OUT_VEC_WIDTH + 1;
	out.write(out_data);

	ap_uint<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> temp[config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR];

#pragma HLS ARRAY_PARTITION variable=temp dim=0 complete

	for (ap_uint<16> iter = 0; iter < ap_uint<16>(N_r); iter++) {
#pragma HLS loop_tripcount min=1 max=512

		for (ap_uint<16> i = 0; i < ap_uint<16>(N_c) / config_t::UNROLL_FACTOR; i++) {
#pragma HLS pipeline ii=1

			if (i % (config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR) == 0) {
				for (ap_uint<16> k = 0; k < config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR; k++) {
					#pragma HLS unroll
					temp[k] = 0;
				}
			}

			temp[i % (config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR)] = in.read();

			if ((i > 0 && i % (config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR) == config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR - 1)
					|| (i == N_c / config_t::UNROLL_FACTOR - 1)) {
				for (ap_uint<16> k = 0; k < config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR; k++) {
					#pragma HLS unroll
					out_data.data.range(config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR* (k + 1) - 1, config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR * k) = temp[k];
				}

				out_data.dest = 255;
				out_data.id = 0;
				out_data.last = i == N_c / config_t::UNROLL_FACTOR - 1 ? 1 : 0;
				out_data.user = NN_c / config_t::OUT_VEC_WIDTH + 1;
				out.write(out_data);
			}
		}
	}
}


void softmax(hls::stream<dataword>& in, hls::stream<dataword>& out) {
#pragma HLS inline
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

#pragma HLS dataflow

	static hls::stream<ap_uint<96> > in_write_n;
	static hls::stream<ap_uint<32> > in_proc_1_iter_r;
	static hls::stream<ap_uint<32> > in_proc_1_iter_c;
	static hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> > in_proc_1;
	static hls::stream<ap_uint<32> > in_quant_iter_r;
	static hls::stream<ap_uint<32> > in_quant_iter_c;
	static hls::stream<ap_int<config_t::DATA_WIDTH * 2 * config_t::UNROLL_FACTOR> > in_quant;
	static hls::stream<ap_uint<32> > in_proc_2_iter_r;
	static hls::stream<ap_uint<32> > in_proc_2_iter_c;
	static hls::stream<ap_int<config_t::QUANT_DATA_WIDTH * config_t::UNROLL_FACTOR> > in_proc_2;
	static hls::stream<ap_uint<32> > in_write_iter_c;
	static hls::stream<ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> > in_write;
	static hls::stream<ap_int<32> > sum;

	static hls::stream<ap_int<32> > max_input;
	static hls::stream<ap_uint<32> > in_sub_max_r;
	static hls::stream<ap_uint<32> > in_sub_max_c;
	static hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> > in_sub_max;

	const static int fifo_depth = (config_t::NUM_CHANNEL/config_t::UNROLL_FACTOR)+1;
#pragma HLS stream variable=in_proc_2 depth=fifo_depth
#pragma HLS stream variable=in_sub_max depth=fifo_depth

	//	 save buffer
	read_data(in, in_write_n, in_sub_max_r, in_sub_max_c, in_sub_max,
			max_input);
	subtract_max(in_sub_max_r, in_sub_max_c, in_proc_1_iter_r, in_proc_1_iter_c,
			max_input, in_sub_max, in_proc_1);

	// process 1
	process_1(in_proc_1_iter_r, in_proc_1_iter_c, in_proc_1, in_quant_iter_r,
			in_quant_iter_c, in_quant);

	QuantAct_1_channel_mine(in_quant_iter_r, in_quant_iter_c, in_quant,
			in_proc_2_iter_r, in_proc_2_iter_c, in_proc_2, sum);
	softmax_divide_precise(in_proc_2_iter_r, in_proc_2_iter_c, in_proc_2, sum,
			in_write_iter_c, in_write);

	// write
	write(in_write_n, in_write_iter_c, in_write, out);
}

