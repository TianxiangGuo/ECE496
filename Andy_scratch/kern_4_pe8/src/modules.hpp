#pragma once
#include "common.hpp"


template <typename config_t>
void ReadA(
		hls::stream<ap_uint<32> > &N_pipe_in,
		hls::stream<ap_uint<32> > &N_pipe_out,
		const ap_uint<config_t::DATA_WIDTH * config_t::SCALE_FACTOR> a[config_t::M * config_t::ITER_PE / config_t::NUM_TILE][config_t::VEC_WIDTH * 2 / config_t::SCALE_FACTOR],
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_pipes_1,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_pipes_2,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_pipes_3,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_pipes_4,
		int pe_index)
{

	ap_uint<config_t::DATA_WIDTH * config_t::VEC_WIDTH * 2> temp;

	unsigned int N = N_pipe_in.read();

	if (pe_index < config_t::NUM_PE - 1) {
		N_pipe_out.write(N);
	}

	for (int i=0; i < N; i++) {
#pragma HLS loop_tripcount min=1 max=4096 avg=32
		for (int n=0; n < config_t::M * config_t::ITER_PE / config_t::NUM_TILE; n++) {
			#pragma HLS PIPELINE ii=1

			for (int w=0; w < config_t::VEC_WIDTH * 2 / config_t::SCALE_FACTOR; w ++) {
				#pragma HLS UNROLL
				temp.range(config_t::DATA_WIDTH * config_t::SCALE_FACTOR * (w + 1) - 1, config_t::DATA_WIDTH * config_t::SCALE_FACTOR * w) = a[n][w];
			}
			a_pipes_1.write(temp.range(config_t::BUS_WIDTH / 2 - 1, 0));
			a_pipes_2.write(temp.range(config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH / 2));
			a_pipes_3.write(temp.range(config_t::BUS_WIDTH + config_t::BUS_WIDTH / 2 - 1, config_t::BUS_WIDTH));
			a_pipes_4.write(temp.range(config_t::BUS_WIDTH + config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH + config_t::BUS_WIDTH / 2));
		}
	}
}

