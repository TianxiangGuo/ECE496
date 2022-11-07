#pragma once
#include "common.hpp"
#include "parameters.hpp"


void softmax (
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		);

void save_data (
		hls::stream<dataword>& in,	// input packets
		hls::stream<ap_uint<96> >& out_meta,	// Output metadata
		hls::stream<ap_uint<32> >& out_num_unrolled_iter,
		hls::stream<ap_uint<32> >& out_batch_size,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH> > out[config_t::UNROLL_FACTOR]
);


void quantized_exponential (
		hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH> > in [config_t::UNROLL_FACTOR],
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_unrolled_iterations,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > out[config_t::UNROLL_FACTOR]
);


void compute_softmax_from_exponents (
	hls::stream<ap_uint<32> >& in_num_batches,
	hls::stream<ap_uint<32> >& in_num_unrolled_iter,
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH> > in [config_t::UNROLL_FACTOR],
	hls::stream<ap_uint<32> >& out_num_unrolled_iter,
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > out[config_t::UNROLL_FACTOR]
);


void write (
		hls::stream<ap_uint<96> >& in_meta,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH> > in[config_t::UNROLL_FACTOR],
		hls::stream<dataword>& out
);
