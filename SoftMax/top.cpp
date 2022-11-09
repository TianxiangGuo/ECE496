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
		hls::stream<ap_int<config_t::IN_DATA_WIDTH> > out[config_t::UNROLL_FACTOR]
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

	ap_int<config_t::IN_DATA_WIDTH> max_0[config_t::IN_VEC_WIDTH];
	ap_int<config_t::IN_DATA_WIDTH> max_1[config_t::IN_VEC_WIDTH / 2];
	ap_int<config_t::IN_DATA_WIDTH> max_2[config_t::IN_VEC_WIDTH / 4];
	ap_int<config_t::IN_DATA_WIDTH> max_3[config_t::IN_VEC_WIDTH / 8];
	ap_int<config_t::IN_DATA_WIDTH> max_val_packets[config_t::MAX_BATCH_SIZE / config_t::IN_VEC_WIDTH];  // holds the max value across all packets for one batch
	ap_int<config_t::IN_DATA_WIDTH> buffer[config_t::MAX_BATCH_SIZE];
	ap_int<config_t::IN_DATA_WIDTH> max_val;
	#pragma HLS ARRAY_PARTITION variable=buffer complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_0 complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_1 complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_2 complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_3 complete dim=0
	#pragma HLS ARRAY_PARTITION variable=max_val_packets complete dim=0

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
				for (int p = 0; p < config_t::MAX_BATCH_SIZE / config_t::IN_VEC_WIDTH; p++) {
					#pragma HLS unroll
					max_val_packets[p] = neg_inf;
				}
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

				if (max_3[0] < max_3[1]) {
					max_val_packets[packet] = max_3[1];
				} else {
					max_val_packets[packet] = max_3[0];
				}
			}
		}

		// find the largest number in the entire batch
		if (config_t::MAX_BATCH_SIZE / config_t::IN_VEC_WIDTH == 32) {
			for (int k=0; k < 16; k++) {
				#pragma HLS unroll
				if (max_val_packets[2*k] < max_val_packets[2*k+1]) {
					max_0[k] = max_val_packets[2*k + 1];
				} else {
					max_0[k] = max_val_packets[2*k];
				}
			}

			for (int k=0; k < 8; k++) {
				#pragma HLS unroll
				if (max_0[2*k] < max_0[2*k+1]) {
					max_1[k] = max_0[2*k + 1];
				} else {
					max_1[k] = max_0[2*k];
				}
			}
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

			if (max_3[0] < max_3[1]) {
				max_val = max_3[1];
			} else {
				max_val = max_3[0];
			}
		}

		cout<<"For batch "<<batch<<" the maximum value is "<<max_val<<endl;

		// write to out, split by unroll factor
		for (int iter = 0; iter < unrolled_iterations; iter++) {
#pragma HLS loop_tripcount min=config_t::MIN_BATCH_SIZE/config_t::UNROLL_FACTOR max=config_t::MAX_BATCH_SIZE/config_t::UNROLL_FACTOR
			for (int num = 0; num < config_t::UNROLL_FACTOR; num++) {
#pragma HLS unroll
				ap_int<config_t::IN_DATA_WIDTH> read = buffer[num + iter * config_t::UNROLL_FACTOR];

				if (read == neg_inf && max_val != neg_inf) {
					out[num].write(read);
				} else {
					out[num].write(read - max_val);
				}
			}
		}
	}
}


void quantized_exponential (
		hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH> > in [config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_unrolled_iterations,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > out[config_t::UNROLL_FACTOR]
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

	static int threshold_0 = -7350;
	static int threshold_1 = -6860;
	static int threshold_2 = -6574;
	for (int batch = 0; batch < num_batches; batch++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int iter = 0; iter < unrolled_iterations; iter++) {
#pragma HLS loop_tripcount min=config_t::MIN_BATCH_SIZE/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t:UNROLL_FACTOR
#pragma HLS pipeline ii=1
			for (int num = 0; num < config_t::UNROLL_FACTOR; num++) {
#pragma HLS unroll
				ap_int<config_t::IN_DATA_WIDTH> read = in[num].read();

				ap_uint<config_t::QUANT_DATA_WIDTH> result;
				if (read <= threshold_2) {
					if (result <= threshold_0) {
						result = 0;
					} else if (result <= threshold_1) {
						result = 1;
					} else {
						result = 2;
					}
				} else {
					result = EXPONENT_DATA[-read];
				}
				out[num].write(result);
			}
		}
	}
}