template <typename config_t>
void PE(
		hls::stream<ap_uint<32> >& N_pipe_in,
		hls::stream<ap_uint<32> >& N_pipe_out,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_in_1,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_in_2,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_in_3,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &a_in_4,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &b_in_1,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &b_in_2,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &b_out_1,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &b_out_2,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > &c_in_1,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > &c_in_2,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > &c_out_1,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > &c_out_2,
		int pe_index)
{

	ap_int<24> temp_a1_int8[config_t::VEC_WIDTH];
	ap_int<24> temp_a2_int8[config_t::VEC_WIDTH];
	ap_int<8> temp_b_int8[config_t::VEC_WIDTH][config_t::ITER_PE];
	ap_int<24> temp_a1_a2[config_t::VEC_WIDTH];
	ap_int<32> temp_c_int8[config_t::VEC_WIDTH];
	ap_int<16> temp_c1_int8[config_t::VEC_WIDTH];
	ap_int<16> temp_c2_int8[config_t::VEC_WIDTH];
	ap_uint<config_t::BUS_WIDTH> a_read1;
	ap_uint<config_t::BUS_WIDTH> a_read2;
	ap_uint<config_t::BUS_WIDTH> b_read;
	ap_uint<config_t::BUS_WIDTH> b_read_out;
	ap_int<config_t::DATA_WIDTH> temp_a1[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH> temp_a2[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH> temp_b[config_t::VEC_WIDTH][config_t::ITER_PE];
	ap_int<config_t::OUT_DATA_WIDTH> temp_c1[config_t::VEC_WIDTH];
	ap_int<config_t::OUT_DATA_WIDTH> temp_c2[config_t::VEC_WIDTH];
	ap_uint<config_t::OUT_DATA_WIDTH> c_read1;
	ap_uint<config_t::OUT_DATA_WIDTH> c_read2;
	ap_int<config_t::OUT_DATA_WIDTH> c_buffer1[config_t::ITER_PE];
	ap_int<config_t::OUT_DATA_WIDTH> c_buffer2[config_t::ITER_PE];
#pragma HLS ARRAY_PARTITION variable=temp_a1_int8 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_a2_int8 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_b_int8 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_a1_a2 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_c_int8 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_c1_int8 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_c2_int8 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c_buffer1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c_buffer2 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_c1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_c2 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_a1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_a2 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=temp_b dim=0 complete

	int i, j;

	unsigned int N = N_pipe_in.read();

	if (pe_index < config_t::NUM_PE - 1) {
		N_pipe_out.write(N);
	}

	Loop_1:
	for (int iter=0; iter <  N; iter++) {
#pragma HLS loop_tripcount min=1 max=4096 avg=32
		for (int iter2=0; iter2 < config_t::M  * config_t::ITER_PE / config_t::NUM_TILE; iter2++) {
			#pragma HLS PIPELINE ii=1

			i = iter2 / config_t::ITER_PE;
			j = iter2 % config_t::ITER_PE;

			a_read1.range(config_t::BUS_WIDTH / 2 - 1, 0) = a_in_1.read();
			a_read1.range(config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH / 2) = a_in_2.read();
			a_read2.range(config_t::BUS_WIDTH / 2 - 1, 0) = a_in_3.read();
			a_read2.range(config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH / 2) = a_in_4.read();


			for (int w=0; w < config_t::VEC_WIDTH; w++) {
				#pragma HLS UNROLL

				temp_a1_int8[w].range(7,0) = a_read1(config_t::DATA_WIDTH * w + config_t::DATA_WIDTH - 1,config_t::DATA_WIDTH * w);

				if (temp_a1_int8[w].bit(7)) {
					temp_a1_int8[w].range(23,8) = -1;
				}
				else {
					temp_a1_int8[w].range(23,8) = 0;
				}

				temp_a2_int8[w].range(23,16) = a_read2(config_t::DATA_WIDTH * w + config_t::DATA_WIDTH - 1,config_t::DATA_WIDTH * w);
				temp_a2_int8[w].range(15,0) = 0;

			}

			if (i == 0) {
				b_read.range(config_t::BUS_WIDTH / 2 - 1, 0) = b_in_1.read();
				b_read.range(config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH / 2) = b_in_2.read();

				for (int w=0; w < config_t::VEC_WIDTH; w++) {
					#pragma HLS UNROLL
					temp_b_int8[w][j] = b_read(config_t::DATA_WIDTH * w + config_t::DATA_WIDTH - 1,config_t::DATA_WIDTH * w);
				}
			}
			else if (i > 0 && i < config_t::NUM_PE - pe_index) {
				b_read_out.range(config_t::BUS_WIDTH / 2 - 1, 0) = b_in_1.read();
				b_read_out.range(config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH / 2) = b_in_2.read();
				b_out_1.write(b_read_out.range(config_t::BUS_WIDTH / 2 - 1, 0));
				b_out_2.write(b_read_out.range(config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH / 2));
			}

			for (int w=0; w < config_t::VEC_WIDTH; w++) {
				#pragma HLS UNROLL
				temp_c_int8[w] = (temp_a2_int8[w] + temp_a1_int8[w]) * temp_b_int8[w][j];
				temp_c1_int8[w] = temp_c_int8[w].range(15,0);
				temp_c2_int8[w] = temp_c_int8[w].range(31,16) + temp_c_int8[w].bit(15);
			}

			ap_int<32> temp1 = 0;
			ap_int<32> temp2 = 0;

			for (int w=0; w < config_t::VEC_WIDTH; w++) {
				#pragma HLS UNROLL
				temp1 += temp_c1_int8[w];
				temp2 += temp_c2_int8[w];
			}

			c_buffer1[j] = temp1;
			c_buffer2[j] = temp2;

			if (j == config_t::ITER_PE - 1) {

				if (pe_index > 0) {
					c_read1 = c_in_1.read();
					c_read2 = c_in_2.read();
				}
				else {
					c_read1 = 0;
					c_read2 = 0;
				}

				for (int w=0; w < config_t::ITER_PE; w++) {
					#pragma HLS UNROLL
					c_read1 += c_buffer1[w];
					c_read2 += c_buffer2[w];
				}

				c_out_1.write(c_read1);
				c_out_2.write(c_read2);
			}
		}
	}
}




template <typename config_t>
void ReadN(
		hls::stream<ap_uint<32> > &N_in,
		hls::stream<ap_uint<32> > &N_pipe_1,
		hls::stream<ap_uint<32> > &N_pipe_2)
{
	unsigned int N = N_in.read();
	N_pipe_1.write(N);
	N_pipe_2.write(N);
}


template <typename config_t>
void TILE (
		const ap_uint<config_t::DATA_WIDTH * config_t::SCALE_FACTOR> a[config_t::NUM_PE][config_t::M * config_t::ITER_PE / config_t::NUM_TILE][config_t::VEC_WIDTH * 2 / config_t::SCALE_FACTOR],
		hls::stream<ap_uint<32> > &N_in,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &b_in_1,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > &b_in_2,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > &c_out_1,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > &c_out_2)
{
	hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > a_pipes_1[config_t::NUM_PE];
	hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > a_pipes_2[config_t::NUM_PE];
	hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > a_pipes_3[config_t::NUM_PE];
	hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > a_pipes_4[config_t::NUM_PE];
	hls::stream<ap_uint<32> > N_pipes[config_t::NUM_PE+1];
	hls::stream<ap_uint<32> > N_pipes_reada[config_t::NUM_PE+1];
	hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > c_pipes_1[config_t::NUM_PE];
	hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > c_pipes_2[config_t::NUM_PE];
	hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > b_pipes_1[config_t::NUM_PE+1];
	hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > b_pipes_2[config_t::NUM_PE+1];

#pragma HLS ARRAY_PARTITION variable=a_pipes_1 dim=1 complete
#pragma HLS ARRAY_PARTITION variable=a_pipes_2 dim=1 complete
#pragma HLS ARRAY_PARTITION variable=a_pipes_3 dim=1 complete
#pragma HLS ARRAY_PARTITION variable=a_pipes_4 dim=1 complete
#pragma HLS ARRAY_PARTITION variable=N_pipes dim=1 complete
#pragma HLS ARRAY_PARTITION variable=N_pipes_reada dim=1 complete
#pragma HLS ARRAY_PARTITION variable=c_pipes_1 dim=1 complete
#pragma HLS ARRAY_PARTITION variable=c_pipes_2 dim=1 complete
#pragma HLS ARRAY_PARTITION variable=b_pipes_1 dim=1 complete
#pragma HLS ARRAY_PARTITION variable=b_pipes_2 dim=1 complete
#pragma HLS DATAFLOW

	ReadN<config_t>(N_in, N_pipes[0], N_pipes_reada[0]);

	if (config_t::NUM_PE == 1) {
		ReadA <config_t>(
				N_pipes_reada[0],
				N_pipes_reada[1],
				a[0],
				a_pipes_1[0], a_pipes_2[0], a_pipes_3[0], a_pipes_4[0],
				0);

		PE <config_t>(
				N_pipes[0],
				N_pipes[1],
				a_pipes_1[0], a_pipes_2[0], a_pipes_3[0], a_pipes_4[0],
				b_in_1, b_in_2,
				b_pipes_1[0], b_pipes_2[0],
				c_pipes_1[0], c_pipes_2[0],
				c_out_1, c_out_2,
				0);
	}
	else if (config_t::NUM_PE == 2) {
		ReadA<config_t>(
				N_pipes_reada[0],
				N_pipes_reada[1],
				a[0],
				a_pipes_1[0], a_pipes_2[0], a_pipes_3[0], a_pipes_4[0],
				0);

		PE <config_t>(
				N_pipes[0],
				N_pipes[1],
				a_pipes_1[0], a_pipes_2[0], a_pipes_3[0], a_pipes_4[0],
				b_in_1, b_in_2,
				b_pipes_1[1], b_pipes_2[1],
				c_pipes_1[0], c_pipes_2[0],
				c_pipes_1[1], c_pipes_2[1],
				0);

		ReadA<config_t>(
				N_pipes_reada[1],
				N_pipes_reada[2],
				a[1],
				a_pipes_1[1], a_pipes_2[1], a_pipes_3[1], a_pipes_4[1],
				1);

		PE <config_t>(
				N_pipes[1],
				N_pipes[2],
				a_pipes_1[1], a_pipes_2[1], a_pipes_3[1], a_pipes_4[1],
				b_pipes_1[1], b_pipes_2[1],
				b_pipes_1[2], b_pipes_2[2],
				c_pipes_1[1], c_pipes_2[1],
				c_out_1, c_out_2,
				1);
	}
	else {
		ReadA<config_t>(
				N_pipes_reada[0],
				N_pipes_reada[1],
				a[0],
				a_pipes_1[0], a_pipes_2[0], a_pipes_3[0], a_pipes_4[0],
				0);

		PE <config_t>(
				N_pipes[0],
				N_pipes[1],
				a_pipes_1[0], a_pipes_2[0], a_pipes_3[0], a_pipes_4[0],
				b_in_1, b_in_2,
				b_pipes_1[1], b_pipes_2[1],
				c_pipes_1[0], c_pipes_2[0],
				c_pipes_1[1], c_pipes_2[1],
				0);

		for (int i=1; i < config_t::NUM_PE - 1; i++) {
			#pragma HLS UNROLL
			ReadA<config_t>(
					N_pipes_reada[i],
					N_pipes_reada[i + 1],
					a[i],
					a_pipes_1[i], a_pipes_2[i], a_pipes_3[i], a_pipes_4[i],
					i);

			PE <config_t>(
					N_pipes[i],
					N_pipes[i + 1],
					a_pipes_1[i], a_pipes_2[i], a_pipes_3[i], a_pipes_4[i],
					b_pipes_1[i], b_pipes_2[i],
					b_pipes_1[i + 1], b_pipes_2[i + 1],
					c_pipes_1[i], c_pipes_2[i],
					c_pipes_1[i + 1], c_pipes_2[i + 1],
					i);
		}

		ReadA<config_t>(
				N_pipes_reada[config_t::NUM_PE - 1],
				N_pipes_reada[config_t::NUM_PE],
				a[config_t::NUM_PE - 1],
				a_pipes_1[config_t::NUM_PE - 1], a_pipes_2[config_t::NUM_PE - 1], a_pipes_3[config_t::NUM_PE - 1], a_pipes_4[config_t::NUM_PE - 1],
				config_t::NUM_PE - 1);

		PE <config_t>(
				N_pipes[config_t::NUM_PE - 1],
				N_pipes[config_t::NUM_PE],
				a_pipes_1[config_t::NUM_PE - 1], a_pipes_2[config_t::NUM_PE - 1], a_pipes_3[config_t::NUM_PE - 1], a_pipes_4[config_t::NUM_PE - 1],
				b_pipes_1[config_t::NUM_PE - 1], b_pipes_2[config_t::NUM_PE - 1],
				b_pipes_1[config_t::NUM_PE], b_pipes_2[config_t::NUM_PE],
				c_pipes_1[config_t::NUM_PE - 1], c_pipes_2[config_t::NUM_PE - 1],
				c_out_1, c_out_2,
				config_t::NUM_PE - 1);
	}


}

template <typename config_t>
void ReadB (
		hls::stream<dataword>& in,
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > b_pipes_1[config_t::NUM_TILE / 2],
		hls::stream<ap_uint<config_t::BUS_WIDTH / 2> > b_pipes_2[config_t::NUM_TILE / 2],
		hls::stream<ap_uint<32> > N_pipes[2 + config_t::NUM_TILE / 2])
{
	dataword temp;

	temp = in.read();
	unsigned int N = temp.data;

	for (int i=0; i < 2 + config_t::NUM_TILE / 2; i++) {
		#pragma HLS UNROLL
		N_pipes[i].write(temp.data);
	}

	for (int i=0; i < N; i++) {
#pragma HLS loop_tripcount min=1 max=4096 avg=32
		for (int j=0; j < config_t::K / config_t::VEC_WIDTH; j++) {
			#pragma HLS PIPELINE ii=1
			temp = in.read();
			for (int t=0; t < config_t::NUM_TILE / 2; t++) {
				#pragma HLS UNROLL
				b_pipes_1[t].write(temp.data.range(config_t::BUS_WIDTH / 2 - 1, 0));
				b_pipes_2[t].write(temp.data.range(config_t::BUS_WIDTH - 1, config_t::BUS_WIDTH / 2));
			}
		}
	}
}


template <typename config_t>
void ConvertWidthC (
		hls::stream<ap_uint<32> > &N_pipe,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > c_pipes[config_t::NUM_TILE / 2][2],
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH * config_t::NUM_TILE> > &out
		)
{
	dataword out_data;
	ap_uint<config_t::OUT_DATA_WIDTH * config_t::NUM_TILE> temp;


	unsigned int N = N_pipe.read();

	for (int i=0; i < N; i++) {
#pragma HLS loop_tripcount min=1 max=4096 avg=32
		for (int n=0; n < config_t::M / config_t::OUT_VEC_WIDTH; n++) {
			for (int j=0; j < config_t::OUT_VEC_WIDTH / config_t::NUM_TILE; j++) {
				#pragma HLS PIPELINE ii=1

				for (int t=0; t < config_t::NUM_TILE / 2; t++) {
					#pragma HLS UNROLL
					temp.range(2*t*config_t::OUT_DATA_WIDTH + config_t::OUT_DATA_WIDTH-1, 2*t*config_t::OUT_DATA_WIDTH) = c_pipes[t][0].read();
					temp.range((2*t + 1)*config_t::OUT_DATA_WIDTH + config_t::OUT_DATA_WIDTH-1, (2*t + 1)*config_t::OUT_DATA_WIDTH) = c_pipes[t][1].read();
				}

				out.write(temp);
			}
		}
	}
}


template <typename config_t>
void WriteC (
		hls::stream<ap_uint<32> > &N_pipe,
		hls::stream<ap_uint<config_t::OUT_DATA_WIDTH * config_t::NUM_TILE> > &in,
		hls::stream<dataword>& out)
{
	dataword out_data;

	unsigned int N = N_pipe.read();

	out_data.data = N;
	out_data.id = config_t::id;
	out_data.dest = config_t::dest;
	out_data.user = config_t::M / config_t::OUT_VEC_WIDTH + 1;
	out_data.last = 0;
	out.write(out_data);

	for (int i=0; i < N; i++) {
#pragma HLS loop_tripcount min=1 max=4096 avg=32
		for (int n=0; n < config_t::M / config_t::OUT_VEC_WIDTH; n++) {
			for (int j=0; j < config_t::OUT_VEC_WIDTH / config_t::NUM_TILE; j++) {
				#pragma HLS PIPELINE ii=1
				out_data.data(config_t::OUT_DATA_WIDTH * config_t::NUM_TILE * j + config_t::OUT_DATA_WIDTH * config_t::NUM_TILE - 1, config_t::OUT_DATA_WIDTH * config_t::NUM_TILE * j) = in.read();
			}

			out_data.id = config_t::id;
			out_data.dest = config_t::dest;
			out_data.last = n == config_t::M / config_t::OUT_VEC_WIDTH - 1 ? 1 : 0;
			out_data.user = i == 0 ? config_t::M / config_t::OUT_VEC_WIDTH + 1 : config_t::M / config_t::OUT_VEC_WIDTH;	// number of flits
			out.write(out_data);
		}
	}
}

template <typename config_t>
void MatMul(
		const ap_uint<config_t::DATA_WIDTH * config_t::SCALE_FACTOR> weights[config_t::NUM_TILE / 2][config_t::NUM_PE][config_t::M * config_t::ITER_PE / config_t::NUM_TILE][config_t::VEC_WIDTH * 2 / config_t::SCALE_FACTOR],
		hls::stream<dataword>& b,
		hls::stream<dataword>& c)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=b
#pragma HLS INTERFACE axis port=c

	hls::stream<ap_uint<config_t::BUS_WIDTH/2> > b_pipes_1[config_t::NUM_TILE / 2];
	hls::stream<ap_uint<config_t::BUS_WIDTH/2> > b_pipes_2[config_t::NUM_TILE / 2];
	hls::stream<ap_uint<config_t::OUT_DATA_WIDTH> > c_pipes[config_t::NUM_TILE / 2][2];
	hls::stream<ap_uint<config_t::OUT_DATA_WIDTH * config_t::NUM_TILE> > conv_pipe;
	hls::stream<ap_uint<32> > N_pipes[2 + config_t::NUM_TILE / 2];
	hls::stream<dataword> b_in;

#pragma HLS resource variable=weights core=RAM_1P_URAM

#pragma HLS ARRAY_PARTITION variable=weights dim=1 complete
#pragma HLS ARRAY_PARTITION variable=weights dim=2 complete
#pragma HLS ARRAY_PARTITION variable=weights dim=4 complete
#pragma HLS ARRAY_PARTITION variable=b_pipes_1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=b_pipes_2 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c_pipes dim=0 complete
#pragma HLS ARRAY_PARTITION variable=N_pipes dim=0 complete

#pragma HLS DATAFLOW

	ReadB<config_t>(b, b_pipes_1, b_pipes_2, N_pipes);

	for (int i=0; i < config_t::NUM_TILE / 2; i++) {
		#pragma HLS UNROLL

		TILE<config_t>(
				weights[i],
				N_pipes[2 + i],
				b_pipes_1[i], b_pipes_2[i],
				c_pipes[i][0], c_pipes[i][1]);
	}

	ConvertWidthC<config_t>(N_pipes[0], c_pipes, conv_pipe);
	WriteC<config_t>(N_pipes[1], conv_pipe, c);

}

template <typename config_t>
void AddBias(
		const ap_int<config_t::OUT_DATA_WIDTH> bias[config_t::M / config_t::OUT_VEC_WIDTH][config_t::OUT_VEC_WIDTH],
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

	dataword out_data;
	out_data= in.read();

	unsigned int N = out_data.data;

	out_data.data = N;
	out_data.id = config_t::id;
	out_data.dest = config_t::dest;
	out_data.user = config_t::M / config_t::OUT_VEC_WIDTH + 1;
	out_data.last = 0;
	out.write(out_data);

#pragma HLS ARRAY_PARTITION variable=bias dim=2 complete

	for (int iter=0; iter < N; iter++) {
#pragma HLS loop_tripcount min=1 max=4096 avg=32
		for (int i=0; i < config_t::M / config_t::OUT_VEC_WIDTH; i++) {
			#pragma HLS PIPELINE
			dataword temp = in.read();

			for (int j=0; j < config_t::OUT_VEC_WIDTH; j++) {
				#pragma HLS UNROLL
				out_data.data.range(config_t::OUT_DATA_WIDTH * (j+1) - 1, config_t::OUT_DATA_WIDTH * j) = temp.data.range(config_t::OUT_DATA_WIDTH * (j+1) - 1, config_t::OUT_DATA_WIDTH * j) + bias[i][j];
			}

			out_data.id = config_t::id;
			out_data.dest = config_t::dest;
			out_data.last = i == config_t::M / config_t::OUT_VEC_WIDTH - 1 ? 1 : 0;
			out_data.user = config_t::M / config_t::OUT_VEC_WIDTH + 1;
			out.write(out_data);

		}
	}
}
template <typename config_t>
void Linear(
		const ap_uint<config_t::DATA_WIDTH * config_t::SCALE_FACTOR> weights[config_t::NUM_TILE / 2][config_t::NUM_PE][config_t::M * config_t::ITER_PE / config_t::NUM_TILE][config_t::VEC_WIDTH * 2 / config_t::SCALE_FACTOR],
		const ap_int<config_t::OUT_DATA_WIDTH> bias[config_t::M / config_t::OUT_VEC_WIDTH][config_t::OUT_VEC_WIDTH],
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS inline
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out
#pragma HLS DATAFLOW


	hls::stream<dataword> pipe;

	MatMul<config_t>(weights, in, pipe);
	AddBias<config_t>(bias, pipe, out);
}

template<typename config_t>
void LinearBcast(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
	hls::stream<ap_uint<512> > fifo;
	dataword temp;
	unsigned int N;

	temp = in.read();
	N = temp.data.range(31,0);

#pragma HLS stream variable=fifo depth=config_t::K/config_t::VEC_WIDTH

	for (int i=0; i < N; i++) {
		for (int iter=0; iter < config_t::NUM_DEST; iter++) {

			if (i == 0)
			{
				temp.data = N;
				temp.id = config_t::id;
				temp.dest = config_t::dest + iter;
				temp.last = 0;
				temp.user = config_t::K / config_t::VEC_WIDTH + 1;
				out.write(temp);
			}

			for (int j=0; j < config_t::K / config_t::VEC_WIDTH; j++){
				#pragma HLS pipeline ii=1

				if (iter == 0)
				{
					temp = in.read();
					fifo.write(temp.data);
				}
				else if (iter == config_t::NUM_DEST - 1)
				{
					temp.data = fifo.read();
				}
				else
				{
					temp.data = fifo.read();
					fifo.write(temp.data);
				}

				temp.id = config_t::id;
				temp.dest = config_t::dest + iter;
				temp.last = j == config_t::K / config_t::VEC_WIDTH-1 ? 1:0;
				temp.user = i == 0 ? config_t::K / config_t::VEC_WIDTH + 1 : config_t::K / config_t::VEC_WIDTH;
				out.write(temp);
			}
		}
	}
}

template <typename config_t>
void LinearScatterSend(
		hls::stream<ap_int<32> >& in_n,
		hls::stream<ap_uint<512> > in_fifo[config_t::NUM_DEST],
		hls::stream<dataword>& out)
{
	dataword temp;
	ap_uint<512> data;
	unsigned int N = in_n.read();

	for (int i=0; i < config_t::NUM_DEST; i++) {

		data.range(511,64) = 0;
		data.range(63,32) = config_t::QKV;
		data.range(31,0) = N;

		temp.data = data;
		temp.id = config_t::id;
		temp.dest = config_t::dest + i;
		temp.last = 0;
		temp.user = ap_uint<16>(N * (config_t::M / (config_t::NUM_DEST * config_t::VEC_WIDTH))) + 1;
		out.write(temp);

		for (int j=0; j < N; j++) {
			for (int k=0; k < config_t::M / (config_t::NUM_DEST * config_t::VEC_WIDTH); k++) {
				#pragma HLS pipeline ii=1

				data = in_fifo[i].read();
				temp.data = data;
				temp.id = config_t::id;
				temp.dest = config_t::dest + i;
				temp.last = (j == N - 1 && k == config_t::M / (config_t::NUM_DEST * config_t::VEC_WIDTH)-1) ? 1:0;
				temp.user = ap_uint<16>(N * (config_t::M / (config_t::NUM_DEST * config_t::VEC_WIDTH))) + 1;
				out.write(temp);
			}
		}
	}
}


template <typename config_t>
void LinearScatterRead(
		hls::stream<dataword>& in,
		hls::stream<ap_int<32> >& out_n,
		hls::stream<ap_uint<512> > out_fifo[config_t::NUM_DEST]
		)
{
	dataword temp = in.read();
	unsigned int N = temp.data.range(31,0);

	out_n.write(N);

	for (int i=0; i < N; i++) {
		for (int j=0; j < config_t::NUM_DEST; j++) {
			for (int k=0; k < config_t::M / (config_t::NUM_DEST * config_t::VEC_WIDTH); k++) {
				#pragma HLS pipeline ii=1
				temp = in.read();
				out_fifo[j].write(temp.data);
			}
		}
	}
}

template <typename config_t>
void LinearScatter(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out
#pragma HLS dataflow

	hls::stream<ap_int<32> > n_pipe;
	hls::stream<ap_uint<512> > fifo[config_t::NUM_DEST];

#pragma HLS stream variable=fifo depth=config_t::MAX_SEQUENCE_LEN*config_t::M/(config_t::NUM_DEST*config_t::VEC_WIDTH)
#pragma HLS resource variable=fifo core=FIFO_LUTRAM

	LinearScatterRead<config_t>(in, n_pipe, fifo);
	LinearScatterSend<config_t>(n_pipe, fifo, out);
}



template <typename config_t>
void LinearGatherRead(
		hls::stream<dataword>& in,
		hls::stream<ap_int<32> >& out_n,
		hls::stream<ap_uint<512> > out_fifo[config_t::NUM_SRC]
		)
{
	dataword temp;
	unsigned int N;
	ap_uint<8> src_id;

	temp = in.read();
	src_id = temp.id;
	N = temp.data.range(31,0);

	out_n.write(N);
	out_fifo[src_id - config_t::src].write(temp.data);

	for (int iter=0; iter < ap_uint<16>(N) * (config_t::NUM_SRC * config_t::K / (config_t::NUM_SRC * config_t::VEC_WIDTH)) + config_t::NUM_SRC - 1; iter++) {
		#pragma HLS pipeline ii=1
		temp = in.read();
		src_id = temp.id;
		out_fifo[src_id - config_t::src].write(temp.data);

	}
}
template <typename config_t>
void LinearGatherSend(
		hls::stream<ap_int<32> >& in_n,
		hls::stream<ap_uint<512> > in_fifo[config_t::NUM_SRC],
		hls::stream<dataword>& out)
{
	dataword temp;
	ap_uint<512> data;
	unsigned int N = in_n.read();

	temp.data = N;
	out.write(temp);

	for (int i=0; i < config_t::NUM_SRC; i++) {
		#pragma HLS unroll
		temp.data = in_fifo[i].read();
	}

	for (int iter=0; iter < N; iter++) {
		for (int i=0; i < config_t::NUM_SRC; i++) {
			for (int k=0; k < config_t::K / (config_t::NUM_SRC * config_t::VEC_WIDTH); k++) {
				#pragma HLS pipeline ii=1
				temp.data = in_fifo[i].read();
				out.write(temp);
			}
		}
	}
}
template <typename config_t>
void LinearGather(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out
#pragma HLS dataflow

	hls::stream<ap_int<32> > n_pipe;
	hls::stream<ap_uint<512> > fifo[config_t::NUM_SRC];

#pragma HLS resource variable=fifo core=FIFO_LUTRAM
#pragma HLS stream variable=fifo depth=config_t::MAX_SEQUENCE_LEN*config_t::K/(config_t::NUM_SRC*config_t::VEC_WIDTH)


	LinearGatherRead<config_t>(in, n_pipe, fifo);
	LinearGatherSend<config_t>(n_pipe, fifo, out);
}



//////////////////////////////////////////////// at_matmul ///////////////////////////////////////////////////////////////////
template <typename config_t>
void AttentionMatmulArbiter(
		hls::stream<dataword>& in,
		hls::stream<dataword> out[2])
{
	dataword temp;
	unsigned int N;
	unsigned int port;

	for (int iter=0; iter<2; iter++) {
		temp = in.read();
		N = temp.data.range(31,0);
		port = temp.data.range(63,32);
		out[port].write(temp);

		for (int i=0; i<N; i++) {
			#pragma HLS loop_tripcount min=1 max=config_t::MAX_SEQUENCE_LEN
			#pragma HLS pipeline ii=1
			temp = in.read();
			out[port].write(temp);
		}
	}
}

template <typename config_t>
void AttentionMatmulQuantizerB(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out)
{
	// read N
	dataword temp = in.read();
	unsigned int N = temp.data(31,0);
	unsigned int Nc;

	if (N < config_t::OUT_VEC_WIDTH) {
		Nc = config_t::OUT_VEC_WIDTH;
	} else {
		if (N % config_t::OUT_VEC_WIDTH == 0) {
			Nc = N;
		} else {
			Nc = config_t::OUT_VEC_WIDTH * (N / config_t::OUT_VEC_WIDTH + 1);
		}
	}

	temp.data(31,0) = Nc;
	temp.data(63,32) = N;
	out.write(temp);


	for (int i=0; i < Nc; i++) {
		#pragma HLS loop_tripcount min=config_t::NUM_PE max=config_t::MAX_SEQUENCE_LEN
		for (int j=0; j < config_t::M / config_t::VEC_WIDTH; j++) {
			#pragma HLS pipeline ii=1

			if (i < N) {
				temp = in.read();
				out.write(temp);
			} else {
				temp.data = 0;
				out.write(temp);
			}
		}
	}
}

template <typename config_t>
void AttentionMatmulReadA(
		hls::stream<dataword>& in,
		hls::stream<ap_uint<32> > &out_n_r,
		hls::stream<ap_uint<32> > out_compute_n_r[config_t::NUM_PE/2],
		hls::stream<ap_uint<32> > &out_write_n_r,
		hls::stream<ap_int<config_t::DATA_WIDTH> > out[config_t::NUM_PE/2][config_t::M])
{
	dataword temp;
	int index;

	temp = in.read();
	unsigned int N_r = temp.data(31,0);

	for (int i=0; i<config_t::NUM_PE/2; i++) {
		#pragma HLS unroll
		out_compute_n_r[i].write(N_r);
	}

	out_n_r.write(N_r);
	out_write_n_r.write(N_r);



	for (int i=0; i < N_r; i++) { // N>=16
		#pragma HLS loop_tripcount min=1 max=config_t::MAX_SEQUENCE_LEN
		for (int j=0; j<config_t::M / config_t::VEC_WIDTH; j++) { // in this case, M = VEC_WIDTH
			#pragma HLS pipeline ii=1
			temp = in.read();

			for (int l=0; l < config_t::NUM_PE/2; l++) {
				#pragma HLS unroll
				for (int k=0; k<config_t::VEC_WIDTH; k++) {
					#pragma HLS unroll
					ap_int<config_t::DATA_WIDTH> read = temp.data.range(config_t::DATA_WIDTH * (k+1) - 1, config_t::DATA_WIDTH * k);
					out[l][k + j * config_t::VEC_WIDTH].write(read);
				}
			}

		}
	}
}

template <typename config_t>
void AttentionMatmulReadB(
		hls::stream<dataword>& in,
		hls::stream<ap_uint<32> > &in_n_r,
		hls::stream<ap_uint<32> > out_compute_n_c[config_t::NUM_PE/2],
		hls::stream<ap_uint<32> >& out_write_n_c,
		hls::stream<ap_int<config_t::DATA_WIDTH> > out[config_t::NUM_PE / 2][2][config_t::M])
{

	dataword temp;

	temp = in.read();
	unsigned int N_r = in_n_r.read();
	unsigned int N_c = temp.data(31,0);
	unsigned int unquant_N = temp.data(63,32);


	for (int i=0; i<config_t::NUM_PE/2; i++) {
		#pragma HLS unroll
		out_compute_n_c[i].write(N_c);
	}

	out_write_n_c.write(N_c);


	ap_int<config_t::DATA_WIDTH> buffer[config_t::NUM_PE / 2][2][config_t::M][config_t::MAX_SEQUENCE_LEN / config_t::NUM_PE];

#pragma HLS ARRAY_PARTITION variable=buffer dim=1 complete
#pragma HLS ARRAY_PARTITION variable=buffer dim=2 complete
#pragma HLS ARRAY_PARTITION variable=buffer dim=3 complete

	ap_uint<16> index, index2;

	for (ap_uint<16> i=0; i < N_c; i++) {
		#pragma HLS loop_tripcount min=16 max=config_t::MAX_SEQUENCE_LEN
		for (ap_uint<16> j=0; j<config_t::M / config_t::VEC_WIDTH; j++) { // in this case, M = VEC_WIDTH
			#pragma HLS pipeline ii=1

			index = (i >> 1) % (config_t::NUM_PE / 2);
			index2 = i % 2;

			temp = in.read();

			for (int k=0; k<config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = temp.data.range(config_t::DATA_WIDTH * (k+1) - 1, config_t::DATA_WIDTH * k);
				buffer[index][index2][k + j * config_t::VEC_WIDTH][i / config_t::NUM_PE] = read;
				out[index][index2][k + j * config_t::VEC_WIDTH].write(read);
			}
		}
	}


	for (int iter=0; iter < ap_uint<16>(N_r) - 1; iter++) {
		#pragma HLS loop_tripcount min=0 max=config_t::MAX_SEQUENCE_LEN-1
		for (int i=0; i < ap_uint<16>(N_c) / config_t::NUM_PE; i++) { // N>=16
			#pragma HLS loop_tripcount min=16/config_t::NUM_PE max=config_t::MAX_SEQUENCE_LEN/config_t::NUM_PE
			for (int j=0; j<config_t::M / config_t::VEC_WIDTH; j++) { // in this case, M = VEC_WIDTH
				#pragma HLS pipeline ii=1

				for (int k=0; k<config_t::VEC_WIDTH; k++) {
					#pragma HLS unroll
					for (int l=0; l < config_t::NUM_PE / 2; l++) {
						#pragma HLS unroll
						out[l][0][k + j * config_t::VEC_WIDTH].write(buffer[l][0][k + j * config_t::VEC_WIDTH][i]);
						out[l][1][k + j * config_t::VEC_WIDTH].write(buffer[l][1][k + j * config_t::VEC_WIDTH][i]);

					}
				}
			}
		}
	}
}

template <typename config_t>
void AttentionMatmulComputePE(
		hls::stream<ap_uint<32> >& in_n_r,
		hls::stream<ap_uint<32> >& in_n_c,
		hls::stream<ap_int<config_t::DATA_WIDTH> > in_buffer_1[config_t::M],
		hls::stream<ap_int<config_t::DATA_WIDTH> > in_buffer_2[2][config_t::M],
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > out[2])
{

	ap_int<24> read2_a[config_t::M];
	ap_int<24> read2_b[config_t::M];
	ap_int<config_t::DATA_WIDTH> read1[config_t::M];
	ap_int<config_t::OUT_DATA_WIDTH> c_read[config_t::M];
	ap_int<16> c1[config_t::VEC_WIDTH];
	ap_int<16> c2[config_t::VEC_WIDTH];


#pragma HLS ARRAY_PARTITION variable=read2_a dim=0 complete
#pragma HLS ARRAY_PARTITION variable=read2_b dim=0 complete
#pragma HLS ARRAY_PARTITION variable=read1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c_read dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c2 dim=0 complete

	unsigned int N_c = in_n_c.read();
	unsigned int N_r = in_n_r.read();


	for (int i=0; i < ap_uint<16>(N_r); i++) { // N>=16
#pragma HLS loop_tripcount min=1 max=config_t::MAX_SEQUENCE_LEN
		for (int j=0; j < ap_uint<16>(N_c) / config_t::NUM_PE; j++) { // N>=16
#pragma HLS loop_tripcount min=16/config_t::NUM_PE max=config_t::MAX_SEQUENCE_LEN/config_t::NUM_PE
			#pragma HLS pipeline ii=1

			if (j == 0) {

				for (int k=0; k<config_t::M; k++) {
					#pragma HLS unroll
					read1[k] = in_buffer_1[k].read();
				}
			}

			for (int k=0; k<config_t::M; k++) {
				#pragma HLS unroll
				read2_a[k].range(7,0) = in_buffer_2[0][k].read();

				if (read2_a[k].bit(7)) {
					read2_a[k].range(23,8) = -1;
				} else {
					read2_a[k].range(23,8) = 0;
				}

				read2_b[k].range(23,16) = in_buffer_2[1][k].read();
				read2_b[k].range(15,0) = 0;
			}

			for (int k=0; k < config_t::M; k++) {
				#pragma HLS UNROLL
				c_read[k] = (read2_a[k] + read2_b[k]) * read1[k];
			}

			for (int k=0; k < config_t::VEC_WIDTH; k++) {
				#pragma HLS UNROLL
				c1[k] = c_read[k].range(15,0);
				c2[k] = c_read[k].range(31,16) + c1[k].bit(15);
			}

			ap_int<32> temp1 = 0;
			ap_int<32> temp2 = 0;

			for (int k=0; k < config_t::VEC_WIDTH; k++) {
				#pragma HLS UNROLL
				temp1 += c1[k];
				temp2 += c2[k];
			}

			out[0].write(temp1);
			out[1].write(temp2);
		}
	}
}

template <typename config_t>
void AttentionMatmulWrite (
		hls::stream<ap_uint<32> >& in_n_r,
		hls::stream<ap_uint<32> >& in_n_c,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > in[config_t::NUM_PE / 2][2],
		hls::stream<dataword>& out)
{


	dataword temp;

	// read N
	unsigned int N_r = in_n_r.read();
	unsigned int N_c = in_n_c.read();


	temp.data(31,0) = N_r;
	temp.data(63,32) = N_c;
	temp.data(511,64) = 0;
	temp.id = config_t::id;
	temp.dest = config_t::dest;
	temp.last = 0;
	temp.user = ap_uint<16>(N_r) * ap_uint<16>(N_c) / config_t::OUT_VEC_WIDTH + 1;
	out.write(temp);


	ap_int<config_t::OUT_DATA_WIDTH> out_data[config_t::OUT_VEC_WIDTH];

#pragma HLS ARRAY_PARTITION variable=out_data dim=0 complete

	int index;

	for (int i=0; i < ap_uint<16>(N_c) * ap_uint<16>(N_r) / config_t::NUM_PE; i++) { // N>=16
#pragma HLS loop_tripcount min=256/config_t::NUM_PE max=16384/config_t::NUM_PE
		#pragma HLS pipeline ii=1

		index = i % (config_t::OUT_VEC_WIDTH / config_t::NUM_PE);

		for (int k=0; k<config_t::NUM_PE / 2; k++) {
			#pragma HLS unroll
			for (int l=0; l<2; l++) {
				#pragma HLS unroll
				out_data[k*2 + l + index * config_t::NUM_PE] = in[k][l].read();
			}
		}

		if (index == config_t::OUT_VEC_WIDTH / config_t::NUM_PE - 1) {
			for (int k=0; k<config_t::OUT_VEC_WIDTH; k++) {
				#pragma HLS unroll
				temp.data.range(config_t::OUT_DATA_WIDTH * (k+1)-1, config_t::OUT_DATA_WIDTH*k) = out_data[k];
			}

			temp.id = config_t::id;
			temp.dest = config_t::dest;
			temp.last = i == ap_uint<16>(N_c) * ap_uint<16>(N_r) / config_t::NUM_PE - 1 ? 1:0;
			temp.user = ap_uint<16>(N_c) * ap_uint<16>(N_r) / config_t::OUT_VEC_WIDTH + 1;
			out.write(temp);
		}
	}
}

template <typename config_t>
void AttentionMatmulSoftmaxQuantizer(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out)
{
	const ap_int<config_t::OUT_DATA_WIDTH> neg_inf = 1 << (config_t::OUT_DATA_WIDTH-1);

	// read N
	dataword temp = in.read();
	unsigned int N_r = temp.data(31,0);
	unsigned int N_c = temp.data(63,32);

	out.write(temp);

	for (int i=0; i < ap_uint<16>(N_r); i++) {
		#pragma HLS loop_tripcount min=1 max=config_t::MAX_SEQUENCE_LEN
		for (int j=0; j < ap_uint<16>(N_c) / config_t::OUT_VEC_WIDTH; j++) {
			#pragma HLS loop_tripcount min=16/config_t::OUT_VEC_WIDTH max=config_t::MAX_SEQUENCE_LEN/config_t::OUT_VEC_WIDTH
			#pragma HLS pipeline ii=1

			temp = in.read();

			for (int k=0; k < config_t::OUT_VEC_WIDTH; k++) {
				#pragma HLS unroll
				if ((k + j * config_t::OUT_VEC_WIDTH) >= ap_uint<16>(N_r)) {
					temp.data.range(config_t::OUT_DATA_WIDTH * (k+1)-1, config_t::OUT_DATA_WIDTH*k) = neg_inf;
				}
			}

			out.write(temp);
		}
	}
}

template <typename config_t>
void AttentionMatmul(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out)
{
#pragma HLS inline
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

#pragma HLS DATAFLOW

	hls::stream<dataword> out_arb[2];
	hls::stream<dataword> b1;
	hls::stream<dataword> c1;
	hls::stream<ap_uint<32> > in_n_r;
	hls::stream<ap_uint<32> > in_compute_n_r[config_t::NUM_PE];
	hls::stream<ap_uint<32> > in_compute_n_c[config_t::NUM_PE];
	hls::stream<ap_uint<32> > in_write_n_r;
	hls::stream<ap_uint<32> > in_write_n_c;
	hls::stream<ap_int<config_t::DATA_WIDTH> > in_compute_a[config_t::NUM_PE/2][config_t::M];
	hls::stream<ap_int<config_t::DATA_WIDTH> > in_compute_b[config_t::NUM_PE/2][2][config_t::M];
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > out_compute[config_t::NUM_PE/2][2];

#pragma HLS stream variable=out_arb depth=config_t::MAX_SEQUENCE_LEN

	AttentionMatmulArbiter<config_t>(in, out_arb);
	AttentionMatmulQuantizerB<config_t>(out_arb[1], b1);
	AttentionMatmulReadA<config_t>(out_arb[0], in_n_r, in_compute_n_r, in_write_n_r, in_compute_a);
	AttentionMatmulReadB<config_t>(b1, in_n_r, in_compute_n_c, in_write_n_c, in_compute_b);

	for (int i=0; i<config_t::NUM_PE/2; i++) {
		#pragma HLS unroll
		AttentionMatmulComputePE<config_t>(in_compute_n_r[i], in_compute_n_c[i], in_compute_a[i], in_compute_b[i], out_compute[i]);
	}

	AttentionMatmulWrite<config_t>(in_write_n_r, in_write_n_c, out_compute, c1);
	AttentionMatmulSoftmaxQuantizer<config_t>(c1, out);
}



/////////////////////////////////////////////////////////// softmax_matmul ///////////////////////////////////////////////////////

template <typename config_t>
void SoftmaxMatmulArbiter(
		hls::stream<dataword>& in,
		hls::stream<dataword>& in_a,
		hls::stream<dataword>& in_b)
{
	dataword temp;
	unsigned int Nu;
	unsigned int Nc;

	for (int iter=0; iter<2; iter++) {
		temp = in.read();

		if (temp.data.range(63,32) == 0) { // send b
			Nu = temp.data.range(31,0);
			in_b.write(temp);

			for (int i=0; i<Nu; i++) {
				#pragma HLS loop_tripcount min=1 max=config_t::MAX_SEQUENCE_LEN
				#pragma HLS pipeline ii=1
				temp = in.read();
				in_b.write(temp);
			}
		}
		else { // send a
			Nu = temp.data.range(31,0);
			Nc = temp.data.range(63,32);
			in_a.write(temp);

			for (int i=0; i<Nu; i++) {
				#pragma HLS loop_tripcount min=1 max=config_t::MAX_SEQUENCE_LEN
				for (int j=0; j < Nc / config_t::VEC_WIDTH; j++) {
					#pragma HLS pipeline ii=1
					temp = in.read();
					in_a.write(temp);
				}
			}
		}
	}
}

template <typename config_t>
void SoftmaxMatmulQuantizerA(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out)
{

	// read N
	dataword temp = in.read();
	unsigned int Nu = temp.data.range(31,0);
	unsigned int Nc = temp.data.range(63,32);
	unsigned int Nr;

	if (Nu < config_t::NUM_PE) {
		Nr = config_t::NUM_PE;
	} else {
		if (Nu % config_t::NUM_PE == 0) {
			Nr = Nu;
		} else {
			Nr = config_t::NUM_PE * (Nu / config_t::NUM_PE + 1);
		}
	}


	temp.data(31,0) = Nr;
	temp.data(63,32) = Nc;
	temp.data(95,64) = Nu;
	out.write(temp);

	for (int i=0; i < ap_uint<16>(Nr); i++) {
		#pragma HLS loop_tripcount min=config_t::NUM_PE max=config_t::MAX_SEQUENCE_LEN
		for (int j=0; j < ap_uint<16>(Nc) / config_t::VEC_WIDTH; j++) {
			#pragma HLS pipeline ii=1

			if (i < Nu) {
				temp = in.read();
				out.write(temp);
			} else {
				temp.data = 0;
				out.write(temp);
			}
		}
	}
}

template <typename config_t>
void SoftmaxMatmulReadA(
		hls::stream<dataword>& in,
		hls::stream<ap_uint<32> > &out_read_b_n_r,
		hls::stream<ap_uint<32> > out_compute_n_r[config_t::NUM_PE / 2],
		hls::stream<ap_uint<32> > out_compute_n_c[config_t::NUM_PE / 2],
		hls::stream<ap_uint<32> > out_compute_n_unquant[config_t::NUM_PE / 2],
		hls::stream<ap_uint<32> > &out_write_n_r,
		hls::stream<ap_uint<32> > &out_write_n_c,
		hls::stream<ap_uint<32> > &out_write_n_unquant,
		hls::stream<ap_int<config_t::DATA_WIDTH> > out[config_t::NUM_PE / 2][2][config_t::VEC_WIDTH])
{

	dataword temp;
	ap_int<config_t::DATA_WIDTH> out_data[config_t::VEC_WIDTH];

#pragma HLS ARRAY_PARTITION variable=out_data dim=0 complete

	temp = in.read();
	unsigned int N_r = temp.data.range(31,0);
	unsigned int N_c = temp.data.range(63,32);
	unsigned int N_unquant = temp.data.range(95,64);

	for (int i=0; i < config_t::NUM_PE / 2; i++) {
		#pragma HLS unroll
		out_compute_n_r[i].write(N_r);
		out_compute_n_c[i].write(N_c);
		out_compute_n_unquant[i].write(N_unquant);
	}

	out_read_b_n_r.write(N_r);
	out_write_n_r.write(N_r);
	out_write_n_c.write(N_c);
	out_write_n_unquant.write(N_unquant);


	for (ap_uint<16> i=0; i < ap_uint<16>(N_r) / config_t::NUM_PE; i++) { // N>=16
		for (ap_uint<16> p=0; p < config_t::NUM_PE / 2; p++) {
			for (ap_uint<16> n=0; n < 2; n++) {
				for (ap_uint<16> j=0; j < ap_uint<16>(N_c) / config_t::VEC_WIDTH; j++) {
					#pragma HLS pipeline ii=1

					temp = in.read();

					for (ap_uint<16> k=0; k<config_t::VEC_WIDTH; k++) {
						#pragma HLS unroll
						out_data[k] = temp.data.range(config_t::DATA_WIDTH * (k+1) - 1, config_t::DATA_WIDTH * k);
					}

					for (ap_uint<16> k=0; k<config_t::VEC_WIDTH; k++) {
						#pragma HLS unroll
						out[p][n][k].write(out_data[k]);
					}
				}
			}
		}
	}
}

template <typename config_t>
void SoftmaxMatmulReadB(
		hls::stream<dataword>& in,
		hls::stream<ap_uint<32> > &in_n_r,
		hls::stream<ap_int<config_t::DATA_WIDTH> > out[config_t::NUM_PE / 2][config_t::M])
{

	dataword temp;
	int index;

	temp = in.read();
	unsigned int unquant_N = temp.data.range(31,0);
	unsigned int N_r = in_n_r.read();

	ap_int<config_t::DATA_WIDTH> buffer[config_t::MAX_SEQUENCE_LEN][config_t::M];

#pragma HLS ARRAY_PARTITION variable=buffer dim=2 complete

	for (int iter=0; iter < ap_uint<16>(N_r) / config_t::NUM_PE; iter++) {
		#pragma HLS loop_tripcount min=16/config_t::NUM_PE max=config_t::MAX_SEQUENCE_LEN/config_t::NUM_PE
		for (int i=0; i < ap_uint<16>(unquant_N); i++) { // N>=16
			#pragma HLS loop_tripcount min=16 max=config_t::MAX_SEQUENCE_LEN
			for (int j=0; j<config_t::M / config_t::VEC_WIDTH; j++) { // in this case, M = VEC_WIDTH
				#pragma HLS pipeline ii=1

				if (iter == 0) {
					temp = in.read();

					for (int k=0; k<config_t::VEC_WIDTH; k++) {
						#pragma HLS unroll
						ap_int<config_t::DATA_WIDTH> read = temp.data.range(config_t::DATA_WIDTH * (k+1) - 1, config_t::DATA_WIDTH * k);
						buffer[i][k + j * config_t::VEC_WIDTH] = read;

						for (int l=0; l < config_t::NUM_PE / 2; l++) {
							#pragma HLS unroll
							out[l][k + j * config_t::VEC_WIDTH].write(read);
						}
					}
				} else {
					for (int k=0; k<config_t::VEC_WIDTH; k++) {
						#pragma HLS unroll
						for (int l=0; l < config_t::NUM_PE / 2; l++) {
							#pragma HLS unroll
							out[l][k + j * config_t::VEC_WIDTH].write(buffer[i][k + j * config_t::VEC_WIDTH]);
						}
					}
				}

			}
		}
	}
}

template <typename config_t>
void SoftmaxMatmulComputePE(
		hls::stream<ap_uint<32> >& in_n_r,
		hls::stream<ap_uint<32> >& in_n_c,
		hls::stream<ap_uint<32> >& in_n_unquant,
		hls::stream<ap_int<config_t::DATA_WIDTH> > in_a[2][config_t::VEC_WIDTH],
		hls::stream<ap_int<config_t::DATA_WIDTH> > in_b[config_t::M],
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > out[2][config_t::M])
{


	ap_int<config_t::DATA_WIDTH> read_a1[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH> read_a2[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH> read_b[config_t::M];
	ap_int<config_t::OUT_DATA_WIDTH> c_read[config_t::M];
	ap_int<16> c1[config_t::M];
	ap_int<16> c2[config_t::M];
	ap_int<config_t::OUT_DATA_WIDTH> acc1[config_t::M];
	ap_int<config_t::OUT_DATA_WIDTH> acc2[config_t::M];

#pragma HLS ARRAY_PARTITION variable=read_a1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=read_a2 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=read_b dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c_read dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=c2 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=acc1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=acc2 dim=0 complete

	unsigned int N_r = in_n_r.read();
	unsigned int N_c = in_n_c.read();
	unsigned int N_unquant = in_n_unquant.read();

	for (int i=0; i < ap_uint<16>(N_r) / config_t::NUM_PE; i++) {
		for (int j=0; j < ap_uint<16>(N_unquant); j++) {
			#pragma HLS pipeline ii=1


			if (j % config_t::VEC_WIDTH == 0) {
				for (int k=0; k < config_t::VEC_WIDTH; k++) {
					#pragma HLS unroll
					read_a1[k] = in_a[0][k].read();
					read_a2[k] = in_a[1][k].read();
				}
			}

			for (int k=0; k < config_t::M; k++) {
				#pragma HLS unroll
				read_b[k] = in_b[k].read();
			}

			ap_uint<24> temp_a1;
			temp_a1.range(7,0) = read_a1[j % config_t::VEC_WIDTH];
			temp_a1.range(23,8) = 0;

			ap_uint<24> temp_a2;
			temp_a2.range(23,16) = read_a2[j % config_t::VEC_WIDTH];
			temp_a2.range(15,0) = 0;

			for (int k=0; k < config_t::M; k++) {
				#pragma HLS unroll
				c_read[k] = (temp_a1 + temp_a2) * read_b[k];
			}

			for (int k=0; k < config_t::M; k++) {
				#pragma HLS UNROLL
				c1[k] = c_read[k].range(15,0);
				c2[k] = c_read[k].range(31,16) + c1[k].bit(15);
			}

			if (j == 0) {
				for (int k=0; k < config_t::M; k++) {
					#pragma HLS unroll
					acc1[k] = 0;
					acc2[k] = 0;
				}
			}

			for (int k=0; k < config_t::M; k++) {
				#pragma HLS unroll
				acc1[k] += c1[k];
				acc2[k] += c2[k];
			}

			if (j == N_unquant - 1) {
				for (int k=0; k < config_t::M; k++) {
					#pragma HLS unroll
					out[0][k].write(acc1[k]);
					out[1][k].write(acc2[k]);
				}
			}
		}
	}
}

template <typename config_t>
void SoftmaxMatmulWrite (
		hls::stream<ap_uint<32> >& in_n_r,
		hls::stream<ap_uint<32> >& in_n_c,
		hls::stream<ap_uint<32> >& in_n_unquant,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > in[config_t::NUM_PE / 2][2][config_t::M],
		hls::stream<dataword>& out)
{
	dataword out_data;

	// read N
	unsigned int N_r = in_n_r.read();
	unsigned int N_c = in_n_c.read();
	unsigned int N_unquant = in_n_unquant.read();


	out_data.data.range(31,0) = N_r;
	out_data.data.range(63,32) = N_c;
	out_data.data.range(95,64) = N_unquant;
	out_data.id = config_t::id;
	out_data.dest = config_t::dest;
	out_data.last = 0;
	out_data.user = config_t::M / config_t::OUT_VEC_WIDTH + 1;
	out.write(out_data);


	ap_int<config_t::OUT_DATA_WIDTH> read[config_t::OUT_VEC_WIDTH];

#pragma HLS ARRAY_PARTITION variable=read dim=0 complete


	for (int i=0; i < N_r / config_t::NUM_PE; i++) { // N>=16
		#pragma HLS loop_tripcount min=16/config_t::NUM_PE max=config_t::MAX_SEQUENCE_LEN/config_t::NUM_PE
		for (int j=0; j < config_t::NUM_PE / 2; j++) {
			for (int p=0; p < 2; p++) {
				for (int k=0; k < config_t::M / config_t::OUT_VEC_WIDTH; k++) {
					#pragma HLS pipeline ii=1

					for (int l=0; l < config_t::OUT_VEC_WIDTH; l++) {
						#pragma HLS unroll
						read[l] = in[j][p][l + k * config_t::OUT_VEC_WIDTH].read();
					}

					for (int l=0; l < config_t::OUT_VEC_WIDTH; l++) {
						#pragma HLS unroll
						out_data.data.range(config_t::OUT_DATA_WIDTH * (l+1) - 1, config_t::OUT_DATA_WIDTH * l) = read[l];
					}

					out_data.id = config_t::id;
					out_data.dest = config_t::dest;
					out_data.last = k == config_t::M / config_t::OUT_VEC_WIDTH - 1 ? 1:0;
					out_data.user = (i == 0 && j == 0) ? config_t::M / config_t::OUT_VEC_WIDTH + 1 : config_t::M / config_t::OUT_VEC_WIDTH;
					out.write(out_data);

				}
			}
		}
	}
}

template <typename config_t>
void SoftmaxMatmulDequantize(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out)
{

	// read N
	dataword temp = in.read();
	unsigned int N_r = temp.data.range(31,0);
	unsigned int N_c = temp.data.range(63,32);
	unsigned int N_unquant = temp.data.range(95,64);

	temp.data = N_unquant;

	out.write(temp);

	for (int i=0; i < N_r; i++) { // N>=16
		for (int j=0; j < config_t::M / config_t::OUT_VEC_WIDTH; j++) {
			#pragma HLS pipeline ii=1

			if (i < N_unquant) {
				temp = in.read();
				out.write(temp);
			} else {
				temp = in.read();
			}
		}
	}
}

template <typename config_t>
void SoftmaxMatmul(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out)
{
#pragma HLS inline
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out
#pragma HLS DATAFLOW

	hls::stream<dataword> in_a;
	hls::stream<dataword> in_b;
	hls::stream<dataword> in_read_a;
	hls::stream<dataword> in_read_b;
	hls::stream<dataword> out_write;
	hls::stream<ap_uint<32> > in_read_b_n_r;
	hls::stream<ap_uint<32> > in_compute_n_r[config_t::NUM_PE / 2];
	hls::stream<ap_uint<32> > in_compute_n_c[config_t::NUM_PE / 2];
	hls::stream<ap_uint<32> > in_compute_n_unquant[config_t::NUM_PE / 2];
	hls::stream<ap_uint<32> > in_write_n_r;
	hls::stream<ap_uint<32> > in_write_n_c;
	hls::stream<ap_uint<32> > in_write_n_unquant;
	hls::stream<ap_int<config_t::DATA_WIDTH> > out_read_a[config_t::NUM_PE / 2][2][config_t::VEC_WIDTH];
	hls::stream<ap_int<config_t::DATA_WIDTH> > out_read_b[config_t::NUM_PE / 2][config_t::M];
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > out_pe[config_t::NUM_PE / 2][2][config_t::M];

#pragma HLS resource variable=in_read_b core=FIFO_LUTRAM
#pragma HLS resource variable=out_write core=FIFO_LUTRAM
#pragma HLS stream variable=in_a depth=config_t::MAX_SEQUENCE_LEN*config_t::MAX_SEQUENCE_LEN/config_t::VEC_WIDTH
#pragma HLS stream variable=in_b depth=config_t::MAX_SEQUENCE_LEN
#pragma HLS stream variable=out_read_a depth=config_t::MAX_SEQUENCE_LEN/config_t::VEC_WIDTH
#pragma HLS stream variable=out_read_b depth=config_t::MAX_SEQUENCE_LEN*(config_t::NUM_PE-1)/config_t::VEC_WIDTH

	SoftmaxMatmulArbiter<config_t>(in, in_a, in_b);
	SoftmaxMatmulQuantizerA<config_t>(in_a, in_read_a);
	SoftmaxMatmulReadA<config_t>(in_read_a, in_read_b_n_r, in_compute_n_r, in_compute_n_c, in_compute_n_unquant, in_write_n_r, in_write_n_c, in_write_n_unquant, out_read_a);
	SoftmaxMatmulReadB<config_t>(in_b, in_read_b_n_r, out_read_b);

	for (int i=0; i < config_t::NUM_PE / 2; i++) {
		#pragma HLS unroll
		SoftmaxMatmulComputePE<config_t>(in_compute_n_r[i], in_compute_n_c[i], in_compute_n_unquant[i], out_read_a[i], out_read_b[i], out_pe[i]);
	}

	SoftmaxMatmulWrite<config_t>(in_write_n_r, in_write_n_c, in_write_n_unquant, out_pe, out_write);
	SoftmaxMatmulDequantize<config_t>(out_write, out);
}


///////////////////////////////////////////////////////// softmax ////////////////////////////////////
template <typename config_t>
void softmax_read_data (
		hls::stream<dataword>& in,	// input packets
		hls::stream<ap_uint<96> >& out_meta,	// Output metadata. Note the space between '>' - this is mandatory somehow, else compile error
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_num_unrolled_iter,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> >& out,
		hls::stream<ap_int<32> >& max_input
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
	// in individual packets, first find the max number from each packet, then linear search to find the global max.
	// Assume one packet only holds data for one batch.
	for (int batch = 0; batch < num_batches; batch++) {
	#pragma HLS loop_tripcount min=1 max=512

		for (int packet = 0; packet < batch_size/config_t::VEC_WIDTH; packet++) {
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
				ap_int<config_t::DATA_WIDTH> read_num1 = pkt.data.range(config_t::DATA_WIDTH * (num1_idx+1) - 1, config_t::DATA_WIDTH * num1_idx);
				ap_int<config_t::DATA_WIDTH> read_num2 = pkt.data.range(config_t::DATA_WIDTH * (num2_idx + 1) - 1, config_t::DATA_WIDTH * (num2_idx));
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
					out_data.range(config_t::DATA_WIDTH * (num + 1) - 1, config_t::DATA_WIDTH*num) = buffer[num + iter * config_t::UNROLL_FACTOR];
				}
				out.write(out_data);
			}


			// Further find the max value. This if-statement will be true if the packet size
			// remains 512 bits, and the input numbers remain 32-bit. These are defined by I-BERT,
			// so we can assume this will be true.
			if (config_t::VEC_WIDTH == 16) {
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

			if (packet == batch_size/config_t::VEC_WIDTH - 1) {
				max_input.write(max_val);
			}
		}
	}
}

template <typename config_t>
void softmax_subtract_max (
		hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_unrolled_iterations,
		hls::stream<ap_int<32> >& in_max,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> >& in,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> >& out
)
{
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

			ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> in_data = in.read();
			for (int num = 0; num < config_t::UNROLL_FACTOR; num++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in_data.range(config_t::DATA_WIDTH*(num+1)-1, config_t::DATA_WIDTH*num);
				if (read == neg_inf) {
					out_data.range(config_t::DATA_WIDTH * (num + 1) - 1, config_t::DATA_WIDTH*num) = neg_inf;
				} else {
					// there's an implicit assumption that read will never be close to neg_inf (but not neg_inf)
					out_data.range(config_t::DATA_WIDTH * (num + 1) - 1, config_t::DATA_WIDTH*num) = read - max_val;
				}
			}
			out.write(out_data);
		}
	}
}

