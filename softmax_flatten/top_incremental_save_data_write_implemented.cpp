// around 2693 for 128x128 (more than 3 cycles per packet)
// 2 cycles per packet in the same batch. The added cycle is when saving the data, where it must find the max value in a packet. This serializes the pipelining, so takes 1 extra cycle per packet
// II between batches of 128 numbers: 21. 16 (2 cycles per packet) + 4  (batch initiation) + 1 (pipelined save_data write out)

#include <iostream>

#include "common.hpp"
#include "parameters.hpp"
#include "exponents.hpp"
#include "top.hpp"
using namespace std;


// Defines constants used in softmax calculations
const ap_int<config_t::IN_DATA_WIDTH> self_const = 30;
const ap_int<config_t::IN_DATA_WIDTH> x0 = -490;
const ap_int<config_t::IN_DATA_WIDTH> b = 1913;
const ap_int<config_t::IN_DATA_WIDTH> c = 1394358;
const ap_int<config_t::IN_DATA_WIDTH> m = 1614886140;
const ap_int<config_t::QUANT_DATA_WIDTH> e = 66;

void save_data (
		hls::stream<dataword>& in,	// input packets
		hls::stream<ap_uint<96> >& out_meta,	// Output metadata. Note the space between '>' - this is mandatory somehow, else compile error
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_num_unrolled_iter,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> >& out
)
/*
 * Takes in a stream of packets as data, assuming they're correctly formatted.
 * Read the metadata (first packet) and write to output streams.
 * For each batch, read in all numbers and subtract by the largest number of the batch.
 * Write the resulting numbers to "out", separated by the unroll factor. Eg, for
 * an unroll factor of 4, with 4 batches, batch size 8 numbers, out looks like:
 *
 * out[0]: 0 0  0 0  0 0  0 0
 * out[1]: 0 0  0 0  0 0  0 0
 * out[2]: 0 0  0 0  0 0  0 0
 * out[3]: 0 0  0 0  0 0  0 0
 * Batch:   1    2    3    4
 */

{
	const ap_int<config_t::IN_DATA_WIDTH> neg_inf = 1 << (config_t::IN_DATA_WIDTH - 1);

	// Read in metadata
	dataword pkt = in.read();
	unsigned int num_batches = pkt.data.range(31, 0);
	unsigned int batch_size = pkt.data.range(63, 32);
	unsigned int unquant_N = pkt.data.range(95, 64);
	unsigned int unrolled_iterations = batch_size / config_t::UNROLL_FACTOR;
	ap_uint<96> all_metadata = pkt.data.range(96, 0);

	out_meta.write(all_metadata);
	out_num_batches.write(num_batches);
	out_num_unrolled_iter.write(unrolled_iterations);

	ap_int<config_t::IN_DATA_WIDTH> max_1[config_t::IN_VEC_WIDTH / 2];
	ap_int<config_t::IN_DATA_WIDTH> max_2[config_t::IN_VEC_WIDTH / 4];
	ap_int<config_t::IN_DATA_WIDTH> max_3[config_t::IN_VEC_WIDTH / 8];
	ap_int<config_t::IN_DATA_WIDTH> buffer[config_t::MAX_BATCH_SIZE];
	ap_int<config_t::IN_DATA_WIDTH> max_val;
	#pragma HLS ARRAY_PARTITION variable=buffer complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_1 complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_2 complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_3 complete dim=0

	// This portion is independent of UNROLL_FACTOR since input size is variable. Because numbers reside
	// in individual packets, first find the max number from each packet, then linear search to find the global max.
	// Assume one packet only holds data for one batch.
	for (int batch = 0; batch < num_batches; batch++) {
	#pragma HLS loop_tripcount min=1 max=512

		for (int packet = 0; packet < batch_size/config_t::IN_VEC_WIDTH; packet++) {
			// This tells the simulator how many loops' worth delay to count, by giving it a min and max number of times the loop runs
			#pragma HLS loop_tripcount min=config_t::MIN_BATCH_SIZE/config_t::IN_VEC_WIDTH max=config_t::MAX_BATCH_SIZE/config_t::IN_VEC_WIDTH
			// This loop can be pipelined, and take in one data per cycle
			#pragma HLS pipeline ii=1


			// reset
			if (packet == 0) {
				max_val = 0;
			}


			pkt = in.read();

			// Read the numbers and put them in buffer, as well as max_1
			for (int i = 0; i < (config_t::IN_VEC_WIDTH >> 1); i++) {
				#pragma HLS unroll
				int num1_idx = i << 1;
				int num2_idx = num1_idx + 1;
				ap_int<config_t::IN_DATA_WIDTH> read_num1 = pkt.data.range(config_t::IN_DATA_WIDTH * (num1_idx+1) - 1, config_t::IN_DATA_WIDTH * num1_idx);
				ap_int<config_t::IN_DATA_WIDTH> read_num2 = pkt.data.range(config_t::IN_DATA_WIDTH * (num2_idx + 1) - 1, config_t::IN_DATA_WIDTH * (num2_idx));
				buffer[packet * config_t::IN_VEC_WIDTH + num1_idx] = read_num1;
				buffer[packet * config_t::IN_VEC_WIDTH + num2_idx] = read_num2;
				if (read_num1 > read_num2) {
					max_1[i] = read_num1;
				} else {
					max_1[i] = read_num2;
				}
			}

			// Further find the max value. This if-statement will be true if the packet size
			// remains 512 bits, and the input numbers remain 32-bit. These are defined by I-BERT,
			// so we can assume this will be true.
			if (config_t::IN_VEC_WIDTH == 16) {
				for (int k=0; k < 4; k++) {
					#pragma HLS unroll
					if (max_1[2*k] < max_1[2*k+1]) {
						max_2[k] = max_1[2*k + 1];
					} else {
						max_2[k] = max_1[2*k];
					}
				}

				for (int k=0; k < 2; k++) {
					#pragma HLS unroll
					if (max_2[2*k] < max_2[2*k+1]) {
						max_3[k] = max_2[2*k + 1];
					} else {
						max_3[k] = max_2[2*k];
					}
				}

				if (max_3[0] < max_3[1] && max_3[1] > max_val) {
					max_val = max_3[1];
				} else if (max_3[0] >= max_3[1] && max_3[0] > max_val) {
					max_val = max_3[0];
				}
			}
		}

		cout<<"For batch "<<batch<<" the maximum value is "<<max_val<<endl;

		// write to out, split by unroll factor
		for (int iter = 0; iter < unrolled_iterations; iter++) {
			#pragma HLS loop_tripcount min=config_t::MIN_BATCH_SIZE/config_t::UNROLL_FACTOR max=config_t::MAX_BATCH_SIZE/config_t::UNROLL_FACTOR
			#pragma HLS pipeline ii=1
			ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> out_data;

			for (int num = 0; num < config_t::UNROLL_FACTOR; num++) {
				#pragma HLS unroll
				ap_int<config_t::IN_DATA_WIDTH> read = buffer[num + iter * config_t::UNROLL_FACTOR];

				if (read == neg_inf && max_val != neg_inf) {
					out_data.range(config_t::IN_DATA_WIDTH * (num + 1) - 1, config_t::IN_DATA_WIDTH*num) = read;
				} else {
					out_data.range(config_t::IN_DATA_WIDTH * (num + 1) - 1, config_t::IN_DATA_WIDTH*num) = read - max_val;
				}
			}
			out.write(out_data);
		}
	}
}

