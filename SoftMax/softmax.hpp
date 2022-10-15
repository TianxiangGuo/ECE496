#pragma once

#include "common.hpp"
#include <iostream>

using namespace std;

template<typename config_t>
void save_data(
		hls::stream<dataword>& in,
		hls::stream<ap_uint<96> >& out_n,
		hls::stream<ap_uint<32> >& out_iter,
		hls::stream<ap_int<config_t::DATA_WIDTH> > out[config_t::UNROLL_FACTOR])
{
	const ap_int<config_t::DATA_WIDTH> neg_inf = 1 << (config_t::DATA_WIDTH-1);


	// read N, the number of ints to compute softmax for
	dataword temp = in.read();
	unsigned int N_r = temp.data.range(31,0);
	unsigned int N_c = temp.data.range(63,32);
	unsigned int unquant_N = temp.data.range(95, 64);
	unsigned int ITER = N_c / config_t::UNROLL_FACTOR;
	ap_uint<96> N_all = temp.data.range(96,0);

	// In the testbench, N_r = 0, N_c = 64, unquant_N = 0, ITER = 4 (UNROLL_FACTOR = 16)

	// out_iter stores the number of iterations to run after unrolling
	out_iter.write(ITER);

	// out_n stores all the N's
	out_n.write(N_all);

	// DATA_WIDTH: 32, VEC_WIDTH: 16, NUM_CHANNEL = 128
	ap_int<config_t::DATA_WIDTH> max[config_t::VEC_WIDTH] = {neg_inf};
	ap_int<config_t::DATA_WIDTH> max_1[config_t::VEC_WIDTH / 2];
	ap_int<config_t::DATA_WIDTH> max_2[config_t::VEC_WIDTH / 4];
	ap_int<config_t::DATA_WIDTH> max_3[config_t::VEC_WIDTH / 8];
	ap_int<config_t::DATA_WIDTH> max_val;
	ap_int<config_t::DATA_WIDTH> buffer[config_t::NUM_CHANNEL];  // contains room for 128 numbers. In the example we only use 64

	// Partition an array into many registers rather than using memory, improves throughout but higher resource utilization
#pragma HLS ARRAY_PARTITION variable=buffer complete dim=0
#pragma HLS ARRAY_PARTITION variable=max complete dim=0
#pragma HLS ARRAY_PARTITION variable=max_1 complete dim=0
#pragma HLS ARRAY_PARTITION variable=max_2 complete dim=0
#pragma HLS ARRAY_PARTITION variable=max_3 complete dim=0

	// j = 0; j < 4; j++
	for (int j=0; j < N_c / config_t::VEC_WIDTH; j++) {
		// Loop tripcount: manually specify the number of iterations performed by a loop. SIMULATION ONLY, doesn't affect synthesis
		// pipeline ii = 1: Initiation interval, meaning the pipelined loop can take in 1 input every cycle
		#pragma HLS loop_tripcount min=16/config_t::VEC_WIDTH max=config_t::MAX_SEQUENCE_LEN/config_t::VEC_WIDTH
		#pragma HLS pipeline ii=1

		// temp.data contains the next 16 numbers for softmax calculation
		temp = in.read();

		// In the first iteration (j = 0), reset all entries of max to -inf
		if (j == 0) {
			for (int k=0; k<config_t::VEC_WIDTH; k++)  {
				// HLS unroll: create multiple independent operations by duplicating the loop body
				#pragma HLS unroll
				max[k] = neg_inf;
			}

			max_val = neg_inf;
		}

		// store each number within temp.data in buffer
		// for k = 0; k < 16; k++  (representing 16 numbers in temp.data)
		for (int k=0; k < config_t::VEC_WIDTH; k++) {
			// Duplicate this loop so it can execute multiple iterations independently
			#pragma HLS unroll

			// Read in each individual number
			ap_int<config_t::DATA_WIDTH> read = temp.data.range(config_t::DATA_WIDTH * (k+1) - 1, config_t::DATA_WIDTH * k);
			buffer[k + j * config_t::VEC_WIDTH] = read;

			// This takes the max value for j = 0...3, but same k
			if (read > max[k]) {
				max[k] = read;
			}
		}

		// Extracts the largest value in the 64 numbers into amx_val
		if (config_t::VEC_WIDTH == 16) {
			for (int k=0; k < 8; k++) {
				#pragma HLS unroll
				if (max[2*k] < max[2*k+1]) {
					max_1[k] = max[2*k + 1];
				} else {
					max_1[k] = max[2*k];
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
	}


	// l = 0; l < 4; l++
	for (int l=0; l < ITER; l++) {
		#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
		#pragma HLS pipeline ii=1

		// UNROLL_FACTOR = 16
		for (int j=0; j < config_t::UNROLL_FACTOR; j++) {
			#pragma HLS unroll

			ap_int<config_t::DATA_WIDTH> read = buffer[j + l * config_t::UNROLL_FACTOR];

			// Independently write to the 16 out buffers. Subtract max_val from every number to bound the output.
			if (read == neg_inf) {
				out[j].write(read);
			} else {
				out[j].write(read - max_val);
			}
		}
	}
}


template<typename config_t>
void process_1(
		const ap_int<config_t::DATA_WIDTH> self_const,  // 30
		const ap_int<config_t::DATA_WIDTH> b,  // 1913
		const ap_int<config_t::DATA_WIDTH> c,  // 1394358
		const ap_int<config_t::DATA_WIDTH> x0, // -490
		hls::stream<ap_uint<32> > &in_iter,
		hls::stream<ap_int<config_t::DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<32> > &out_iter,
		hls::stream<ap_int<config_t::DATA_WIDTH*2> > out[config_t::UNROLL_FACTOR])
{
	// read in ITER and write out to out_iter
	unsigned int ITER = in_iter.read();
	out_iter.write(ITER);

	// UNROLL_FACTOR: 16
	ap_int<config_t::DATA_WIDTH> x[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> q[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> r[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH*2> exp[config_t::UNROLL_FACTOR];

	// Store all the arrays in individual registers, faster performance but more resource used
#pragma HLS ARRAY_PARTITION variable=x dim=0 complete
#pragma HLS ARRAY_PARTITION variable=q dim=0 complete
#pragma HLS ARRAY_PARTITION variable=r dim=0 complete
#pragma HLS ARRAY_PARTITION variable=exp dim=0 complete

	for (int l=0; l<ITER; l++) {
#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
		#pragma HLS pipeline ii=1
		for (int j=0; j < config_t::UNROLL_FACTOR; j++) {
			// Everything here is independent of other j's since the loop is unrolled
			#pragma HLS unroll
			ap_int<config_t::DATA_WIDTH> read = in[j].read();

			// less than -14700 - too small to care?
			if (read < self_const * x0) {
				x[j] = self_const * x0;
			} else {
				x[j] = read;
			}

			// Quotient (from integer division)
			q[j] = x[j] / x0;

			// Remainder
			r[j] = x[j] - x0 * q[j];

			// Exponent approximation
			ap_int<config_t::DATA_WIDTH*2> temp = ((r[j] + b) * r[j] + c) << (self_const - q[j]);

			// Exponent can't be less than 0, so clamp it to 0
			if (temp < 0) {
				exp[j] = 0;
			} else {
				exp[j] = temp;
			}

			out[j].write(exp[j]);
		}

	}
}

// every cycle input 16 numbers. Multiply by a constant and divide by 2^e
// QUANT_DATA_WIDTH: 16
template<typename config_t>
void QuantAct_1_channel(
		const ap_int<config_t::DATA_WIDTH> m,  // 1614886140
		const ap_int<config_t::QUANT_DATA_WIDTH> e,  // 66
		hls::stream<ap_uint<32> > &in_iter,
		hls::stream<ap_int<config_t::DATA_WIDTH*2> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<32> > &out_iter,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > out[config_t::UNROLL_FACTOR])
{

	dataword temp;
	dataword out_data;

	// read the number of iterations to perform (accounts for unrolling)
	unsigned int ITER = in_iter.read();
	out_iter.write(ITER);

	// ITER = 4
	for (int l=0; l<ITER; l++) {
#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
		#pragma HLS pipeline ii=1

		for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
			#pragma HLS unroll

			// DATA_WIDTH*2 because "in" is already an "exponential"
			ap_int<config_t::DATA_WIDTH*2> read = in[k].read();
			ap_int<config_t::DATA_WIDTH*3> read1 = read * m;
			ap_int<config_t::QUANT_DATA_WIDTH> read2;


            // See fixedpointmul 
			// if the (e-1)-th bit is 1 or 0...
			if (read1.bit(e - 1)) {
				read2 = (read1 >> e) + 1;
			} else {
				read2 = read1 >> e;
			}
			cout<<read<<" "<<read2<<endl;

			out[k].write(read2);
		}
	}
}


template<typename config_t>
void process_2(
		hls::stream<ap_uint<32> > &in_iter,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<32> > &out_iter,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > out[config_t::UNROLL_FACTOR])
{

	ap_int<config_t::DATA_WIDTH> sum_val;
	ap_int<config_t::DATA_WIDTH> sum[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> buffer[config_t::NUM_CHANNEL];

#pragma HLS ARRAY_PARTITION variable=sum dim=0 complete
#pragma HLS ARRAY_PARTITION variable=buffer dim=0 complete

	// read ITER, the number of iteration after accounting for unrolling
	unsigned int ITER = in_iter.read();
	out_iter.write(ITER);

	for (int l=0; l<ITER; l++) {
#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
		#pragma HLS pipeline ii=1

		// In the first iteration of the loop, reset sum[] and sum_val to 0
		if (l == 0) {
			sum_val = 0;

			for (int j=0; j<config_t::UNROLL_FACTOR; j++) {
				#pragma HLS unroll
				sum[j] = 0;
			}
		}

		// calculate sum between 4 elements
		for (int j=0; j<config_t::UNROLL_FACTOR; j++) {
			#pragma HLS unroll
			ap_int<config_t::QUANT_DATA_WIDTH> read = in[j].read();

			// buffer contains a storage of all the numbers, and will be used for dividing by
			// the sum later. TODO:  why shift by OUT_DATA_WIDTH?
			ap_int<config_t::DATA_WIDTH> read1 = ap_int<config_t::DATA_WIDTH>(read) << config_t::OUT_DATA_WIDTH;
			buffer[j + l * config_t::UNROLL_FACTOR] = read1;
			sum[j] += read;
		}

		// on the last iteration, tally all the sum among the 16 elements of sum[]
		if (l == ITER - 1) {
			for (int j=0; j<config_t::UNROLL_FACTOR; j++) {
				#pragma HLS unroll
				sum_val += sum[j];
			}
		}
	}

	for (int l=0; l<ITER; l++) {
#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
		#pragma HLS pipeline ii=1

		for (int j=0; j<config_t::UNROLL_FACTOR; j++) {
			#pragma HLS unroll
			ap_int<config_t::DATA_WIDTH> read = buffer[j + l * config_t::UNROLL_FACTOR];
			ap_int<config_t::DATA_WIDTH> div = read / sum_val;
			out[j].write(div);
		}
	}
}




template<typename config_t>
void write(
		hls::stream<ap_uint<96> >& in_n,
		hls::stream<ap_uint<32> >& in_iter,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> >& out)
{
	// read N (not really used) and ITER
	ap_uint<96> N = in_n.read();
	unsigned int ITER = in_iter.read();
	
	out.write(N);

	ap_uint<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> temp;

	for (int l=0; l<ITER; l++) {
#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR

		for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
			#pragma HLS unroll
			temp.range(config_t::OUT_DATA_WIDTH*(k+1)-1, config_t::OUT_DATA_WIDTH*k) = in[k].read();
		}

		out.write(temp);
	}
}


template<typename config_t>
void Softmax(
		const ap_int<config_t::DATA_WIDTH> self_const,
		const ap_int<config_t::DATA_WIDTH> x0,
		const ap_int<config_t::DATA_WIDTH> b,
		const ap_int<config_t::DATA_WIDTH> c,
		const ap_int<config_t::DATA_WIDTH> m,
		const ap_int<config_t::DATA_WIDTH> e,
		hls::stream<dataword>& in,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> >& out
		)
{
#pragma HLS dataflow
#pragma HLS inline

	hls::stream<ap_uint<96> > in_write_n;
	hls::stream<ap_uint<32> > in_proc_1_iter;
	hls::stream<ap_int<config_t::DATA_WIDTH> > in_proc_1[config_t::UNROLL_FACTOR];
    hls::stream<ap_uint<32> > in_quant_iter;
	hls::stream<ap_int<config_t::DATA_WIDTH*2> > in_quant[config_t::UNROLL_FACTOR];
	hls::stream<ap_uint<32> > in_proc_2_iter;
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > in_proc_2[config_t::UNROLL_FACTOR];
	hls::stream<ap_uint<32> > in_write_2_iter;
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > in_write[config_t::UNROLL_FACTOR];

	// save the number of iterations to run (number of inputs / unroll factor) in in_proc_1_iter.
	// save the inputs numbers, subtracting the largest number, in in_proc_1. They're already split by the unroll factor.
	save_data<config_t>(in, in_write_n, in_proc_1_iter, in_proc_1);

	// process 1
	// Calculate the "exponent" of all the numbers in in_proc_1, and output them to in_quant
	process_1<config_t>(self_const, b, c, x0, in_proc_1_iter, in_proc_1, in_quant_iter, in_quant);

	// This is some sort of activation? That turns the numbers from 32-bit into 16-bit, and the largest number is assigned
	// 32767. All other numbers scale down from there.
	QuantAct_1_channel<config_t>(m, e, in_quant_iter, in_quant, in_proc_2_iter, in_proc_2);

	// process 2
	// Computes the softmax by dividing each exponent by the sum of exponents
	process_2<config_t>(in_proc_2_iter, in_proc_2, in_write_2_iter, in_write);

	// write out the data from in_write into stream
	write<config_t>(in_write_n, in_write_2_iter, in_write, out);
}