template <typename config_t>
void softmax_process_1(
		const ap_int<config_t::DATA_WIDTH> self_const,
		const ap_int<config_t::DATA_WIDTH> x0,
		const ap_int<config_t::DATA_WIDTH> b,
		const ap_int<config_t::DATA_WIDTH> c,
		hls::stream<ap_uint<32> >& in_iter_r,
		hls::stream<ap_uint<32> >& in_iter_c,
		hls::stream<ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> > &in,
		hls::stream<ap_uint<32> >& out_iter_r,
		hls::stream<ap_uint<32> >& out_iter_c,
		hls::stream<ap_int<config_t::DATA_WIDTH*2*config_t::UNROLL_FACTOR> > &out)
{
	// read N
	unsigned int ITER = in_iter_c.read();
	unsigned int N_r = in_iter_r.read();
	out_iter_r.write(N_r);
	out_iter_c.write(ITER);

	ap_int<config_t::DATA_WIDTH> x[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> q[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> r[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH*2> exp[config_t::UNROLL_FACTOR];

#pragma HLS ARRAY_PARTITION variable=x dim=0 complete
#pragma HLS ARRAY_PARTITION variable=q dim=0 complete
#pragma HLS ARRAY_PARTITION variable=r dim=0 complete
#pragma HLS ARRAY_PARTITION variable=exp dim=0 complete
	for (int i=0; i < N_r; i++) {
		#pragma HLS loop_tripcount min=1 max=512
		for (int l=0; l<ITER; l++) {
			#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
			#pragma HLS pipeline ii=1

			ap_int<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> temp = in.read();

			ap_int<config_t::DATA_WIDTH*2*config_t::UNROLL_FACTOR> out_data;

			for (int j=0; j < config_t::UNROLL_FACTOR; j++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = temp.range(config_t::DATA_WIDTH * (j+1)-1, config_t::DATA_WIDTH * j);

				if (read < self_const * x0) {
					x[j] = self_const * x0;
				} else {
					x[j] = read;
				}

				q[j] = x[j] / x0;
				r[j] = x[j] - x0 * q[j];

				ap_int<config_t::DATA_WIDTH*2> temp = ((r[j] + b) * r[j] + c) << (self_const - q[j]);

				if (temp < 0) {
					exp[j] = 0;
				} else {
					exp[j] = temp;
				}

				out_data.range(config_t::DATA_WIDTH *2 * (j+1)-1, config_t::DATA_WIDTH *2 * j) = exp[j];
			}

			out.write(out_data);
		}
	}
}

template <typename config_t>
void softmax_QuantAct_1_channel(
		const ap_int<config_t::DATA_WIDTH> m,
		const ap_int<config_t::QUANT_DATA_WIDTH> e,
		hls::stream<ap_uint<32> >& in_iter_r,
		hls::stream<ap_uint<32> >& in_iter_c,
		hls::stream<ap_int<config_t::DATA_WIDTH*2*config_t::UNROLL_FACTOR> > &in,
		hls::stream<ap_uint<32> >& out_iter_r,
		hls::stream<ap_uint<32> >& out_iter_c,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> > &out,
		hls::stream<ap_int<32> >&sum_output)
{
	// read N
	unsigned int ITER = in_iter_c.read();
	unsigned int N_r = in_iter_r.read();
	out_iter_r.write(N_r);
	out_iter_c.write(ITER);
	ap_int<config_t::DATA_WIDTH> sum_val;
	ap_int<config_t::DATA_WIDTH> sum[config_t::UNROLL_FACTOR];
#pragma HLS ARRAY_PARTITION variable=sum dim=0 complete

	// read
	for (int i=0; i < N_r; i++) {
		#pragma HLS loop_tripcount min=1 max=512
		for (int l=0; l<ITER; l++) {
			#pragma HLS loop_tripcount min=16/config_t::UNROLL_FACTOR max=config_t::MAX_SEQUENCE_LEN/config_t::UNROLL_FACTOR
			#pragma HLS pipeline ii=1

			ap_int<config_t::DATA_WIDTH*2*config_t::UNROLL_FACTOR> in_read = in.read();
			ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> out_data;

			for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH*2> read = in_read.range(config_t::DATA_WIDTH*2 * (k+1)-1, config_t::DATA_WIDTH*2 * k);
				ap_int<config_t::DATA_WIDTH*3> read1 = read * m;
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
				out_data.range(config_t::QUANT_DATA_WIDTH * (k+1)-1, config_t::QUANT_DATA_WIDTH * k) = read2;
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

template <typename config_t>
void softmax_divide_approx (
	hls::stream<ap_uint<32> >& in_num_batches,
	hls::stream<ap_uint<32> >& in_num_unrolled_iter,
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH *config_t::UNROLL_FACTOR> >& in,
	hls::stream<ap_int<32> >& sum,
	hls::stream<ap_uint<32> >& out_num_unrolled_iter,
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH*config_t::UNROLL_FACTOR> >& out
)
{
#define DECIMALS 15

	// Read metadata
	unsigned int unrolled_iterations = in_num_unrolled_iter.read();
	unsigned int num_batches = in_num_batches.read();
	out_num_unrolled_iter.write(unrolled_iterations);

	ap_int<32> D_p;
	ap_int<32> shift;
	ap_int<32> x_init;

	for (int batch = 0; batch < num_batches; batch++) {
		#pragma HLS loop tripcount min=1 max=512

		for (int iter = 0; iter < unrolled_iterations; iter++) {
			#pragma HLS pipeline ii=1

			if (iter == 0) {
				D_p = sum.read();
				shift = 0;
				for (int i = 0; i < DECIMALS; i++) {
					if (D_p.range(31, DECIMALS) == 0) break;
					shift += 1;
					D_p = D_p >> 1;
				}
				x_init = (48 << DECIMALS) / 17 - (32 * D_p)/17;
			}

			ap_int<config_t::OUT_DATA_WIDTH*config_t::UNROLL_FACTOR> out_temp;
			ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> in_nums = in.read();
			for (int unroll = 0; unroll < config_t::UNROLL_FACTOR; unroll++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in_nums.range(config_t::QUANT_DATA_WIDTH*(unroll+1) - 1, config_t::QUANT_DATA_WIDTH*unroll) << config_t::OUT_DATA_WIDTH;
				
				ap_int<32> N_p = read >> shift;
				ap_int<32> x = x_init;

				for (int i = 0; i < 3; i++) {
					ap_int<32> b_p_x = (1 << DECIMALS) - ((D_p * x) >> DECIMALS);
					x = x + ((x * b_p_x) >> DECIMALS);
				}

				ap_int<64> result = (N_p * x) >> DECIMALS;
				if (result[DECIMALS-1] == 1) {
					result = (result >> DECIMALS) + 1;
				} else {
					result = result >> DECIMALS;
				}
				if (result.range(config_t::DATA_WIDTH-1, config_t::OUT_DATA_WIDTH) != 0) {
					// cap the result to be 255
					result = 255;
				}

				out_temp.range(config_t::OUT_DATA_WIDTH*(unroll+1) - 1, config_t::OUT_DATA_WIDTH*unroll) = result;
			}

			out.write(out_temp);
		}
	}
}


template <typename config_t>
void softmax_divide_precise (
	hls::stream<ap_uint<32> >& in_num_batches,
	hls::stream<ap_uint<32> >& in_num_unrolled_iter,
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH *config_t::UNROLL_FACTOR> >& in,
	hls::stream<ap_int<32> >& sum,
	hls::stream<ap_uint<32> >& out_num_unrolled_iter,
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH*config_t::UNROLL_FACTOR> >& out
)
{
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

			ap_int<config_t::OUT_DATA_WIDTH*config_t::UNROLL_FACTOR> out_temp;
			ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> in_nums = in.read();
			for (int unroll = 0; unroll < config_t::UNROLL_FACTOR; unroll++) {
				#pragma HLS unroll
				// Note: must first cast to config_t::DATA_WIDTH, otherwise the bit width will truncate if unroll factor = 1
				ap_int<config_t::DATA_WIDTH> read = in_nums.range(config_t::QUANT_DATA_WIDTH * (unroll + 1) - 1, config_t::QUANT_DATA_WIDTH * unroll);
				ap_int<config_t::DATA_WIDTH> shifted = read << config_t::OUT_DATA_WIDTH;
				ap_int<config_t::DATA_WIDTH> div_result = shifted / my_sum;
				if (div_result.range(config_t::DATA_WIDTH-1, config_t::OUT_DATA_WIDTH) != 0) {
					// cap the result to be 255
					div_result = 255;
				}
				out_temp.range(config_t::OUT_DATA_WIDTH*(unroll+1) - 1, config_t::OUT_DATA_WIDTH*unroll) = div_result;
			}

			out.write(out_temp);
		}
	}
}

template <typename config_t>
void softmax_write_out(
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
	out_data.data.range(511,64) = 0;
	out_data.dest = config_t::dest;
	out_data.id = config_t::id;
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

				out_data.dest = config_t::dest;
				out_data.id = config_t::id;
				out_data.last = i == N_c / config_t::UNROLL_FACTOR - 1 ? 1 : 0;
				out_data.user = NN_c / config_t::OUT_VEC_WIDTH + 1;
				out.write(out_data);
			}
		}
	}
}

template <typename config_t>
void Softmax(
		const ap_int<config_t::DATA_WIDTH> self_const,
		const ap_int<config_t::DATA_WIDTH> x0,
		const ap_int<config_t::DATA_WIDTH> b,
		const ap_int<config_t::DATA_WIDTH> c,
		const ap_int<config_t::DATA_WIDTH> m,
		const ap_int<config_t::QUANT_DATA_WIDTH> e,
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS inline
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

#pragma HLS dataflow

	static hls::stream<ap_uint<96> > in_write_n;
	static hls::stream<ap_uint<32> > in_proc_1_iter_r;
	static hls::stream<ap_uint<32> > in_proc_1_iter_c;
	static hls::stream<ap_int<config_t::DATA_WIDTH*config_t::UNROLL_FACTOR> > in_proc_1;
	static hls::stream<ap_uint<32> > in_quant_iter_r;
	static hls::stream<ap_uint<32> > in_quant_iter_c;
	static hls::stream<ap_int<config_t::DATA_WIDTH*2*config_t::UNROLL_FACTOR> > in_quant;
	static hls::stream<ap_uint<32> > in_proc_2_iter_r;
	static hls::stream<ap_uint<32> > in_proc_2_iter_c;
	static hls::stream<ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> > in_proc_2;
	static hls::stream<ap_uint<32> > in_write_2_iter_c;
	static hls::stream<ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> > in_write;

	static hls::stream<ap_int<32> > sum;
	static hls::stream<ap_int<32> > max_input;
	static hls::stream<ap_uint<32> > in_sub_max_r;
	static hls::stream<ap_uint<32> > in_sub_max_c;
	static hls::stream<ap_int<config_t::DATA_WIDTH*config_t::UNROLL_FACTOR> > in_sub_max;


	const static int fifo_depth = (config_t::NUM_CHANNEL/config_t::UNROLL_FACTOR)+1;
#pragma HLS stream variable=in_proc_2 depth=fifo_depth
#pragma HLS stream variable=in_sub_max depth=fifo_depth


	//	 save buffer
	softmax_read_data<config_t>(in, in_write_n, in_sub_max_r, in_sub_max_c, in_sub_max, max_input);
	softmax_subtract_max<config_t>(in_sub_max_r, in_sub_max_c, in_proc_1_iter_r, in_proc_1_iter_c, max_input, in_sub_max, in_proc_1);

	// process 1
	softmax_process_1<config_t>(self_const, x0, b, c, in_proc_1_iter_r, in_proc_1_iter_c, in_proc_1, in_quant_iter_r, in_quant_iter_c, in_quant);

	// quan act
	softmax_QuantAct_1_channel<config_t>(m, e, in_quant_iter_r, in_quant_iter_c, in_quant, in_proc_2_iter_r, in_proc_2_iter_c, in_proc_2, sum);

	// process 2
	softmax_divide_precise<config_t>(in_proc_2_iter_r, in_proc_2_iter_c, in_proc_2, sum, in_write_2_iter_c, in_write);

	// write
	softmax_write_out<config_t>(in_write_n, in_write_2_iter_c, in_write, out);
}

///////////////////////////////////////////////////////////////////// quant act /////////////////////////////////////////////////////

template <typename config_t>
void IdentityQuantAct(
		const ap_int<32> m[config_t::NUM_CHANNEL / config_t::VEC_WIDTH][config_t::VEC_WIDTH],
		const ap_int<32> e[config_t::NUM_CHANNEL / config_t::VEC_WIDTH][config_t::VEC_WIDTH],
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

#pragma HLS ARRAY_PARTITION variable=m dim=2 complete
#pragma HLS ARRAY_PARTITION variable=e dim=2 complete

	dataword temp;
	ap_int<config_t::DATA_WIDTH> temp_data[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH> in_data[config_t::OUT_VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH + config_t::OUT_DATA_WIDTH> in_data1[config_t::OUT_VEC_WIDTH];
	ap_int<config_t::OUT_DATA_WIDTH> in_data2[config_t::OUT_VEC_WIDTH];
	dataword out_data;

#pragma HLS ARRAY_PARTITION variable=temp_data dim=0 complete
#pragma HLS ARRAY_PARTITION variable=in_data dim=0 complete
#pragma HLS ARRAY_PARTITION variable=in_data1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=in_data2 dim=0 complete

	// read N
	temp = in.read();
	unsigned int N = temp.data;

	out_data.data = N;
	out_data.id = 0;
	out_data.dest = 255;
	out_data.user = config_t::NUM_CHANNEL / config_t::OUT_VEC_WIDTH + 1;
	out_data.last = 0;
	out.write(out_data);

	// read
	for (int i=0; i < N; i++) {
		#pragma HLS loop_tripcount min=1 max=512
		for (int j=0; j<config_t::NUM_CHANNEL / config_t::VEC_WIDTH; j++) {
			for (int k=0; k < config_t::VEC_WIDTH / config_t::OUT_VEC_WIDTH; k++) {
				#pragma HLS pipeline ii=1

				if (k == 0)
				{
					temp = in.read();

					for (int l=0; l<config_t::VEC_WIDTH; l++) {
						#pragma HLS unroll
						temp_data[l] = temp.data.range(config_t::DATA_WIDTH*(l+1)-1, config_t::DATA_WIDTH*l);
					}
				}

				for (int l=0; l<config_t::OUT_VEC_WIDTH; l++) {
					#pragma HLS unroll
					in_data[l] = temp_data[l + k * config_t::OUT_VEC_WIDTH];
				}

				for (int l=0; l<config_t::OUT_VEC_WIDTH; l++) {
					#pragma HLS unroll
					in_data1[l] = m[j][l + k * config_t::OUT_VEC_WIDTH] * in_data[l];
				}

				for (int l=0; l<config_t::OUT_VEC_WIDTH; l++) {
					#pragma HLS unroll
					if (in_data1[l].bit(e[j][l + k * config_t::OUT_VEC_WIDTH] - 1)) {
						in_data2[l] = (in_data1[l] >> e[j][l + k * config_t::OUT_VEC_WIDTH]) + 1;
					} else {
						in_data2[l] = in_data1[l] >> e[j][l + k * config_t::OUT_VEC_WIDTH];
					}
				}

				for (int l=0; l<config_t::OUT_VEC_WIDTH; l++) {
					#pragma HLS unroll
					out_data.data.range(config_t::OUT_DATA_WIDTH*(l+1)-1, config_t::OUT_DATA_WIDTH*l) = in_data2[l];
				}

				out_data.id = 0;
				out_data.dest = 255;
				out_data.user = i == 0 ? config_t::NUM_CHANNEL / config_t::OUT_VEC_WIDTH + 1 : config_t::NUM_CHANNEL / config_t::OUT_VEC_WIDTH;
				out_data.last = (j == config_t::NUM_CHANNEL/config_t::VEC_WIDTH - 1 && k == config_t::VEC_WIDTH / config_t::OUT_VEC_WIDTH - 1) ? 1 : 0;
				out.write(out_data);
			}
		}
	}
}
template <typename config_t>
void QuantAct(
		const ap_int<config_t::DATA_WIDTH> m[config_t::NUM_CHANNEL / config_t::VEC_WIDTH][config_t::VEC_WIDTH],
		const ap_int<config_t::DATA_WIDTH> e[config_t::NUM_CHANNEL / config_t::VEC_WIDTH][config_t::VEC_WIDTH],
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

#pragma HLS ARRAY_PARTITION variable=m dim=2 complete
#pragma HLS ARRAY_PARTITION variable=e dim=2 complete

	dataword temp;
	ap_int<config_t::DATA_WIDTH> in_data[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH*2> in_data1[config_t::VEC_WIDTH];
	ap_int<config_t::OUT_DATA_WIDTH> in_data2[config_t::VEC_WIDTH];
	ap_uint<config_t::OUT_DATA_WIDTH * config_t::VEC_WIDTH> in_data3;
	dataword out_data;

#pragma HLS ARRAY_PARTITION variable=in_data dim=0 complete
#pragma HLS ARRAY_PARTITION variable=in_data1 dim=0 complete
#pragma HLS ARRAY_PARTITION variable=in_data2 dim=0 complete

	// read N
	temp = in.read();
	unsigned int N = temp.data;

	out_data.data = N;
	out_data.id = config_t::id;
	out_data.dest = config_t::dest;
	out_data.user = config_t::NUM_CHANNEL / config_t::OUT_VEC_WIDTH + 1;
	out_data.last = 0;
	out.write(out_data);

	// read
	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int j=0; j<config_t::NUM_CHANNEL/config_t::VEC_WIDTH; j++) {
			#pragma HLS pipeline ii=1
			temp = in.read();

			for (int k=0; k<config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				in_data[k] = temp.data.range(config_t::DATA_WIDTH*(k+1)-1, config_t::DATA_WIDTH*k);
			}

			for (int k=0; k<config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				in_data1[k] = m[j][k] * in_data[k];
			}

			for (int k=0; k<config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				if (in_data1[k].bit(e[j][k] - 1)) {
					in_data2[k] = (in_data1[k] >> e[j][k]) + 1;
				} else {
					in_data2[k] = in_data1[k] >> e[j][k];
				}
			}

			for (int k=0; k<config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				in_data3.range(config_t::OUT_DATA_WIDTH*(k+1)-1, config_t::OUT_DATA_WIDTH*k) = in_data2[k];
			}

			int jj = j / (config_t::OUT_VEC_WIDTH / config_t::VEC_WIDTH);
			int ii = j % (config_t::OUT_VEC_WIDTH / config_t::VEC_WIDTH);

			out_data.data.range(config_t::OUT_DATA_WIDTH * config_t::VEC_WIDTH * (ii+1)-1, config_t::OUT_DATA_WIDTH * config_t::VEC_WIDTH * ii) = in_data3;

			if (ii == config_t::OUT_VEC_WIDTH / config_t::VEC_WIDTH - 1) {
				out_data.id = config_t::id;
				out_data.dest = config_t::dest;
				out_data.user = config_t::NUM_CHANNEL / config_t::OUT_VEC_WIDTH + 1;
				out_data.last = jj == config_t::NUM_CHANNEL/config_t::OUT_VEC_WIDTH - 1 ? 1 : 0;
				out.write(out_data);
			}

		}
	}
}

/////////////////////////////////////////////////////////////////////gelu //////////////////////////////////////////////////////

template<typename config_t>
void Gelu(
		const ap_int<config_t::DATA_WIDTH> b[config_t::UNROLL_FACTOR][config_t::VEC_WIDTH],
		const ap_int<config_t::DATA_WIDTH> c[config_t::UNROLL_FACTOR][config_t::VEC_WIDTH],
		const ap_int<config_t::DATA_WIDTH> shift[config_t::UNROLL_FACTOR][config_t::VEC_WIDTH],
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS inline
#pragma HLS ARRAY_PARTITION variable=b complete dim=2
#pragma HLS ARRAY_PARTITION variable=c complete dim=2
#pragma HLS ARRAY_PARTITION variable=shift complete dim=2

	dataword temp, out_data;

	// read N
	temp = in.read();
	unsigned int N = temp.data;

	out_data.data = N;
	out_data.id = config_t::id;
	out_data.dest = config_t::dest;
	out_data.user = config_t::NUM_CHANNEL / config_t::VEC_WIDTH + 1;
	out_data.last = 0;
	out.write(out_data);

	// read
	for (int i=0; i < N; i++) {
		for (int j=0; j<config_t::NUM_CHANNEL/config_t::VEC_WIDTH; j++) {
			#pragma HLS pipeline ii=1
			temp = in.read();

			for (int k=0; k<config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = temp.data.range(config_t::DATA_WIDTH*(k+1)-1, config_t::DATA_WIDTH*k);
				ap_int<config_t::DATA_WIDTH> read_abs;
				ap_int<config_t::DATA_WIDTH> abs_int;
				ap_int<config_t::DATA_WIDTH> b_val = b[j][k];
				ap_int<config_t::DATA_WIDTH> b_neg = ~b_val + 1;
				ap_int<config_t::DATA_WIDTH> c_val = c[j][k];
				ap_int<config_t::DATA_WIDTH> shift_val = shift[j][k];
				ap_int<config_t::DATA_WIDTH> sq;
				ap_int<config_t::DATA_WIDTH> y_int;
				ap_int<config_t::DATA_WIDTH> x_int;

				if (read.bit(config_t::DATA_WIDTH - 1))
				{
					read_abs = ~read + 1;
				}
				else
				{
					read_abs = read;
				}

				if (read_abs < b_neg)
				{
					abs_int = read_abs;
				}
				else
				{
					abs_int = b_neg;
				}

				sq = ap_int<16>(abs_int + b_val) * ap_int<16>(abs_int + b_val) + c_val;

				if (read.bit(config_t::DATA_WIDTH - 1) == 1)
				{
					y_int = (~sq + 1) >> config_t::self_const;
				}
				else if (read == 0)
				{
					y_int = 0;
				}
				else
				{
					y_int = sq >> config_t::self_const;
				}

				x_int = ap_int<16>(read) * (y_int + shift_val);

				out_data.data.range(config_t::DATA_WIDTH*(k+1)-1, config_t::DATA_WIDTH*k) = x_int;
			}

			out_data.id = config_t::id;
			out_data.dest = config_t::dest;
			out_data.user = config_t::NUM_CHANNEL / config_t::VEC_WIDTH + 1;
			out_data.last = j == config_t::NUM_CHANNEL/config_t::VEC_WIDTH - 1 ? 1 : 0;
			out.write(out_data);
		}
	}
}


///////////////////////////////////////////////////////////////// layernorm /////////////////////////////////////////////////////////////////////
template<typename config_t>
void layernorm_save_data(
		hls::stream<dataword>& in,
		hls::stream<ap_int<32> > &out_n,
		hls::stream<ap_int<config_t::DATA_WIDTH> > out_1[config_t::UNROLL_FACTOR],
		hls::stream<ap_int<config_t::DATA_WIDTH> > out_2[config_t::UNROLL_FACTOR])
{
	// read N
	dataword temp = in.read();
	unsigned int N = temp.data;
	out_n.write(N);

	ap_int<config_t::DATA_WIDTH> sum[config_t::VEC_WIDTH];
	ap_int<config_t::DATA_WIDTH> sum_val;
	ap_int<config_t::DATA_WIDTH> buffer[config_t::NUM_CHANNEL];
	ap_int<config_t::DATA_WIDTH> mean;

#pragma HLS ARRAY_PARTITION variable=sum complete dim=0
#pragma HLS ARRAY_PARTITION variable=buffer complete dim=0

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
				buffer[j * config_t::VEC_WIDTH + k] = read;

				sum[k] += read;
			}

			// cal max value for each row
			if (j == config_t::NUM_CHANNEL / config_t::VEC_WIDTH - 1) {
				for (int k=0; k<config_t::VEC_WIDTH; k++) {
					#pragma HLS unroll
					sum_val += sum[k];
				}

				// mean = sum_val / config_t::NUM_CHANNEL;

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
			}
		}

		for (int j=0; j < config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; j++) { // each row
			#pragma HLS pipeline ii=1
			for (int k=0; k < config_t::UNROLL_FACTOR; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = buffer[k + j * config_t::UNROLL_FACTOR];
				ap_int<config_t::DATA_WIDTH> read1 = read - mean;

				out_1[k].write(read1);
				out_2[k].write(read1);
			}
		}
	}
}


