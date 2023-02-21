#include "common.hpp" 
#include "modules.hpp" 
#include "parameters.hpp" 
#include "weights.hpp" 
void kernel_29(
		hls::stream<dataword>& in, 
		hls::stream<dataword>& out) 
{ 
#pragma HLS interface ap_ctrl_none port=return 
#pragma HLS INTERFACE axis port=in
#pragma HLS INTERFACE axis port=out
#pragma HLS dataflow
hls::stream<dataword> pipe_1[2]; 
hls::stream<dataword> pipe_2; 
hls::stream<dataword> pipe_3; 
hls::stream<dataword> pipe_4; 
hls::stream<dataword> pipe_5; 
IdentityGather<config_t_identity_gather_29>(in, pipe_1); 
const ap_int<32> identity_m[12][64] = IDENTITY_ACT_M_29;
const ap_int<32> identity_e[12][64] = IDENTITY_ACT_E_29;
IdentityQuantAct<config_t_identity_act_29>(identity_m, identity_e, pipe_1[1], pipe_2); 
IdentityAdd<config_t_identity_add_29>(pipe_1[0], pipe_2, pipe_3); 
const ap_int<32> bias[768] = LAYERNORM_BIAS_29;
LayerNorm<config_t_layernorm_29>(bias, pipe_3, pipe_4); 
const ap_int<32> m[48][16] = ACT_M_29;
const ap_int<32> e[48][16] = ACT_E_29;
QuantAct<config_t_act_29>(m, e, pipe_4, pipe_5); 
LayernormBcast<config_t_layernorm_bcast_29>(pipe_5, out); 

} 
