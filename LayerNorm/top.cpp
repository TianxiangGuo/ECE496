
#include "common.hpp"
#include "parameters.hpp"
#include "matmul.hpp"

void layer_norm(
		hls::stream<dataword>& in,
		hls::stream<dataword>& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

//	LayerNorm<Config_LayerNorm_1>(sqrt_table, bias, in, out);
	LayerNorm<Config_LayerNorm_1>(bias, in, out);
}