template<typename config_t>
void layernorm_compute_var(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_int<32> > &out_n,
		hls::stream<ap_int<config_t::DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &out_var)
{

	ap_int<config_t::IM_DATA_WIDTH> y[config_t::UNROLL_FACTOR];
	ap_uint<config_t::DATA_WIDTH> var[config_t::UNROLL_FACTOR];
	ap_uint<config_t::DATA_WIDTH> var_val;

#pragma HLS ARRAY_PARTITION variable=y dim=0 complete
#pragma HLS ARRAY_PARTITION variable=var complete dim=0

	unsigned int N = in_n.read();
	out_n.write(N);

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int l=0; l<config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; l++) {
			#pragma HLS pipeline ii=1

			if (l == 0) {
				for (int j=0; j<config_t::VEC_WIDTH; j++) {
					#pragma HLS unroll
					var[j] = 0;
				}

				var_val = 0;
			}

			for (int j=0; j < config_t::UNROLL_FACTOR; j++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in[j].read();
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

template<typename config_t>
void layernorm_get_num_bits(
		ap_uint<config_t::DATA_WIDTH> var,
		ap_uint<8> &bits)
{
	// only work for 32 bits
	ap_uint<config_t::DATA_WIDTH / 2> temp_16;
	ap_uint<config_t::DATA_WIDTH / 4> temp_8;
	ap_uint<config_t::DATA_WIDTH / 8> temp_4;
	ap_uint<config_t::DATA_WIDTH / 16> temp_2;

	// the base
	ap_uint<1> base_place_16, base_place_8, base_place_4, base_place_2;


	temp_16 = var.range(31, 16) == 0 ? var.range(15, 0) : var.range(31, 16);
	base_place_16 = var.range(31, 16) == 0 ? 0 : 1;

	temp_8 = temp_16.range(15, 8) == 0 ? temp_16.range(7, 0) : temp_16.range(15, 8);
	base_place_8 = temp_16.range(15, 8) == 0 ? 0 : 1;

	temp_4 = temp_8.range(7, 4) == 0 ? temp_8.range(3, 0) : temp_8.range(7, 4);
	base_place_4 = temp_8.range(7, 4) == 0 ? 0 : 1;

	temp_2 = temp_4.range(3, 2) == 0 ? temp_4.range(1, 0) : temp_4.range(3, 2);
	base_place_2 = temp_4.range(3, 2) == 0 ? 0 : 1;


	bits = 1 + ((ap_uint<8>(base_place_16)<<4) | (ap_uint<8>(base_place_8)<<3) | (ap_uint<8>(base_place_4)<<2) | (ap_uint<8>(base_place_2)<<1) | ap_uint<8>(temp_2[1]));

}

template<typename config_t>
void get_num_bits(
		ap_uint<config_t::DATA_WIDTH> var,
		ap_uint<8> &bits)
{
	// only work for 32 bits
	ap_uint<config_t::DATA_WIDTH / 2> temp_16;
	ap_uint<config_t::DATA_WIDTH / 4> temp_8;
	ap_uint<config_t::DATA_WIDTH / 8> temp_4;
	ap_uint<config_t::DATA_WIDTH / 16> temp_2;

	// the base
	ap_uint<1> base_place_16, base_place_8, base_place_4, base_place_2;


	temp_16 = var.range(31, 16) == 0 ? var.range(15, 0) : var.range(31, 16);
	base_place_16 = var.range(31, 16) == 0 ? 0 : 1;

	temp_8 = temp_16.range(15, 8) == 0 ? temp_16.range(7, 0) : temp_16.range(15, 8);
	base_place_8 = temp_16.range(15, 8) == 0 ? 0 : 1;

	temp_4 = temp_8.range(7, 4) == 0 ? temp_8.range(3, 0) : temp_8.range(7, 4);
	base_place_4 = temp_8.range(7, 4) == 0 ? 0 : 1;

	temp_2 = temp_4.range(3, 2) == 0 ? temp_4.range(1, 0) : temp_4.range(3, 2);
	base_place_2 = temp_4.range(3, 2) == 0 ? 0 : 1;


	bits = 1 + ((ap_uint<8>(base_place_16)<<4) | (ap_uint<8>(base_place_8)<<3) | (ap_uint<8>(base_place_4)<<2) | (ap_uint<8>(base_place_2)<<1) | ap_uint<8>(temp_2[1]));

}

template<typename config_t>
void layernorm_sqrt_alg_based(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_int<32> > &out_n,
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &in_var,
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &out_factor)
{
	unsigned int N = in_n.read();
	out_n.write(N);

	ap_uint<config_t::DATA_WIDTH> var;
	ap_uint<8> bits;
	ap_uint<8> exp;
	ap_uint<config_t::DATA_WIDTH> x[5];
	ap_uint<config_t::DATA_WIDTH> temp;

#pragma HLS ARRAY_PARTITION variable=x complete dim=0

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int j=0; j<4; j++) {
			#pragma HLS unroll
			if (j == 0) {
				var = in_var.read();
				get_num_bits<config_t>(var, bits);
				
				if (bits.bit(0) == 1)
				{
					exp = ap_uint<8>(bits>>1) + ap_uint<8>(1);
				}
				else
				{
					exp = ap_uint<8>(bits>>1);
				}
				
				x[j] = 1 << exp;
			}

			temp = (x[j] + var / x[j]) >> 1;

			if (x[j] > temp) {
				x[j+1] = temp;
			} else {
				x[j+1] = x[j];
			}

			if (j == 3) {
				ap_uint<config_t::DATA_WIDTH> factor = ap_uint<32>(1<<31) / ap_uint<32>(x[4] << config_t::shift);
				out_factor.write(factor);
			}
		}
	}
}


