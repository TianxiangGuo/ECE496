#pragma once

#include "common.hpp"
#include "parameters.hpp"
#include <iostream>


using namespace std;


template<typename config_t>
void save_data(
		hls::stream<dataword>& in,
		hls::stream<ap_int<32> > &out_n,
		hls::stream<ap_int<config_t::DATA_WIDTH> > out_1[config_t::UNROLL_FACTOR],
		hls::stream<ap_int<config_t::DATA_WIDTH> > out_2[config_t::UNROLL_FACTOR],
		hls::stream<ap_int<config_t::DATA_WIDTH> > &out_mean1,
		hls::stream<ap_int<config_t::DATA_WIDTH> > &out_mean2
)
{
	// read N
	dataword temp = in.read();
	unsigned int N = temp.data;
	out_n.write(N);

	ap_int<config_t::DATA_WIDTH + config_t::LOG_NUM_CHANNEL> sum[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH + config_t::LOG_NUM_CHANNEL> sum_val;
	ap_int<config_t::DATA_WIDTH> mean;

#pragma HLS ARRAY_PARTITION variable=sum complete dim=0

	// save value
	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int j=0; j < config_t::NUM_CHANNEL / config_t::VEC_WIDTH; j++) { // each row
			#pragma HLS pipeline ii=1
			temp = in.read();

			// reset for each row
			if (j == 0) {
				// reset sum
				for (int k=0; k<config_t::VEC_WIDTH; k++) {
					#pragma HLS unroll
					sum[k] = 0;
				}

				sum_val = 0;
			}

			// store each row
			for (int k=0; k < config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = temp.data.range(config_t::DATA_WIDTH * (k+1) - 1, config_t::DATA_WIDTH * k);

				sum[k] += read;

				out_1[k].write(read);
				out_2[k].write(read);
			}

			// cal mean value for each row
			if (j == config_t::NUM_CHANNEL / config_t::VEC_WIDTH - 1) {
				for (int k=0; k<config_t::VEC_WIDTH; k++) {
					#pragma HLS unroll
					sum_val += sum[k];
				}

				if (sum_val.bit(config_t::DATA_WIDTH - 1) == 1)
				{
					if ((~(sum_val % config_t::NUM_CHANNEL) + 1) > (config_t::NUM_CHANNEL >> 1))
					{
						mean = sum_val / config_t::NUM_CHANNEL - 1;
					}
					else
					{
						mean = sum_val / config_t::NUM_CHANNEL;
					}
				}
				else
				{
					if (sum_val % config_t::NUM_CHANNEL > (config_t::NUM_CHANNEL / 2))
					{
						mean = sum_val / config_t::NUM_CHANNEL + 1;
					}
					else
					{
						mean = sum_val / config_t::NUM_CHANNEL;
					}
				}
				out_mean1.write(mean);
				out_mean2.write(mean);
//				cout<<"mean: "<<mean<<endl;
			}
		}
	}
}


template<typename config_t>
void compute_var(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_int<32> > &out_n,
		hls::stream<ap_int<config_t::DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &out_var,
		hls::stream<ap_int<config_t::DATA_WIDTH> > &in_mean
)
{

	ap_int<config_t::IM_DATA_WIDTH> y[config_t::UNROLL_FACTOR];
	ap_uint<config_t::DATA_WIDTH> var[config_t::UNROLL_FACTOR];
	ap_uint<config_t::DATA_WIDTH> var_val;
	ap_int<config_t::DATA_WIDTH> mean;

#pragma HLS ARRAY_PARTITION variable=y dim=0 complete
#pragma HLS ARRAY_PARTITION variable=var complete dim=0

	unsigned int N = in_n.read();
	out_n.write(N);

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int l=0; l<config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; l++) {
			#pragma HLS pipeline ii=1

			if (l == 0) {
				mean = in_mean.read();
				for (int j=0; j<config_t::VEC_WIDTH; j++) {
					#pragma HLS unroll
					var[j] = 0;
				}

				var_val = 0;
			}

			for (int j=0; j < config_t::UNROLL_FACTOR; j++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in[j].read() - mean;
				y[j] = read >> config_t::shift;
			}

			for (int j=0; j < config_t::UNROLL_FACTOR; j++) {
				#pragma HLS unroll
				var[j] += y[j] * y[j];
			}

			if (l == config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR - 1) {

				for (int j=0; j < config_t::UNROLL_FACTOR; j++) {
					#pragma HLS unroll
					var_val += var[j];
				}

				out_var.write(var_val);
//				cout<<"var: "<<var_val<<endl;

			}
		}
	}
}


