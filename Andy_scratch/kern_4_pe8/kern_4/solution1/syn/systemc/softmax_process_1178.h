// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_process_1178_HH_
#define _softmax_process_1178_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct softmax_process_1178 : public sc_module {
    // Port declarations 28
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > in_proc_1_iter_c_V_V_dout;
    sc_in< sc_logic > in_proc_1_iter_c_V_V_empty_n;
    sc_out< sc_logic > in_proc_1_iter_c_V_V_read;
    sc_in< sc_lv<32> > in_proc_1_iter_r_V_V_dout;
    sc_in< sc_logic > in_proc_1_iter_r_V_V_empty_n;
    sc_out< sc_logic > in_proc_1_iter_r_V_V_read;
    sc_out< sc_lv<32> > in_quant_iter_r_V_V_din;
    sc_in< sc_logic > in_quant_iter_r_V_V_full_n;
    sc_out< sc_logic > in_quant_iter_r_V_V_write;
    sc_out< sc_lv<32> > in_quant_iter_c_V_V_din;
    sc_in< sc_logic > in_quant_iter_c_V_V_full_n;
    sc_out< sc_logic > in_quant_iter_c_V_V_write;
    sc_in< sc_lv<32> > in_proc_1_V_V_dout;
    sc_in< sc_logic > in_proc_1_V_V_empty_n;
    sc_out< sc_logic > in_proc_1_V_V_read;
    sc_out< sc_lv<64> > in_quant_V_V_din;
    sc_in< sc_logic > in_quant_V_V_full_n;
    sc_out< sc_logic > in_quant_V_V_write;


    // Module declarations
    softmax_process_1178(sc_module_name name);
    SC_HAS_PROCESS(softmax_process_1178);

    ~softmax_process_1178();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > in_proc_1_iter_c_V_V_blk_n;
    sc_signal< sc_logic > in_proc_1_iter_r_V_V_blk_n;
    sc_signal< sc_logic > in_quant_iter_r_V_V_blk_n;
    sc_signal< sc_logic > in_quant_iter_c_V_V_blk_n;
    sc_signal< sc_logic > in_proc_1_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403;
    sc_signal< sc_logic > in_quant_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403_pp0_iter7_reg;
    sc_signal< sc_lv<64> > indvar_flatten_reg_193;
    sc_signal< sc_lv<32> > tmp_V_96_reg_388;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > tmp_V_reg_393;
    sc_signal< sc_lv<64> > bound_fu_210_p2;
    sc_signal< sc_lv<64> > bound_reg_398;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_216_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter8;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403_pp0_iter1_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403_pp0_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403_pp0_iter3_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403_pp0_iter4_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403_pp0_iter5_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_403_pp0_iter6_reg;
    sc_signal< sc_lv<64> > indvar_flatten_next_fu_221_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > tmp_V_97_reg_412;
    sc_signal< sc_lv<1> > tmp_i_fu_227_p2;
    sc_signal< sc_lv<1> > tmp_i_reg_417;
    sc_signal< sc_lv<32> > p_0126_tmp_V_22_load_s_fu_233_p3;
    sc_signal< sc_lv<32> > p_0126_tmp_V_22_load_s_reg_422;
    sc_signal< sc_lv<32> > p_0126_tmp_V_22_load_s_reg_422_pp0_iter3_reg;
    sc_signal< sc_lv<65> > mul_fu_243_p2;
    sc_signal< sc_lv<65> > mul_reg_427;
    sc_signal< sc_lv<1> > tmp_5_reg_433;
    sc_signal< sc_lv<32> > tmp_22_i_fu_302_p3;
    sc_signal< sc_lv<32> > tmp_22_i_reg_439;
    sc_signal< sc_lv<24> > tmp_8_fu_309_p1;
    sc_signal< sc_lv<24> > tmp_8_reg_444;
    sc_signal< sc_lv<24> > tmp_8_reg_444_pp0_iter4_reg;
    sc_signal< sc_lv<24> > tmp_8_reg_444_pp0_iter5_reg;
    sc_signal< sc_lv<24> > tmp_8_reg_444_pp0_iter6_reg;
    sc_signal< sc_lv<32> > tmp_23_i_fu_318_p2;
    sc_signal< sc_lv<32> > tmp_23_i_reg_449;
    sc_signal< sc_lv<32> > tmp_23_i_reg_449_pp0_iter5_reg;
    sc_signal< sc_lv<33> > tmp_25_i_fu_326_p2;
    sc_signal< sc_lv<33> > tmp_25_i_reg_455;
    sc_signal< sc_lv<64> > tmp_28_i_fu_338_p2;
    sc_signal< sc_lv<64> > tmp_28_i_reg_460;
    sc_signal< sc_lv<63> > tmp_V_98_fu_376_p3;
    sc_signal< sc_lv<63> > tmp_V_98_reg_465;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > bound_fu_210_p0;
    sc_signal< sc_lv<32> > bound_fu_210_p1;
    sc_signal< sc_lv<32> > mul_fu_243_p1;
    sc_signal< sc_lv<65> > neg_mul_fu_257_p2;
    sc_signal< sc_lv<24> > tmp_6_fu_262_p4;
    sc_signal< sc_lv<24> > tmp_7_fu_276_p4;
    sc_signal< sc_lv<32> > tmp_fu_272_p1;
    sc_signal< sc_lv<32> > tmp_2_fu_285_p1;
    sc_signal< sc_lv<32> > tmp_3_fu_289_p3;
    sc_signal< sc_lv<32> > neg_ti_fu_296_p2;
    sc_signal< sc_lv<26> > tmp_10_i_fu_313_p1;
    sc_signal< sc_lv<32> > tmp_10_i_fu_313_p2;
    sc_signal< sc_lv<33> > tmp_24_i_fu_323_p1;
    sc_signal< sc_lv<32> > tmp_28_i_fu_338_p0;
    sc_signal< sc_lv<33> > tmp_28_i_fu_338_p1;
    sc_signal< sc_lv<24> > tmp_32_i_fu_349_p2;
    sc_signal< sc_lv<64> > tmp_30_i_fu_344_p2;
    sc_signal< sc_lv<64> > tmp_37_cast_i_fu_354_p1;
    sc_signal< sc_lv<64> > tmp_38_i_fu_358_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_368_p3;
    sc_signal< sc_lv<63> > tmp_9_fu_364_p1;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<64> > bound_fu_210_p00;
    sc_signal< sc_lv<64> > bound_fu_210_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state12;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_FFFFC694;
    static const sc_lv<65> ap_const_lv65_10B7E6EC3;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<65> ap_const_lv65_0;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_1EA;
    static const sc_lv<33> ap_const_lv33_778;
    static const sc_lv<64> ap_const_lv64_1544FF;
    static const sc_lv<24> ap_const_lv24_1E;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter7();
    void thread_ap_block_state11_pp0_stage0_iter8();
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
    void thread_bound_fu_210_p0();
    void thread_bound_fu_210_p00();
    void thread_bound_fu_210_p1();
    void thread_bound_fu_210_p10();
    void thread_bound_fu_210_p2();
    void thread_exitcond_flatten_fu_216_p2();
    void thread_in_proc_1_V_V_blk_n();
    void thread_in_proc_1_V_V_read();
    void thread_in_proc_1_iter_c_V_V_blk_n();
    void thread_in_proc_1_iter_c_V_V_read();
    void thread_in_proc_1_iter_r_V_V_blk_n();
    void thread_in_proc_1_iter_r_V_V_read();
    void thread_in_quant_V_V_blk_n();
    void thread_in_quant_V_V_din();
    void thread_in_quant_V_V_write();
    void thread_in_quant_iter_c_V_V_blk_n();
    void thread_in_quant_iter_c_V_V_din();
    void thread_in_quant_iter_c_V_V_write();
    void thread_in_quant_iter_r_V_V_blk_n();
    void thread_in_quant_iter_r_V_V_din();
    void thread_in_quant_iter_r_V_V_write();
    void thread_indvar_flatten_next_fu_221_p2();
    void thread_internal_ap_ready();
    void thread_mul_fu_243_p1();
    void thread_mul_fu_243_p2();
    void thread_neg_mul_fu_257_p2();
    void thread_neg_ti_fu_296_p2();
    void thread_p_0126_tmp_V_22_load_s_fu_233_p3();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_10_fu_368_p3();
    void thread_tmp_10_i_fu_313_p1();
    void thread_tmp_10_i_fu_313_p2();
    void thread_tmp_22_i_fu_302_p3();
    void thread_tmp_23_i_fu_318_p2();
    void thread_tmp_24_i_fu_323_p1();
    void thread_tmp_25_i_fu_326_p2();
    void thread_tmp_28_i_fu_338_p0();
    void thread_tmp_28_i_fu_338_p1();
    void thread_tmp_28_i_fu_338_p2();
    void thread_tmp_2_fu_285_p1();
    void thread_tmp_30_i_fu_344_p2();
    void thread_tmp_32_i_fu_349_p2();
    void thread_tmp_37_cast_i_fu_354_p1();
    void thread_tmp_38_i_fu_358_p2();
    void thread_tmp_3_fu_289_p3();
    void thread_tmp_6_fu_262_p4();
    void thread_tmp_7_fu_276_p4();
    void thread_tmp_8_fu_309_p1();
    void thread_tmp_9_fu_364_p1();
    void thread_tmp_V_98_fu_376_p3();
    void thread_tmp_fu_272_p1();
    void thread_tmp_i_fu_227_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