void quantized_exponential (
		hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> >& in,
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_unrolled_iterations,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> >& out
)
/*
 * This function applies the integer exponential approximation to all numbers in "in", and returns the
 * result in the same format to out.
 */
{
	// Read metadata
	unsigned int unrolled_iterations = in_num_unrolled_iter.read();
	unsigned int num_batches = in_num_batches.read();
	out_num_batches.write(num_batches);
	out_unrolled_iterations.write(unrolled_iterations);

	for (int batch = 0; batch < num_batches; batch++) {
		#pragma HLS loop_tripcount min=1 max=512
		for (int iter = 0; iter < unrolled_iterations; iter++) {
			#pragma HLS loop_tripcount min=config_t::MIN_BATCH_SIZE/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t:UNROLL_FACTOR
			#pragma HLS pipeline ii=1

			ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> temp = in.read();
			ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> out_temp;

			for (int num = 0; num < config_t::UNROLL_FACTOR; num++) {
				#pragma HLS unroll
				ap_int<config_t::IN_DATA_WIDTH> read = temp.range(config_t::IN_DATA_WIDTH*(num+1)-1, config_t::IN_DATA_WIDTH*num);


				out_temp.range(config_t::QUANT_DATA_WIDTH*(num+1)-1, config_t::QUANT_DATA_WIDTH*num) = read >> 16;
			}
			out.write(out_temp);
		}
	}
}


