// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_divide_preci_HH_
#define _softmax_divide_preci_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "softmax_sdiv_26nscud.h"

namespace ap_rtl {

struct softmax_divide_preci : public sc_module {
    // Port declarations 25
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > in_proc_2_iter_c_V_V_dout;
    sc_in< sc_logic > in_proc_2_iter_c_V_V_empty_n;
    sc_out< sc_logic > in_proc_2_iter_c_V_V_read;
    sc_in< sc_lv<32> > in_proc_2_iter_r_V_V_dout;
    sc_in< sc_logic > in_proc_2_iter_r_V_V_empty_n;
    sc_out< sc_logic > in_proc_2_iter_r_V_V_read;
    sc_out< sc_lv<32> > in_write_iter_c_V_V_din;
    sc_in< sc_logic > in_write_iter_c_V_V_full_n;
    sc_out< sc_logic > in_write_iter_c_V_V_write;
    sc_in< sc_lv<32> > sum_V_V_dout;
    sc_in< sc_logic > sum_V_V_empty_n;
    sc_out< sc_logic > sum_V_V_read;
    sc_in< sc_lv<256> > in_proc_2_V_V_dout;
    sc_in< sc_logic > in_proc_2_V_V_empty_n;
    sc_out< sc_logic > in_proc_2_V_V_read;
    sc_out< sc_lv<128> > in_write_V_V_din;
    sc_in< sc_logic > in_write_V_V_full_n;
    sc_out< sc_logic > in_write_V_V_write;


    // Module declarations
    softmax_divide_preci(sc_module_name name);
    SC_HAS_PROCESS(softmax_divide_preci);

    ~softmax_divide_preci();