template<typename config_t>
void sqrt_alg_based(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_int<32> > &out_n,
//		ap_int<32> N,
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &in_var,
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &out_factor)
{
	unsigned int N = in_n.read();
	out_n.write(N);

	ap_uint<config_t::DATA_WIDTH> var;
	ap_uint<config_t::DATA_WIDTH> x;
	ap_uint<8> bits;
	ap_uint<8> exp;

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
	//===================================================================
	//======================= sqrt====================================
	//===================================================================
	var = in_var.read();
	// find number of bits
	x = var;
	ap_uint<config_t::DATA_WIDTH> c = 0;
	ap_uint<config_t::DATA_WIDTH> d = 1 << 30; // The second-to-top bit is set.

	while (d > var){
		#pragma HLS loop_tripcount min=1 max=16
		d >>= 2;
	}
	while (d != 0) {
		#pragma HLS loop_tripcount min=1 max=16
		if (x >= c + d) {
			x -= c + d;
			c = (c >> 1) + d;
		}
		else {
			c >>= 1;
		}

		d >>= 2;
	}
//	cout<<"std: "<<c<<endl;
	//===================================================================
	//======================= divider====================================
	//===================================================================
	ap_uint<config_t::DATA_WIDTH> factor = ap_uint<32>(1<<31) / ap_uint<32>(c<<config_t::shift);
//	int DECIMALS = config_t::shift > 6 ? 15:16;
//	ap_int<32> D_p = c;
////	//cout<<"================="<<result1<<"=========="<<endl;
////	ap_int<32> shift = 0;
////	int count =0;
////	while (D_p.range(31, DECIMALS) != 0) {
////		shift += 1;
////		D_p = D_p >> 1;
////		count++;
////	}
////	//cout<<shift<<endl;
//	ap_int<32> x_init = (48 << DECIMALS) / 17 - (32 * D_p)/17;
//
//	ap_int<32> read = ap_uint<32>(1<<31);
//
////	ap_int<32> N_p = read >> shift;
//	ap_int<32> N_p = read;
//	x = x_init;
//	for (int i = 0; i < 3; i++) {
//		ap_int<32> b_p_x = (1 << DECIMALS) - ((D_p * x) >> DECIMALS);
//		x = x + ((x * b_p_x) >> DECIMALS);
//	}
//	//div = read / sum_val; // TODO: revert back to divide
//	ap_int<64> result = (N_p * x) >> DECIMALS;
//	if (result[DECIMALS-1] == 1) {
//		result = (result >> DECIMALS) + 1;
//	} else {
//		result = result >> DECIMALS;
//	}
//	ap_uint<32> factor= result*(-1) >> config_t::shift;
//	//cout<<"================="<<factor<<"=========="<<endl;
	out_factor.write(factor);
//	cout<<"factor: "<<factor<<endl;
	}
}


template<typename config_t>
void compute_y(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_int<32> > &out_n,
		const ap_int<config_t::DATA_WIDTH> bias[config_t::NUM_CHANNEL],
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &in_factor,
		hls::stream<ap_int<config_t::DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<config_t::DATA_WIDTH> > out[config_t::UNROLL_FACTOR],
		hls::stream<ap_int<config_t::DATA_WIDTH> > &in_mean
)
{

	ap_uint<config_t::DATA_WIDTH> factor;
	ap_int<config_t::DATA_WIDTH> y[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> y1[config_t::UNROLL_FACTOR];

#pragma HLS ARRAY_PARTITION variable=y complete dim=0
#pragma HLS ARRAY_PARTITION variable=y1 complete dim=0

	ap_int<config_t::DATA_WIDTH> mean;
	unsigned int N = in_n.read();
	out_n.write(N);

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512


		for (int j=0; j<config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; j++) {
			#pragma HLS pipeline ii=1

			if (j == 0) {
				mean = in_mean.read();
				factor = in_factor.read();
			}

			for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in[k].read();
				y[k] = ((read - mean) * factor) >> 1;
				y1[k] = y[k] + bias[k + j * config_t::UNROLL_FACTOR];
				out[k].write(y1[k]);
			}
		}
	}
}

