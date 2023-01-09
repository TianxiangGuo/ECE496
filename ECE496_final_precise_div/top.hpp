#pragma once
#include "common.hpp"
#include "parameters.hpp"


void softmax (
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		);
