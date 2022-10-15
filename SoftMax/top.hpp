#pragma once
#include "common.hpp"
void softmax(
		hls::stream<dataword>& in,
		hls::stream<ap_uint<128> >& out
		);