template<typename config_t>
void write(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_uint<config_t::DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<dataword>& out)
{

	// read N
	unsigned int N = in_n.read();

	dataword out_data;

	out_data.data = N;
	out_data.id = 0;
	out_data.dest = 255;
	out_data.last = 0;
	out_data.user = config_t::NUM_CHANNEL / config_t::VEC_WIDTH + 1;
	out.write(out_data);


	ap_uint<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> temp[config_t::VEC_WIDTH / config_t::UNROLL_FACTOR];

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int j=0; j<config_t::NUM_CHANNEL / config_t::VEC_WIDTH; j++) {
#pragma HLS pipeline ii=1
			for (int k=0; k<config_t::VEC_WIDTH / config_t::UNROLL_FACTOR; k++) {


				for (int l=0; l<config_t::UNROLL_FACTOR; l++) {
					#pragma HLS unroll
					temp[k].range(config_t::DATA_WIDTH * (l+1)-1, config_t::DATA_WIDTH*l) = in[l].read();
				}

				if (k == config_t::VEC_WIDTH / config_t::UNROLL_FACTOR - 1) {
					for (int l=0; l<config_t::VEC_WIDTH / config_t::UNROLL_FACTOR; l++) {
						#pragma HLS unroll
						out_data.data.range(config_t::DATA_WIDTH * config_t::UNROLL_FACTOR*(l+1)-1, config_t::DATA_WIDTH * config_t::UNROLL_FACTOR*l) = temp[l];
					}

					out_data.id = 0;
					out_data.dest = 255;
					out_data.last = j==config_t::NUM_CHANNEL / config_t::VEC_WIDTH-1 ? 1 : 0;
					out_data.user = config_t::NUM_CHANNEL / config_t::VEC_WIDTH + 1;
					out.write(out_data);
				}
			}
		}
	}
}




template<typename config_t>
void LayerNorm(
//		const ap_uint<32> sqrt_table[2][65536],
		const ap_int<config_t::DATA_WIDTH> bias[config_t::NUM_CHANNEL],
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS dataflow
#pragma HLS inline

	static hls::stream<ap_int<32> > n_pipe1;
	static hls::stream<ap_int<32> > n_pipe2;
	static hls::stream<ap_int<32> > n_pipe3;
	static hls::stream<ap_int<32> > n_pipe4;
	static hls::stream<ap_int<32> > mean_pipe1;
	static hls::stream<ap_int<32> > mean_pipe2;
	static hls::stream<ap_int<config_t::DATA_WIDTH> > in_compute[config_t::UNROLL_FACTOR];
	static hls::stream<ap_int<config_t::DATA_WIDTH> > in_compute_y[config_t::UNROLL_FACTOR];
	static hls::stream<ap_uint<config_t::DATA_WIDTH> > in_sqrt;
	static hls::stream<ap_uint<config_t::DATA_WIDTH> > in_compute_y_factor;
	static hls::stream<ap_uint<config_t::DATA_WIDTH> > in_write[config_t::UNROLL_FACTOR];

#pragma HLS stream variable=in_compute depth=512
#pragma HLS stream variable=in_compute_y depth=512

	//	 save buffer
	save_data<config_t>(in, n_pipe1, in_compute, in_compute_y, mean_pipe1, mean_pipe2);

	// compute var
	compute_var<config_t>(n_pipe1, n_pipe2, in_compute, in_sqrt, mean_pipe1);

	// square root
	sqrt_alg_based<config_t>(n_pipe2, n_pipe3, in_sqrt, in_compute_y_factor);

	// add bias
	compute_y<config_t>(n_pipe3, n_pipe4, bias, in_compute_y_factor, in_compute_y, in_write, mean_pipe2);

	// write
	write<config_t>(n_pipe4, in_write, out);
}