    sc_trace_file* mVcdFile;

    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U48;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U49;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U50;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U51;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U52;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U53;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U54;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U55;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U56;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U57;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U58;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U59;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U60;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U61;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U62;
    softmax_sdiv_26nscud<1,30,26,32,32>* softmax_sdiv_26nscud_U63;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > in_proc_2_iter_c_V_V_blk_n;
    sc_signal< sc_logic > in_proc_2_iter_r_V_V_blk_n;
    sc_signal< sc_logic > in_write_iter_c_V_V_blk_n;
    sc_signal< sc_logic > sum_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_i_reg_1185;
    sc_signal< sc_logic > in_proc_2_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter1_reg;
    sc_signal< sc_logic > in_write_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter32;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter31_reg;
    sc_signal< sc_lv<64> > indvar_flatten_reg_165;
    sc_signal< sc_lv<32> > iter_i_reg_176;
    sc_signal< sc_lv<32> > tmp_V_12_reg_1160;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > tmp_V_16_reg_1166;
    sc_signal< sc_lv<64> > bound_fu_193_p2;
    sc_signal< sc_lv<64> > bound_reg_1171;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_199_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter20;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter21;
    sc_signal< bool > ap_block_state25_pp0_stage0_iter22;
    sc_signal< bool > ap_block_state26_pp0_stage0_iter23;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter24;
    sc_signal< bool > ap_block_state28_pp0_stage0_iter25;
    sc_signal< bool > ap_block_state29_pp0_stage0_iter26;
    sc_signal< bool > ap_block_state30_pp0_stage0_iter27;
    sc_signal< bool > ap_block_state31_pp0_stage0_iter28;
    sc_signal< bool > ap_block_state32_pp0_stage0_iter29;
    sc_signal< bool > ap_block_state33_pp0_stage0_iter30;
    sc_signal< bool > ap_block_state34_pp0_stage0_iter31;
    sc_signal< bool > ap_block_state35_pp0_stage0_iter32;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter3_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter4_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter5_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter6_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter7_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter8_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter9_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter10_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter11_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter12_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter13_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter14_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter15_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter16_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter17_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter18_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter19_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter20_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter21_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter22_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter23_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter24_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter25_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter26_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter27_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter28_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter29_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1176_pp0_iter30_reg;
    sc_signal< sc_lv<64> > indvar_flatten_next_fu_204_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > tmp_i_fu_223_p2;
    sc_signal< sc_lv<32> > iter_fu_229_p2;
    sc_signal< sc_lv<8> > tmp_V_24_0_trunc_i_fu_705_p3;
    sc_signal< sc_lv<8> > tmp_V_24_0_trunc_i_reg_1294;
    sc_signal< sc_lv<8> > tmp_V_24_1_trunc_i_fu_733_p3;
    sc_signal< sc_lv<8> > tmp_V_24_1_trunc_i_reg_1299;
    sc_signal< sc_lv<8> > tmp_V_24_2_trunc_i_fu_761_p3;
    sc_signal< sc_lv<8> > tmp_V_24_2_trunc_i_reg_1304;
    sc_signal< sc_lv<8> > tmp_V_24_3_trunc_i_fu_789_p3;
    sc_signal< sc_lv<8> > tmp_V_24_3_trunc_i_reg_1309;
    sc_signal< sc_lv<8> > tmp_V_24_4_trunc_i_fu_817_p3;
    sc_signal< sc_lv<8> > tmp_V_24_4_trunc_i_reg_1314;
    sc_signal< sc_lv<8> > tmp_V_24_5_trunc_i_fu_845_p3;
    sc_signal< sc_lv<8> > tmp_V_24_5_trunc_i_reg_1319;
    sc_signal< sc_lv<8> > tmp_V_24_6_trunc_i_fu_873_p3;
    sc_signal< sc_lv<8> > tmp_V_24_6_trunc_i_reg_1324;
    sc_signal< sc_lv<8> > tmp_V_24_7_trunc_i_fu_901_p3;
    sc_signal< sc_lv<8> > tmp_V_24_7_trunc_i_reg_1329;
    sc_signal< sc_lv<8> > tmp_V_24_8_trunc_i_fu_929_p3;
    sc_signal< sc_lv<8> > tmp_V_24_8_trunc_i_reg_1334;
    sc_signal< sc_lv<8> > tmp_V_24_9_trunc_i_fu_957_p3;
    sc_signal< sc_lv<8> > tmp_V_24_9_trunc_i_reg_1339;
    sc_signal< sc_lv<8> > tmp_V_24_10_trunc_i_fu_985_p3;
    sc_signal< sc_lv<8> > tmp_V_24_10_trunc_i_reg_1344;
    sc_signal< sc_lv<8> > tmp_V_24_11_trunc_i_fu_1013_p3;
    sc_signal< sc_lv<8> > tmp_V_24_11_trunc_i_reg_1349;
    sc_signal< sc_lv<8> > tmp_V_24_12_trunc_i_fu_1041_p3;
    sc_signal< sc_lv<8> > tmp_V_24_12_trunc_i_reg_1354;
    sc_signal< sc_lv<8> > tmp_V_24_13_trunc_i_fu_1069_p3;
    sc_signal< sc_lv<8> > tmp_V_24_13_trunc_i_reg_1359;
    sc_signal< sc_lv<8> > tmp_V_24_14_trunc_i_fu_1097_p3;
    sc_signal< sc_lv<8> > tmp_V_24_14_trunc_i_reg_1364;
    sc_signal< sc_lv<8> > tmp_V_24_15_trunc_i_fu_1125_p3;
    sc_signal< sc_lv<8> > tmp_V_24_15_trunc_i_reg_1369;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter19;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter20;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter21;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter22;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter23;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter24;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter25;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter26;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter27;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter28;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter29;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter30;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter31;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > tmp_V_fu_122;
    sc_signal< sc_lv<32> > bound_fu_193_p0;
    sc_signal< sc_lv<32> > bound_fu_193_p1;
    sc_signal< sc_lv<1> > exitcond_i2_fu_210_p2;
    sc_signal< sc_lv<32> > iter_i_mid2_fu_215_p3;
    sc_signal< sc_lv<16> > tmp_fu_243_p1;
    sc_signal< sc_lv<24> > read_V_i_fu_247_p3;
    sc_signal< sc_lv<26> > grp_fu_259_p0;
    sc_signal< sc_lv<16> > tmp_3_fu_265_p4;
    sc_signal< sc_lv<24> > read_V_1_i_fu_275_p3;
    sc_signal< sc_lv<26> > grp_fu_287_p0;
    sc_signal< sc_lv<16> > tmp_4_fu_293_p4;
    sc_signal< sc_lv<24> > read_V_2_i_fu_303_p3;
    sc_signal< sc_lv<26> > grp_fu_315_p0;
    sc_signal< sc_lv<16> > tmp_5_fu_321_p4;
    sc_signal< sc_lv<24> > read_V_3_i_fu_331_p3;
    sc_signal< sc_lv<26> > grp_fu_343_p0;
    sc_signal< sc_lv<16> > tmp_6_fu_349_p4;
    sc_signal< sc_lv<24> > read_V_4_i_fu_359_p3;
    sc_signal< sc_lv<26> > grp_fu_371_p0;
    sc_signal< sc_lv<16> > tmp_7_fu_377_p4;
    sc_signal< sc_lv<24> > read_V_5_i_fu_387_p3;
    sc_signal< sc_lv<26> > grp_fu_399_p0;
    sc_signal< sc_lv<16> > tmp_8_fu_405_p4;
    sc_signal< sc_lv<24> > read_V_6_i_fu_415_p3;
    sc_signal< sc_lv<26> > grp_fu_427_p0;
    sc_signal< sc_lv<16> > tmp_9_fu_433_p4;
    sc_signal< sc_lv<24> > read_V_7_i_fu_443_p3;
    sc_signal< sc_lv<26> > grp_fu_455_p0;
    sc_signal< sc_lv<16> > tmp_10_fu_461_p4;
    sc_signal< sc_lv<24> > read_V_8_i_fu_471_p3;
    sc_signal< sc_lv<26> > grp_fu_483_p0;
    sc_signal< sc_lv<16> > tmp_11_fu_489_p4;
    sc_signal< sc_lv<24> > read_V_9_i_fu_499_p3;
    sc_signal< sc_lv<26> > grp_fu_511_p0;
    sc_signal< sc_lv<16> > tmp_12_fu_517_p4;
    sc_signal< sc_lv<24> > read_V_i_29_fu_527_p3;
    sc_signal< sc_lv<26> > grp_fu_539_p0;
    sc_signal< sc_lv<16> > tmp_13_fu_545_p4;
    sc_signal< sc_lv<24> > read_V_10_i_fu_555_p3;
    sc_signal< sc_lv<26> > grp_fu_567_p0;
    sc_signal< sc_lv<16> > tmp_14_fu_573_p4;
    sc_signal< sc_lv<24> > read_V_11_i_fu_583_p3;
    sc_signal< sc_lv<26> > grp_fu_595_p0;
    sc_signal< sc_lv<16> > tmp_s_fu_601_p4;
    sc_signal< sc_lv<24> > read_V_12_i_fu_611_p3;
    sc_signal< sc_lv<26> > grp_fu_623_p0;
    sc_signal< sc_lv<16> > tmp_15_fu_629_p4;
    sc_signal< sc_lv<24> > read_V_13_i_fu_639_p3;
    sc_signal< sc_lv<26> > grp_fu_651_p0;
    sc_signal< sc_lv<16> > tmp_16_fu_657_p4;
    sc_signal< sc_lv<24> > read_V_14_i_fu_667_p3;
    sc_signal< sc_lv<26> > grp_fu_679_p0;
    sc_signal< sc_lv<32> > grp_fu_259_p2;
    sc_signal< sc_lv<24> > p_Result_13_i_fu_685_p4;
    sc_signal< sc_lv<1> > tmp_22_i_fu_695_p2;
    sc_signal< sc_lv<8> > tmp_18_fu_701_p1;
    sc_signal< sc_lv<32> > grp_fu_287_p2;
    sc_signal< sc_lv<24> > p_Result_13_1_i_fu_713_p4;
    sc_signal< sc_lv<1> > tmp_22_1_i_fu_723_p2;
    sc_signal< sc_lv<8> > tmp_19_fu_729_p1;
    sc_signal< sc_lv<32> > grp_fu_315_p2;
    sc_signal< sc_lv<24> > p_Result_13_2_i_fu_741_p4;
    sc_signal< sc_lv<1> > tmp_22_2_i_fu_751_p2;
    sc_signal< sc_lv<8> > tmp_20_fu_757_p1;
    sc_signal< sc_lv<32> > grp_fu_343_p2;
    sc_signal< sc_lv<24> > p_Result_13_3_i_fu_769_p4;
    sc_signal< sc_lv<1> > tmp_22_3_i_fu_779_p2;
    sc_signal< sc_lv<8> > tmp_21_fu_785_p1;
    sc_signal< sc_lv<32> > grp_fu_371_p2;
    sc_signal< sc_lv<24> > p_Result_13_4_i_fu_797_p4;
    sc_signal< sc_lv<1> > tmp_22_4_i_fu_807_p2;
    sc_signal< sc_lv<8> > tmp_22_fu_813_p1;
    sc_signal< sc_lv<32> > grp_fu_399_p2;
    sc_signal< sc_lv<24> > p_Result_13_5_i_fu_825_p4;
    sc_signal< sc_lv<1> > tmp_22_5_i_fu_835_p2;
    sc_signal< sc_lv<8> > tmp_23_fu_841_p1;
    sc_signal< sc_lv<32> > grp_fu_427_p2;
    sc_signal< sc_lv<24> > p_Result_13_6_i_fu_853_p4;
    sc_signal< sc_lv<1> > tmp_22_6_i_fu_863_p2;
    sc_signal< sc_lv<8> > tmp_24_fu_869_p1;
    sc_signal< sc_lv<32> > grp_fu_455_p2;
    sc_signal< sc_lv<24> > p_Result_13_7_i_fu_881_p4;
    sc_signal< sc_lv<1> > tmp_22_7_i_fu_891_p2;
    sc_signal< sc_lv<8> > tmp_25_fu_897_p1;
    sc_signal< sc_lv<32> > grp_fu_483_p2;
    sc_signal< sc_lv<24> > p_Result_13_8_i_fu_909_p4;
    sc_signal< sc_lv<1> > tmp_22_8_i_fu_919_p2;
    sc_signal< sc_lv<8> > tmp_26_fu_925_p1;
    sc_signal< sc_lv<32> > grp_fu_511_p2;
    sc_signal< sc_lv<24> > p_Result_13_9_i_fu_937_p4;
    sc_signal< sc_lv<1> > tmp_22_9_i_fu_947_p2;
    sc_signal< sc_lv<8> > tmp_27_fu_953_p1;
    sc_signal< sc_lv<32> > grp_fu_539_p2;
    sc_signal< sc_lv<24> > p_Result_13_i_32_fu_965_p4;
    sc_signal< sc_lv<1> > tmp_22_i_33_fu_975_p2;
    sc_signal< sc_lv<8> > tmp_28_fu_981_p1;
    sc_signal< sc_lv<32> > grp_fu_567_p2;
    sc_signal< sc_lv<24> > p_Result_13_10_i_fu_993_p4;
    sc_signal< sc_lv<1> > tmp_22_10_i_fu_1003_p2;
    sc_signal< sc_lv<8> > tmp_29_fu_1009_p1;
    sc_signal< sc_lv<32> > grp_fu_595_p2;
    sc_signal< sc_lv<24> > p_Result_13_11_i_fu_1021_p4;
    sc_signal< sc_lv<1> > tmp_22_11_i_fu_1031_p2;
    sc_signal< sc_lv<8> > tmp_30_fu_1037_p1;
    sc_signal< sc_lv<32> > grp_fu_623_p2;
    sc_signal< sc_lv<24> > p_Result_13_12_i_fu_1049_p4;
    sc_signal< sc_lv<1> > tmp_22_12_i_fu_1059_p2;
    sc_signal< sc_lv<8> > tmp_31_fu_1065_p1;
    sc_signal< sc_lv<32> > grp_fu_651_p2;
    sc_signal< sc_lv<24> > p_Result_13_13_i_fu_1077_p4;
    sc_signal< sc_lv<1> > tmp_22_13_i_fu_1087_p2;
    sc_signal< sc_lv<8> > tmp_32_fu_1093_p1;
    sc_signal< sc_lv<32> > grp_fu_679_p2;
    sc_signal< sc_lv<24> > p_Result_13_14_i_fu_1105_p4;
    sc_signal< sc_lv<1> > tmp_22_14_i_fu_1115_p2;
    sc_signal< sc_lv<8> > tmp_33_fu_1121_p1;
    sc_signal< sc_logic > grp_fu_259_ce;
    sc_signal< sc_logic > grp_fu_287_ce;
    sc_signal< sc_logic > grp_fu_315_ce;
    sc_signal< sc_logic > grp_fu_343_ce;
    sc_signal< sc_logic > grp_fu_371_ce;
    sc_signal< sc_logic > grp_fu_399_ce;
    sc_signal< sc_logic > grp_fu_427_ce;
    sc_signal< sc_logic > grp_fu_455_ce;
    sc_signal< sc_logic > grp_fu_483_ce;
    sc_signal< sc_logic > grp_fu_511_ce;
    sc_signal< sc_logic > grp_fu_539_ce;
    sc_signal< sc_logic > grp_fu_567_ce;
    sc_signal< sc_logic > grp_fu_595_ce;
    sc_signal< sc_logic > grp_fu_623_ce;
    sc_signal< sc_logic > grp_fu_651_ce;
    sc_signal< sc_logic > grp_fu_679_ce;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<64> > bound_fu_193_p00;
    sc_signal< sc_lv<64> > bound_fu_193_p10;
    sc_signal< sc_lv<32> > grp_fu_259_p00;
    sc_signal< sc_lv<32> > grp_fu_287_p00;
    sc_signal< sc_lv<32> > grp_fu_315_p00;
    sc_signal< sc_lv<32> > grp_fu_343_p00;
    sc_signal< sc_lv<32> > grp_fu_371_p00;
    sc_signal< sc_lv<32> > grp_fu_399_p00;
    sc_signal< sc_lv<32> > grp_fu_427_p00;
    sc_signal< sc_lv<32> > grp_fu_455_p00;
    sc_signal< sc_lv<32> > grp_fu_483_p00;
    sc_signal< sc_lv<32> > grp_fu_511_p00;
    sc_signal< sc_lv<32> > grp_fu_539_p00;
    sc_signal< sc_lv<32> > grp_fu_567_p00;
    sc_signal< sc_lv<32> > grp_fu_595_p00;
    sc_signal< sc_lv<32> > grp_fu_623_p00;
    sc_signal< sc_lv<32> > grp_fu_651_p00;
    sc_signal< sc_lv<32> > grp_fu_679_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state36;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_6F;
    static const sc_lv<32> ap_const_lv32_70;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_8F;
    static const sc_lv<32> ap_const_lv32_90;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<32> ap_const_lv32_A0;
    static const sc_lv<32> ap_const_lv32_AF;
    static const sc_lv<32> ap_const_lv32_B0;
    static const sc_lv<32> ap_const_lv32_BF;
    static const sc_lv<32> ap_const_lv32_C0;
    static const sc_lv<32> ap_const_lv32_CF;
    static const sc_lv<32> ap_const_lv32_D0;
    static const sc_lv<32> ap_const_lv32_DF;
    static const sc_lv<32> ap_const_lv32_E0;
    static const sc_lv<32> ap_const_lv32_EF;
    static const sc_lv<32> ap_const_lv32_F0;
    static const sc_lv<32> ap_const_lv32_FF;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<24> ap_const_lv24_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state36();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter7();
    void thread_ap_block_state11_pp0_stage0_iter8();
    void thread_ap_block_state12_pp0_stage0_iter9();
    void thread_ap_block_state13_pp0_stage0_iter10();
    void thread_ap_block_state14_pp0_stage0_iter11();
    void thread_ap_block_state15_pp0_stage0_iter12();
    void thread_ap_block_state16_pp0_stage0_iter13();
    void thread_ap_block_state17_pp0_stage0_iter14();
    void thread_ap_block_state18_pp0_stage0_iter15();
    void thread_ap_block_state19_pp0_stage0_iter16();
    void thread_ap_block_state20_pp0_stage0_iter17();
    void thread_ap_block_state21_pp0_stage0_iter18();
    void thread_ap_block_state22_pp0_stage0_iter19();
    void thread_ap_block_state23_pp0_stage0_iter20();
    void thread_ap_block_state24_pp0_stage0_iter21();
    void thread_ap_block_state25_pp0_stage0_iter22();
    void thread_ap_block_state26_pp0_stage0_iter23();
    void thread_ap_block_state27_pp0_stage0_iter24();
    void thread_ap_block_state28_pp0_stage0_iter25();
    void thread_ap_block_state29_pp0_stage0_iter26();
    void thread_ap_block_state30_pp0_stage0_iter27();
    void thread_ap_block_state31_pp0_stage0_iter28();
    void thread_ap_block_state32_pp0_stage0_iter29();
    void thread_ap_block_state33_pp0_stage0_iter30();
    void thread_ap_block_state34_pp0_stage0_iter31();
    void thread_ap_block_state35_pp0_stage0_iter32();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state6_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter4();
    void thread_ap_block_state8_pp0_stage0_iter5();
    void thread_ap_block_state9_pp0_stage0_iter6();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_bound_fu_193_p0();
    void thread_bound_fu_193_p00();
    void thread_bound_fu_193_p1();
    void thread_bound_fu_193_p10();
    void thread_bound_fu_193_p2();
    void thread_exitcond_flatten_fu_199_p2();
    void thread_exitcond_i2_fu_210_p2();
    void thread_grp_fu_259_ce();
    void thread_grp_fu_259_p0();
    void thread_grp_fu_259_p00();
    void thread_grp_fu_287_ce();
    void thread_grp_fu_287_p0();
    void thread_grp_fu_287_p00();
    void thread_grp_fu_315_ce();
    void thread_grp_fu_315_p0();
    void thread_grp_fu_315_p00();
    void thread_grp_fu_343_ce();
    void thread_grp_fu_343_p0();
    void thread_grp_fu_343_p00();
    void thread_grp_fu_371_ce();
    void thread_grp_fu_371_p0();
    void thread_grp_fu_371_p00();
    void thread_grp_fu_399_ce();
    void thread_grp_fu_399_p0();
    void thread_grp_fu_399_p00();
    void thread_grp_fu_427_ce();
    void thread_grp_fu_427_p0();
    void thread_grp_fu_427_p00();
    void thread_grp_fu_455_ce();
    void thread_grp_fu_455_p0();
    void thread_grp_fu_455_p00();
    void thread_grp_fu_483_ce();
    void thread_grp_fu_483_p0();
    void thread_grp_fu_483_p00();
    void thread_grp_fu_511_ce();
    void thread_grp_fu_511_p0();
    void thread_grp_fu_511_p00();
    void thread_grp_fu_539_ce();
    void thread_grp_fu_539_p0();
    void thread_grp_fu_539_p00();
    void thread_grp_fu_567_ce();
    void thread_grp_fu_567_p0();
    void thread_grp_fu_567_p00();
    void thread_grp_fu_595_ce();
    void thread_grp_fu_595_p0();
    void thread_grp_fu_595_p00();
    void thread_grp_fu_623_ce();
    void thread_grp_fu_623_p0();
    void thread_grp_fu_623_p00();
    void thread_grp_fu_651_ce();
    void thread_grp_fu_651_p0();
    void thread_grp_fu_651_p00();
    void thread_grp_fu_679_ce();
    void thread_grp_fu_679_p0();
    void thread_grp_fu_679_p00();
    void thread_in_proc_2_V_V_blk_n();
    void thread_in_proc_2_V_V_read();
    void thread_in_proc_2_iter_c_V_V_blk_n();
    void thread_in_proc_2_iter_c_V_V_read();
    void thread_in_proc_2_iter_r_V_V_blk_n();
    void thread_in_proc_2_iter_r_V_V_read();
    void thread_in_write_V_V_blk_n();
    void thread_in_write_V_V_din();
    void thread_in_write_V_V_write();
    void thread_in_write_iter_c_V_V_blk_n();
    void thread_in_write_iter_c_V_V_din();
    void thread_in_write_iter_c_V_V_write();
    void thread_indvar_flatten_next_fu_204_p2();
    void thread_iter_fu_229_p2();
    void thread_iter_i_mid2_fu_215_p3();
    void thread_p_Result_13_10_i_fu_993_p4();
    void thread_p_Result_13_11_i_fu_1021_p4();
    void thread_p_Result_13_12_i_fu_1049_p4();
    void thread_p_Result_13_13_i_fu_1077_p4();
    void thread_p_Result_13_14_i_fu_1105_p4();
    void thread_p_Result_13_1_i_fu_713_p4();
    void thread_p_Result_13_2_i_fu_741_p4();
    void thread_p_Result_13_3_i_fu_769_p4();
    void thread_p_Result_13_4_i_fu_797_p4();
    void thread_p_Result_13_5_i_fu_825_p4();
    void thread_p_Result_13_6_i_fu_853_p4();
    void thread_p_Result_13_7_i_fu_881_p4();
    void thread_p_Result_13_8_i_fu_909_p4();
    void thread_p_Result_13_9_i_fu_937_p4();
    void thread_p_Result_13_i_32_fu_965_p4();
    void thread_p_Result_13_i_fu_685_p4();
    void thread_read_V_10_i_fu_555_p3();
    void thread_read_V_11_i_fu_583_p3();
    void thread_read_V_12_i_fu_611_p3();
    void thread_read_V_13_i_fu_639_p3();
    void thread_read_V_14_i_fu_667_p3();
    void thread_read_V_1_i_fu_275_p3();
    void thread_read_V_2_i_fu_303_p3();
    void thread_read_V_3_i_fu_331_p3();
    void thread_read_V_4_i_fu_359_p3();
    void thread_read_V_5_i_fu_387_p3();
    void thread_read_V_6_i_fu_415_p3();
    void thread_read_V_7_i_fu_443_p3();
    void thread_read_V_8_i_fu_471_p3();
    void thread_read_V_9_i_fu_499_p3();
    void thread_read_V_i_29_fu_527_p3();
    void thread_read_V_i_fu_247_p3();
    void thread_sum_V_V_blk_n();
    void thread_sum_V_V_read();
    void thread_tmp_10_fu_461_p4();
    void thread_tmp_11_fu_489_p4();
    void thread_tmp_12_fu_517_p4();
    void thread_tmp_13_fu_545_p4();
    void thread_tmp_14_fu_573_p4();
    void thread_tmp_15_fu_629_p4();
    void thread_tmp_16_fu_657_p4();
    void thread_tmp_18_fu_701_p1();
    void thread_tmp_19_fu_729_p1();
    void thread_tmp_20_fu_757_p1();
    void thread_tmp_21_fu_785_p1();
    void thread_tmp_22_10_i_fu_1003_p2();
    void thread_tmp_22_11_i_fu_1031_p2();
    void thread_tmp_22_12_i_fu_1059_p2();
    void thread_tmp_22_13_i_fu_1087_p2();
    void thread_tmp_22_14_i_fu_1115_p2();
    void thread_tmp_22_1_i_fu_723_p2();
    void thread_tmp_22_2_i_fu_751_p2();
    void thread_tmp_22_3_i_fu_779_p2();
    void thread_tmp_22_4_i_fu_807_p2();
    void thread_tmp_22_5_i_fu_835_p2();
    void thread_tmp_22_6_i_fu_863_p2();
    void thread_tmp_22_7_i_fu_891_p2();
    void thread_tmp_22_8_i_fu_919_p2();
    void thread_tmp_22_9_i_fu_947_p2();
    void thread_tmp_22_fu_813_p1();
    void thread_tmp_22_i_33_fu_975_p2();
    void thread_tmp_22_i_fu_695_p2();
    void thread_tmp_23_fu_841_p1();
    void thread_tmp_24_fu_869_p1();
    void thread_tmp_25_fu_897_p1();
    void thread_tmp_26_fu_925_p1();
    void thread_tmp_27_fu_953_p1();
    void thread_tmp_28_fu_981_p1();
    void thread_tmp_29_fu_1009_p1();
    void thread_tmp_30_fu_1037_p1();
    void thread_tmp_31_fu_1065_p1();
    void thread_tmp_32_fu_1093_p1();
    void thread_tmp_33_fu_1121_p1();
    void thread_tmp_3_fu_265_p4();
    void thread_tmp_4_fu_293_p4();
    void thread_tmp_5_fu_321_p4();
    void thread_tmp_6_fu_349_p4();
    void thread_tmp_7_fu_377_p4();
    void thread_tmp_8_fu_405_p4();
    void thread_tmp_9_fu_433_p4();
    void thread_tmp_V_24_0_trunc_i_fu_705_p3();
    void thread_tmp_V_24_10_trunc_i_fu_985_p3();
    void thread_tmp_V_24_11_trunc_i_fu_1013_p3();
    void thread_tmp_V_24_12_trunc_i_fu_1041_p3();
    void thread_tmp_V_24_13_trunc_i_fu_1069_p3();
    void thread_tmp_V_24_14_trunc_i_fu_1097_p3();
    void thread_tmp_V_24_15_trunc_i_fu_1125_p3();
    void thread_tmp_V_24_1_trunc_i_fu_733_p3();
    void thread_tmp_V_24_2_trunc_i_fu_761_p3();
    void thread_tmp_V_24_3_trunc_i_fu_789_p3();
    void thread_tmp_V_24_4_trunc_i_fu_817_p3();
    void thread_tmp_V_24_5_trunc_i_fu_845_p3();
    void thread_tmp_V_24_6_trunc_i_fu_873_p3();
    void thread_tmp_V_24_7_trunc_i_fu_901_p3();
    void thread_tmp_V_24_8_trunc_i_fu_929_p3();
    void thread_tmp_V_24_9_trunc_i_fu_957_p3();
    void thread_tmp_fu_243_p1();
    void thread_tmp_i_fu_223_p2();
    void thread_tmp_s_fu_601_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
