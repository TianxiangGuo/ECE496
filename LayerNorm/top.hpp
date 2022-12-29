
#pragma once

#include "common.hpp"

void layer_norm(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		);

void division(
		hls::stream<ap_int<32> >& n,
		hls::stream<ap_int<32> >& in1,
		hls::stream<ap_int<32> >& in2,
		hls::stream<ap_int<32> >& out);