void compute_softmax_from_exponents (
	hls::stream<ap_uint<32> >& in_num_batches,
	hls::stream<ap_uint<32> >& in_num_unrolled_iter,
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH *config_t::UNROLL_FACTOR> >& in,
	hls::stream<ap_uint<32> >& out_num_unrolled_iter,
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH*config_t::UNROLL_FACTOR> >& out
)
/*
 * This function computes the sum between all exponents in a batch, and computes the softmax
 * by dividing each exponent by the sum.
 */
{
	// Read metadata
	unsigned int unrolled_iterations = in_num_unrolled_iter.read();
	unsigned int num_batches = in_num_batches.read();
	out_num_unrolled_iter.write(unrolled_iterations);

	for (int batch = 0; batch < num_batches; batch++) {
		#pragma HLS loop tripcount min=1 max=512

		// Calculate the sum for this batch of number. Break up the work and
		// store the partial sum in sum array
		for (int iter = 0; iter < unrolled_iterations; iter++) {
			#pragma HLS loop_tripcount min=config_t::MIN_BATCH_SIZE/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t:UNROLL_FACTOR
			#pragma HLS pipeline ii=1

			ap_int<config_t::QUANT_DATA_WIDTH *config_t::UNROLL_FACTOR> in_read = in.read();
			ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> temp;
			for (int unroll = 0; unroll < config_t::UNROLL_FACTOR; unroll++) {
				#pragma HLS unroll
				ap_int<config_t::QUANT_DATA_WIDTH> read = in_read.range(config_t::QUANT_DATA_WIDTH * (unroll + 1) - 1, config_t::QUANT_DATA_WIDTH*unroll);

				temp.range(config_t::OUT_DATA_WIDTH * (unroll+1)-1, config_t::OUT_DATA_WIDTH  * unroll) = read >> 8;
			}
			out.write(temp);
		}
	}
}


void write(
		hls::stream<ap_uint<96> >& in_n,
		hls::stream<ap_uint<32> >& in_iter_c,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> > &in,
		hls::stream<dataword>& out)
{
	// read N
	ap_uint<96> N = in_n.read();
	unsigned int ITER = in_iter_c.read();
	unsigned int N_r = N.range(31,0);
	unsigned int N_c = N.range(63,32);
	unsigned int unquant_N = N.range(95, 64);
	// new N_c
	unsigned int NN_c;

	// set a new N_c for softmax_matmul
	if (N_c < config_t::OUT_VEC_WIDTH)
	{
		NN_c = config_t::OUT_VEC_WIDTH;
	}
	else if (N_c % config_t::OUT_VEC_WIDTH == 0)
	{
		NN_c = N_c;
	}
	else
	{
		NN_c = config_t::OUT_VEC_WIDTH * (N_c / config_t::OUT_VEC_WIDTH + 1);
	}

	dataword out_data;

	out_data.data.range(31,0) = N_r;
	out_data.data.range(63,32) = NN_c;
	out_data.data.range(95,64) = unquant_N;
	out_data.dest = 255;
	out_data.id = 0;
	out_data.last = 0;
	out_data.user = NN_c / config_t::OUT_VEC_WIDTH + 1;
	out.write(out_data);

	ap_uint<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> temp[config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR];

#pragma HLS ARRAY_PARTITION variable=temp dim=0 complete

	for (ap_uint<16> iter=0; iter < ap_uint<16>(N_r); iter++) {
		#pragma HLS loop_tripcount min=1 max=512

		for (ap_uint<16> i=0; i < ap_uint<16>(N_c) / config_t::UNROLL_FACTOR; i++) {
			#pragma HLS pipeline ii=1

			if (i % (config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR) == 0) {
				for (ap_uint<16> k=0; k<config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR ; k++) {
					#pragma HLS unroll
					temp[k] = 0;
				}
			}

			temp[i % (config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR)] = in.read();

			if ((i > 0 && i % (config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR) == config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR - 1) || (i == N_c / config_t::UNROLL_FACTOR - 1))
			{
				for (ap_uint<16> k=0; k<config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR ; k++) {
					#pragma HLS unroll
					out_data.data.range(config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR * (k+1)-1, config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR * k) = temp[k];
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

void softmax(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

#pragma HLS dataflow

	static hls::stream<ap_uint<96> > save_data_meta;
	static hls::stream<ap_uint<32> > save_data_num_batches;
	static hls::stream<ap_uint<32> > save_data_num_unrolled_iter;
	hls::stream<ap_int<config_t::IN_DATA_WIDTH*config_t::UNROLL_FACTOR> > save_data_out;
	static hls::stream<ap_uint<32> > quantized_exponential_num_batches;
	static hls::stream<ap_uint<32> > quantized_exponential_unrolled_iterations;
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> > quantized_exponential_out;
	static hls::stream<ap_uint<32> > compute_softmax_from_exponents_num_unrolled_iter;
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH*config_t::UNROLL_FACTOR> > compute_softmax_from_exponents_out;


	save_data (in, save_data_meta, save_data_num_batches, save_data_num_unrolled_iter, save_data_out);
	quantized_exponential (
			save_data_num_batches, save_data_num_unrolled_iter, save_data_out, quantized_exponential_num_batches,
			quantized_exponential_unrolled_iterations, quantized_exponential_out);
	compute_softmax_from_exponents (
			quantized_exponential_num_batches, quantized_exponential_unrolled_iterations, quantized_exponential_out,
			compute_softmax_from_exponents_num_unrolled_iter, compute_softmax_from_exponents_out);
	write (save_data_meta, compute_softmax_from_exponents_num_unrolled_iter, compute_softmax_from_exponents_out, out);

}