void compute_softmax_from_exponents (
	hls::stream<ap_uint<32> >& in_num_batches,
	hls::stream<ap_uint<32> >& in_num_unrolled_iter,
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > in [config_t::UNROLL_FACTOR],
	hls::stream<ap_uint<32> >& out_num_unrolled_iter,
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > out[config_t::UNROLL_FACTOR]
)
/*
 * This function computes the sum between all exponents in a batch, and computes the softmax
 * by dividing each exponent by the sum.
 */
{
	ap_int<config_t::IN_DATA_WIDTH> sum_val;
	ap_int<config_t::IN_DATA_WIDTH> sum[config_t::UNROLL_FACTOR];
	ap_int<config_t::IN_DATA_WIDTH> buffer[config_t::MAX_BATCH_SIZE];

#pragma HLS ARRAY_PARTITION variable=sum dim=0 complete
#pragma HLS ARRAY_PARTITION variable=buffer dim=0 complete

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

			for (int unroll = 0; unroll < config_t::UNROLL_FACTOR; unroll++) {
				#pragma HLS unroll
				ap_int<config_t::QUANT_DATA_WIDTH> read = in[unroll].read();
				// Quantize here too (shift left), so the divide
				// doesn't make the numbers too small
				buffer[unroll + iter * config_t::UNROLL_FACTOR] = ap_int<config_t::IN_DATA_WIDTH>(read) << config_t::OUT_DATA_WIDTH;
				if (iter == 0) {
					sum[unroll] = read;
				} else {
					sum[unroll] += read;
				}
			}

			// on the last cycle, after all the partial sums have been
			// calculated, sum them all together
			if (iter == unrolled_iterations - 1) {
				sum_val = 0;
				for (int i = 0; i < config_t::UNROLL_FACTOR; i++) {
					sum_val += sum[i];
				}
			}
		}


		#define DECIMALS 15
		ap_int<32> D_p = sum_val;
		ap_int<32> shift = 0;
		while (D_p.range(31, DECIMALS) != 0) {
			shift += 1;
			D_p = D_p >> 1;
		}

		ap_int<32> x_init = (48 << DECIMALS) / 17 - (32 * D_p)/17;

		for (int iter = 0; iter < unrolled_iterations; iter++) {
			#pragma HLS loop_tripcount min=config_t::MIN_BATCH_SIZE/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t:UNROLL_FACTOR
			#pragma HLS pipeline ii=1

			for (int unroll = 0; unroll < config_t::UNROLL_FACTOR; unroll++) {
				ap_int<config_t::IN_DATA_WIDTH> div;
				#pragma HLS unroll
				#pragma HLS RESOURCE variable=div core=DivnS
				ap_int<config_t::IN_DATA_WIDTH> read = buffer[unroll + iter * config_t::UNROLL_FACTOR];
				ap_int<32> N_p = read >> shift;
				ap_int<32> x = x_init;

				for (int i = 0; i < 3; i++) {
					ap_int<32> b_p_x = (1 << DECIMALS) - ((D_p * x) >> DECIMALS);
					x = x + ((x * b_p_x) >> DECIMALS);
				}

				//div = read / sum_val; // TODO: revert back to divide
				ap_int<64> result = (N_p * x) >> DECIMALS;
				if (result[DECIMALS-1] == 1) {
					result = (result >> DECIMALS) + 1;
				} else {
					result = result >> DECIMALS;
				}

				out[unroll].write(result);
			}
		}
	}
}



