
#include "common.hpp"
#include "parameters.hpp"

#include "softmax.hpp"




// SoftMax entry function
void softmax(
		hls::stream<dataword>& in,
		hls::stream<ap_uint<Config_Softmax_1::OUT_DATA_WIDTH * Config_Softmax_1::UNROLL_FACTOR> >& out
		)
{
#pragma HLS interface ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out

    // values for self_const, x0, b, c, m, e are defined in parameters.hpp
	Softmax<Config_Softmax_1>(self_const, x0, b, c, m, e, in, out);

}
