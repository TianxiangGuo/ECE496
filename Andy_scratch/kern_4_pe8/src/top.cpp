#include "common.hpp" 
#include "modules.hpp" 
#include "parameters.hpp" 
#include "weights.hpp" 
void kernel_4(
		hls::stream<dataword>& in, 
		hls::stream<dataword>& out) 
{ 
#pragma HLS interface ap_ctrl_none port=return 
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out
#pragma HLS dataflow
hls::stream<dataword> pipe_1; 
AttentionMatmul<config_t_attention_matmul_4>(in, pipe_1); 
const ap_int<32> self_const=SOFTMAX_CONST_4;
const ap_int<32> x0=SOFTMAX_X0_4;
const ap_int<32> b=SOFTMAX_B_4;
const ap_int<32> c=SOFTMAX_C_4;
const ap_int<32> m=SOFTMAX_M_4;
const ap_int<16> e=SOFTMAX_E_4;
Softmax<config_t_softmax_4>(self_const, x0, b, c, m, e, pipe_1, out); 

} 