void write (
		hls::stream<ap_uint<96> >& in_meta,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<dataword>& out
)
/*
 * This function takes in the computed softmax values, and writes them out to the output stream
 */
{
	// read in metadata and write them out
	ap_uint<96> metadata = in_meta.read();
	unsigned int unrolled_iterations = in_num_unrolled_iter.read();
	unsigned int num_batches = metadata.range(31, 0);
	unsigned int batch_size = metadata.range(63, 32);
	unsigned int unquant_N = metadata.range(95, 64);

	// Output batch size could be different from input batch size. Input batch size is precise, while
	// the output, because its size got shrunk, might not fit exactly in a data packet. output_batch_size
	// essentially rounds the size up to the next available packet
	unsigned int output_batch_size = config_t::OUT_VEC_WIDTH * ((batch_size-1)/ config_t::OUT_VEC_WIDTH + 1);
	unsigned int num_output_packets =  output_batch_size / config_t::OUT_VEC_WIDTH;

	dataword out_packet;
	out_packet.data.range(31, 0) = num_batches;
	out_packet.data.range(63, 32) = output_batch_size;
	out_packet.data.range(95, 64) = unquant_N;
	out_packet.dest = 255;
	out_packet.id = 0;
	out_packet.last = 0;
	out_packet.user = num_output_packets + 1;  // number of packets sent + 1
	out.write(out_packet);

	// Each buffer stores OUT_DATA_WIDTH * OUT_VEC_WIDTH of data at a time (same as PACKET_DATA_LENGTH).
	// However, it's split by UNROLL_FACTOR into multiple entries, each OUT_DATA_WIDTH*UNROLL_FACTOR bits
	ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> buffer [config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR];
	#pragma HLS ARRAY_PARTITION variable=buffer complete dim=0

	for (int batch = 0; batch < num_batches; batch++) {
		#pragma HLS loop_tripcount min=1 max=512
		for (int pkt = 0; pkt < num_output_packets; pkt++) {

#pragma HLS loop_tripcount min=1 max=8
			// This loop enables unrolling. For example, if the upper bound is 16 and unroll factor
			// if 4, it means that 4 things can execute simultaneously, at a time, for 64 things total
			for (int j = 0; j < config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR; j++) {
				#pragma HLS pipeline ii=1

				for (int unroll_idx = 0; unroll_idx < config_t::UNROLL_FACTOR; unroll_idx++) {
					#pragma HLS unroll
					if (pkt == num_output_packets - 1 && j >= unrolled_iterations % (config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR)) {
						// This is outside of the scope of original calculations, so fill in 0
						buffer[j].range(config_t::OUT_DATA_WIDTH*(unroll_idx+1)-1, config_t::OUT_DATA_WIDTH*unroll_idx) = 0;
					} else {
						buffer[j].range(config_t::OUT_DATA_WIDTH*(unroll_idx+1)-1, config_t::OUT_DATA_WIDTH*unroll_idx) = in[unroll_idx].read();
					}
				}

				if (j == config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR - 1) {
					// This is the last j for this packet, so write the packet out
					for (int k=0; k<config_t::OUT_VEC_WIDTH / config_t::UNROLL_FACTOR; k++) {
						#pragma HLS unroll
						out_packet.data.range(config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR * (k+1)-1, config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR * k) = buffer[k];
					}

					out_packet.dest = 255;
					out_packet.id = 0;
					out_packet.last = (pkt == num_output_packets - 1);
					out_packet.user = num_output_packets + 1;

					out.write(out_packet);
				}
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
	hls::stream<ap_int<config_t::IN_DATA_WIDTH> > save_data_out[config_t::UNROLL_FACTOR];
	static hls::stream<ap_uint<32> > quantized_exponential_num_batches;
	static hls::stream<ap_uint<32> > quantized_exponential_unrolled_iterations;
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > quantized_exponential_out[config_t::UNROLL_FACTOR];
	static hls::stream<ap_uint<32> > compute_softmax_from_exponents_num_unrolled_iter;
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > compute_softmax_from_exponents_out[config_t::UNROLL_FACTOR];


	save_data (in, save_data_meta, save_data_num_batches, save_data_num_unrolled_iter, save_data_out);
	quantized_exponential (
			save_data_num_batches, save_data_num_unrolled_iter, save_data_out, quantized_exponential_num_batches,
			quantized_exponential_unrolled_iterations, quantized_exponential_out);
	compute_softmax_from_exponents (
			quantized_exponential_num_batches, quantized_exponential_unrolled_iterations, quantized_exponential_out,
			compute_softmax_from_exponents_num_unrolled_iter, compute_softmax_from_exponents_out);
	write (save_data_meta, compute_softmax_from_exponents_num_unrolled_iter, compute_softmax_from_exponents_out, out);

}