template<typename config_t>
void layernorm_compute_y(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_int<32> > &out_n,
		const ap_int<config_t::DATA_WIDTH> bias[config_t::NUM_CHANNEL],
		hls::stream<ap_uint<config_t::DATA_WIDTH> > &in_factor,
		hls::stream<ap_int<config_t::DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<config_t::DATA_WIDTH> > out[config_t::UNROLL_FACTOR])
{

	ap_uint<config_t::DATA_WIDTH> factor;
	ap_int<config_t::DATA_WIDTH> y[config_t::UNROLL_FACTOR];
	ap_int<config_t::DATA_WIDTH> y1[config_t::UNROLL_FACTOR];

#pragma HLS ARRAY_PARTITION variable=y complete dim=0
#pragma HLS ARRAY_PARTITION variable=y1 complete dim=0

	ap_uint<config_t::DATA_WIDTH> buffer[config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR][config_t::UNROLL_FACTOR];

#pragma HLS ARRAY_PARTITION variable=buffer complete dim=2

	unsigned int N = in_n.read();
	out_n.write(N);

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int j=0; j<config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; j++) {
			#pragma HLS pipeline ii=1
			for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = in[k].read();
				buffer[j][k] = read;
			}
		}

		for (int j=0; j<config_t::NUM_CHANNEL / config_t::UNROLL_FACTOR; j++) {
			#pragma HLS pipeline ii=1

			if (j == 0) {
				factor = in_factor.read();
			}

			for (int k=0; k<config_t::UNROLL_FACTOR; k++) {
				#pragma HLS unroll
				ap_int<config_t::DATA_WIDTH> read = buffer[j][k];
				y[k] = (read * factor) >> 1;
				y1[k] = y[k] + bias[k + j * config_t::UNROLL_FACTOR];
				out[k].write(y1[k]);
			}
		}
	}
}

