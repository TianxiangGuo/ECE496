#pragma once
#include "common.hpp"
#include "parameters.hpp"


void softmax (
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		);

void read_data (
		hls::stream<dataword>& in,	// input packets
		hls::stream<ap_uint<96> >& out_meta,	// Output metadata
		hls::stream<ap_uint<32> >& out_num_unrolled_iter,
		hls::stream<ap_uint<32> >& out_batch_size,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> >& out,
		hls::stream<ap_int<32> >& max_input
);


void subtract_max(
		hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<32> >& in_max,
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_unrolled_iterations,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> >& in,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> >& out
);

void quantized_exponential (
		hls::stream<ap_uint<32> >& in_num_batches,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::IN_DATA_WIDTH * config_t::UNROLL_FACTOR> >& in,
		hls::stream<ap_uint<32> >& out_num_batches,
		hls::stream<ap_uint<32> >& out_unrolled_iterations,
		hls::stream<ap_int<config_t::QUANT_DATA_WIDTH*config_t::UNROLL_FACTOR> >& out
);


void compute_softmax_from_exponents (
	hls::stream<ap_uint<32> >& in_num_batches,
	hls::stream<ap_uint<32> >& in_num_unrolled_iter,
	hls::stream<ap_int<config_t::QUANT_DATA_WIDTH *config_t::UNROLL_FACTOR> >& in,
	hls::stream<ap_uint<32> >& out_num_unrolled_iter,
	hls::stream<ap_int<config_t::OUT_DATA_WIDTH*config_t::UNROLL_FACTOR> >& out
);

void write (
		hls::stream<ap_uint<96> >& in_meta,
		hls::stream<ap_uint<32> >& in_num_unrolled_iter,
		hls::stream<ap_int<config_t::OUT_DATA_WIDTH * config_t::UNROLL_FACTOR> >& in,
		hls::stream<dataword>& out
);
