
#pragma once

#include "common.hpp"

void layer_norm(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		);