template<typename config_t>
void layernorm_write(
		hls::stream<ap_int<32> > &in_n,
		hls::stream<ap_uint<config_t::DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<dataword>& out)
{

	// read N
	unsigned int N = in_n.read();

	dataword out_data;

	out_data.data = N;
	out_data.id = config_t::id;
	out_data.dest = config_t::dest;
	out_data.last = 0;
	out_data.user = config_t::NUM_CHANNEL / config_t::VEC_WIDTH + 1;
	out.write(out_data);


	ap_uint<config_t::DATA_WIDTH * config_t::UNROLL_FACTOR> temp[config_t::VEC_WIDTH / config_t::UNROLL_FACTOR];

	for (int i=0; i<N; i++) {
#pragma HLS loop_tripcount min=1 max=512
		for (int j=0; j<config_t::NUM_CHANNEL / config_t::VEC_WIDTH; j++) {
			for (int k=0; k<config_t::VEC_WIDTH / config_t::UNROLL_FACTOR; k++) {
				#pragma HLS pipeline ii=1

				for (int l=0; l<config_t::UNROLL_FACTOR; l++) {
					#pragma HLS unroll
					temp[k].range(config_t::DATA_WIDTH * (l+1)-1, config_t::DATA_WIDTH*l) = in[l].read();
				}

				if (k == config_t::VEC_WIDTH / config_t::UNROLL_FACTOR - 1) {
					for (int l=0; l<config_t::VEC_WIDTH / config_t::UNROLL_FACTOR; l++) {
						#pragma HLS unroll
						out_data.data.range(config_t::DATA_WIDTH * config_t::UNROLL_FACTOR*(l+1)-1, config_t::DATA_WIDTH * config_t::UNROLL_FACTOR*l) = temp[l];
					}

					out_data.id = config_t::id;
					out_data.dest = config_t::dest;
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
		const ap_int<config_t::DATA_WIDTH> bias[config_t::NUM_CHANNEL],
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS inline
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out
#pragma HLS dataflow


	hls::stream<ap_int<32> > n_pipe1;
	hls::stream<ap_int<32> > n_pipe2;
	hls::stream<ap_int<32> > n_pipe3;
	hls::stream<ap_int<32> > n_pipe4;
	hls::stream<ap_int<config_t::DATA_WIDTH> > in_compute[config_t::UNROLL_FACTOR];
	hls::stream<ap_int<config_t::DATA_WIDTH> > in_compute_y[config_t::UNROLL_FACTOR];
	hls::stream<ap_uint<config_t::DATA_WIDTH> > in_sqrt;
	hls::stream<ap_uint<config_t::DATA_WIDTH> > in_compute_y_factor;
	hls::stream<ap_uint<config_t::DATA_WIDTH> > in_write[config_t::UNROLL_FACTOR];

#pragma HLS stream variable=in_compute_y depth=1024

	//	 save buffer
	layernorm_save_data<config_t>(in, n_pipe1, in_compute, in_compute_y);

	// compute var
	layernorm_compute_var<config_t>(n_pipe1, n_pipe2, in_compute, in_sqrt);

	// square root
	layernorm_sqrt_alg_based<config_t>(n_pipe2, n_pipe3, in_sqrt, in_compute_y_factor);

	// add bias
	layernorm_compute_y<config_t>(n_pipe3, n_pipe4, bias, in_compute_y_factor, in_compute_y, in_write);

	// write
	layernorm_write<config_t>(n_pipe4, in_write, out);
}

template<typename config_t>
void LayernormBcast(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
	hls::stream<ap_uint<512> > fifo;
	dataword temp;
	unsigned int N;

	temp = in.read();
	N = temp.data.range(31,0);

#pragma HLS stream variable=fifo depth=config_t::K/config_t::VEC_WIDTH

	for (int i=0; i < N; i++) {
		for (int iter=0; iter < config_t::NUM_DEST; iter++) {

			if (i == 0)
			{
				temp.data = N;
				temp.id = config_t::id;
				temp.dest = iter == config_t::NUM_DEST - 1 ? config_t::identity_dest : config_t::dest + iter;
				temp.last = 0;
				temp.user = config_t::K / config_t::VEC_WIDTH + 1;
				out.write(temp);
			}

			for (int j=0; j < config_t::K / config_t::VEC_WIDTH; j++){
				#pragma HLS pipeline ii=1

				if (iter == 0)
				{
					temp = in.read();
					fifo.write(temp.data);
				}
				else if (iter == config_t::NUM_DEST - 1)
				{
					temp.data = fifo.read();
				}
				else
				{
					temp.data = fifo.read();
					fifo.write(temp.data);
				}

				temp.id = config_t::id;
				temp.dest = iter == config_t::NUM_DEST - 1 ? config_t::identity_dest : config_t::dest + iter;
				temp.last = j == config_t::K / config_t::VEC_WIDTH-1 ? 1:0;
				temp.user = i == 0 ? config_t::K / config_t::VEC_WIDTH + 1 : config_t::K / config_t::VEC_WIDTH;
				out.write(temp);
			}
		}
	}
}

template<typename config_t>
void IdentityGather(
		hls::stream<dataword>& in,
		hls::stream<dataword> out[2]
		)
{
#pragma HLS inline
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

	dataword temp = in.read();
	unsigned int N = temp.data.range(31,0);

	if (temp.id == config_t::SRC_ID_PREV_LAYER)
	{
		out[1].write(temp);
	}
	else
	{
		out[0].write(temp);
	}

	for (int iter=0; iter < ap_uint<16>(N) * (config_t::K / config_t::VEC_WIDTH_1 + config_t::K / config_t::VEC_WIDTH_2) + config_t::NUM_SRC_PREV_KERNEL; iter++) {
		#pragma HLS pipeline ii=1
		temp = in.read();
		if (temp.id == config_t::SRC_ID_PREV_LAYER)
		{
			out[1].write(temp);
		}
		else
		{
			out[0].write(temp);
		}
	}
}

template<typename config_t>
void IdentityAdd(
		hls::stream<dataword> &in1,
		hls::stream<dataword> &in2,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in1
#pragma HLS INTERFACE axis port=in2
#pragma HLS INTERFACE axis port=out

	dataword temp1;
	dataword temp2;
	dataword out_data;
	unsigned int N;

	temp1 = in1.read();
	temp2 = in2.read();

	N = temp1.data.range(31,0);

	out_data.data = temp1.data;
	out_data.id = config_t::id;
	out_data.dest = config_t::dest;
	out_data.last = 0;
	out_data.user = config_t::K / config_t::VEC_WIDTH + 1;
	out.write(out_data);

	for (int i=0; i < N; i++) {
		for (int j=0; j<config_t::K/config_t::VEC_WIDTH; j++) {
			#pragma HLS pipeline ii=1
			temp1 = in1.read();
			temp2 = in2.read();

			for (int k=0; k < config_t::VEC_WIDTH; k++) {
				#pragma HLS unroll
				out_data.data.range(config_t::DATA_WIDTH*(k+1)-1, config_t::DATA_WIDTH*k) = temp1.data.range(config_t::DATA_WIDTH*(k+1)-1, config_t::DATA_WIDTH*k) + \
						temp2.data.range(config_t::DATA_WIDTH*(k+1)-1, config_t::DATA_WIDTH*k);
			}

			out_data.id = config_t::id;
			out_data.dest = config_t::dest;
			out_data.last = j == config_t::K / config_t::VEC_WIDTH - 1 ? 1 : 0;
			out_data.user = config_t::K / config_t::VEC_WIDTH + 1;
			out.write(out_data);
		}
	}
}
