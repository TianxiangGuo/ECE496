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

				mean = sum_val / config_t::NUM_CHANNEL;
				out_mean1.write(mean);
				out_mean2.write(mean);
			}
		}

//		for (int j=0; j < config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; j++) { // each row
//			#pragma HLS pipeline ii=1
//			for (int k=0; k < config_t::UNROLL_FACTOR; k++) {
//				#pragma HLS unroll
//				ap_int<config_t::DATA_WIDTH> read = buffer[k + j * config_t::UNROLL_FACTOR];
//				ap_int<config_t::DATA_WIDTH> read1 = read - mean;
//
//				out_1[k].write(read1);
//				out_2[k].write(read1);
//			}
//		}
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
//		while(in_mean.empty())	ap_wait_n(1);
//		cout<<"var mean: "<<mean<<endl;
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

			}
		}
	}
}

//template<typename config_t>
//void get_num_bits(
//		ap_uint<config_t::DATA_WIDTH> var,
//		ap_uint<8> &bits)
//{
//	// only work for 32 bits
//	ap_uint<config_t::DATA_WIDTH / 2> temp_16;
//	ap_uint<config_t::DATA_WIDTH / 4> temp_8;
//	ap_uint<config_t::DATA_WIDTH / 8> temp_4;
//	ap_uint<config_t::DATA_WIDTH / 16> temp_2;
//
//	// the base
//	ap_uint<1> base_place_16, base_place_8, base_place_4, base_place_2;
//
//
//	temp_16 = var.range(31, 16) == 0 ? var.range(15, 0) : var.range(31, 16);
//	base_place_16 = var.range(31, 16) == 0 ? 0 : 1;
//
//	temp_8 = temp_16.range(15, 8) == 0 ? temp_16.range(7, 0) : temp_16.range(15, 8);
//	base_place_8 = temp_16.range(15, 8) == 0 ? 0 : 1;
//
//	temp_4 = temp_8.range(7, 4) == 0 ? temp_8.range(3, 0) : temp_8.range(7, 4);
//	base_place_4 = temp_8.range(7, 4) == 0 ? 0 : 1;
//
//	temp_2 = temp_4.range(3, 2) == 0 ? temp_4.range(1, 0) : temp_4.range(3, 2);
//	base_place_2 = temp_4.range(3, 2) == 0 ? 0 : 1;
//
//
//	bits = 1 + ((ap_uint<8>(base_place_16)<<4) | (ap_uint<8>(base_place_8)<<3) | (ap_uint<8>(base_place_4)<<2) | (ap_uint<8>(base_place_2)<<1) | ap_uint<8>(temp_2[1]));
//
//}


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
	var = in_var.read();
	// find number of bits
//	get_num_bits<config_t>(var, bits);
//	exp = 32 - bits;
	x = var;


	ap_uint<config_t::DATA_WIDTH> c = 0;


	ap_uint<config_t::DATA_WIDTH> d = 1 << 30; // The second-to-top bit is set.
//	ap_uint<4> count = 0;

	while (d > var){
		#pragma HLS loop_tripcount min=1 max=16
		d >>= 2;
	}
//	d = d >> exp;
	while (d != 0) {
		#pragma HLS loop_tripcount min=1 max=16
		if (x >= c + d) {
			x -= c + d;
			c = (c >> 1) + d;
		}
		else {
			c >>= 1;
		}
//		count++;
//		if(count == 5){
//			c = c >> ((bits >> 1) -5);
//			break;
//		}
		d >>= 2;
	}
	//cout<<"std: "<<c<<endl;
	//===================================================================
	//======================= divider====================================
	//===================================================================
//	ap_uint<config_t::DATA_WIDTH> result1 = ap_uint<32>(1<<31) / ap_uint<32>(c<<config_t::shift);
	#define DECIMALS 16
	ap_int<32> D_p = c;
//	//cout<<"================="<<result1<<"=========="<<endl;
//	ap_int<32> shift = 0;
//	int count =0;
//	while (D_p.range(31, DECIMALS) != 0) {
//		shift += 1;
//		D_p = D_p >> 1;
//		count++;
//	}
//	//cout<<shift<<endl;
	ap_int<32> x_init = (48 << DECIMALS) / 17 - (32 * D_p)/17;

	ap_int<32> read = ap_uint<32>(1<<31);

//	ap_int<32> N_p = read >> shift;
	ap_int<32> N_p = read;
	x = x_init;
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
	ap_uint<32> factor= result*(-1) >> 1;
//	//cout<<"================="<<factor<<"=========="<<endl;
	out_factor.write(factor);
	//cout<<"factor: "<<factor<<endl;
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

//	ap_uint<config_t::DATA_WIDTH> buffer[config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR][config_t::UNROLL_FACTOR];
//
//#pragma HLS ARRAY_PARTITION variable=buffer complete dim=2

	ap_int<config_t::DATA_WIDTH> mean;
	unsigned int N = in_n.read();
	out_n.write(N);

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512

//		for (int j=0; j<config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; j++) {
//			#pragma HLS pipeline ii=1
//			for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
//				#pragma HLS unroll
//				ap_int<config_t::DATA_WIDTH> read = in[k].read();
//				buffer[j][k] = read;
//			}
//		}

		for (int j=0; j<config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; j++) {
			#pragma HLS pipeline ii=1

			if (j == 0) {
				mean = in_mean.read();
				factor = in_factor.read();
			}

			for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in[k].read();
				y[k] = (read - mean) * (factor >> 1);
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
//#pragma HLS stream variable=mean_pipe1 depth=8192
//#pragma HLS stream variable=mean_pipe2 depth=8192

	//	 save buffer
	save_data<config_t>(in, n_pipe1, in_compute, in_compute_y, mean_pipe1, mean_pipe2);

	// compute var
	compute_var<config_t>(n_pipe1, n_pipe2, in_compute, in_sqrt, mean_pipe1);

	// square root
	sqrt_alg_based<config_t>(n_pipe2, n_pipe3, in_sqrt, in_compute_y_factor);
//	sqrt_tbl_based<config_t>(n_pipe2, n_pipe3, sqrt_table, in_sqrt, in_compute_y_factor);

	// add bias
	compute_y<config_t>(n_pipe3, n_pipe4, bias, in_compute_y_factor, in_compute_y, in_write, mean_pipe2);

	// write
	write<config_t>(n_pipe4, in_write, out);
}




