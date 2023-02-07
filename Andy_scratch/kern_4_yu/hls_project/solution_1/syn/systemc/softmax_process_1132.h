// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_process_1132_HH_
#define _softmax_process_1132_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct softmax_process_1132 : public sc_module {
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
    sc_in< sc_lv<32> > in_iter_r_V_V_dout;
    sc_in< sc_logic > in_iter_r_V_V_empty_n;
    sc_out< sc_logic > in_iter_r_V_V_read;
    sc_in< sc_lv<32> > in_iter_c_V_V_dout;
    sc_in< sc_logic > in_iter_c_V_V_empty_n;
    sc_out< sc_logic > in_iter_c_V_V_read;
    sc_in< sc_lv<64> > in_V_V_dout;
    sc_in< sc_logic > in_V_V_empty_n;
    sc_out< sc_logic > in_V_V_read;
    sc_out< sc_lv<32> > out_iter_r_V_V_din;
    sc_in< sc_logic > out_iter_r_V_V_full_n;
    sc_out< sc_logic > out_iter_r_V_V_write;
    sc_out< sc_lv<32> > out_iter_c_V_V_din;
    sc_in< sc_logic > out_iter_c_V_V_full_n;
    sc_out< sc_logic > out_iter_c_V_V_write;
    sc_out< sc_lv<128> > out_V_V_din;
    sc_in< sc_logic > out_V_V_full_n;
    sc_out< sc_logic > out_V_V_write;


    // Module declarations
    softmax_process_1132(sc_module_name name);
    SC_HAS_PROCESS(softmax_process_1132);

    ~softmax_process_1132();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > in_iter_r_V_V_blk_n;
    sc_signal< sc_logic > in_iter_c_V_V_blk_n;
    sc_signal< sc_logic > in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593;
    sc_signal< sc_logic > out_iter_r_V_V_blk_n;
    sc_signal< sc_logic > out_iter_c_V_V_blk_n;
    sc_signal< sc_logic > out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593_pp0_iter7_reg;
    sc_signal< sc_lv<64> > indvar_flatten_reg_201;
    sc_signal< sc_lv<32> > tmp_V_45_reg_578;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > tmp_V_reg_583;
    sc_signal< sc_lv<64> > bound_fu_218_p2;
    sc_signal< sc_lv<64> > bound_reg_588;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln1778_fu_224_p2;
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
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln1778_reg_593_pp0_iter6_reg;
    sc_signal< sc_lv<64> > add_ln1778_fu_229_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > trunc_ln647_fu_235_p1;
    sc_signal< sc_lv<32> > trunc_ln647_reg_602;
    sc_signal< sc_lv<1> > icmp_ln887_fu_239_p2;
    sc_signal< sc_lv<1> > icmp_ln887_reg_607;
    sc_signal< sc_lv<32> > p_Result_1_fu_245_p4;
    sc_signal< sc_lv<32> > p_Result_1_reg_612;
    sc_signal< sc_lv<1> > icmp_ln887_1_fu_255_p2;
    sc_signal< sc_lv<1> > icmp_ln887_1_reg_617;
    sc_signal< sc_lv<32> > select_ln1792_fu_261_p3;
    sc_signal< sc_lv<32> > select_ln1792_reg_622;
    sc_signal< sc_lv<32> > select_ln1792_reg_622_pp0_iter3_reg;
    sc_signal< sc_lv<65> > mul_ln1371_fu_271_p2;
    sc_signal< sc_lv<65> > mul_ln1371_reg_627;
    sc_signal< sc_lv<1> > tmp_5_reg_633;
    sc_signal< sc_lv<32> > select_ln1792_1_fu_285_p3;
    sc_signal< sc_lv<32> > select_ln1792_1_reg_639;
    sc_signal< sc_lv<32> > select_ln1792_1_reg_639_pp0_iter3_reg;
    sc_signal< sc_lv<65> > mul_ln1371_1_fu_295_p2;
    sc_signal< sc_lv<65> > mul_ln1371_1_reg_644;
    sc_signal< sc_lv<1> > tmp_9_reg_650;
    sc_signal< sc_lv<32> > select_ln1371_1_fu_354_p3;
    sc_signal< sc_lv<32> > select_ln1371_1_reg_656;
    sc_signal< sc_lv<24> > trunc_ln68_fu_361_p1;
    sc_signal< sc_lv<24> > trunc_ln68_reg_661;
    sc_signal< sc_lv<24> > trunc_ln68_reg_661_pp0_iter4_reg;
    sc_signal< sc_lv<24> > trunc_ln68_reg_661_pp0_iter5_reg;
    sc_signal< sc_lv<24> > trunc_ln68_reg_661_pp0_iter6_reg;
    sc_signal< sc_lv<32> > select_ln1371_3_fu_410_p3;
    sc_signal< sc_lv<32> > select_ln1371_3_reg_666;
    sc_signal< sc_lv<24> > trunc_ln68_2_fu_417_p1;
    sc_signal< sc_lv<24> > trunc_ln68_2_reg_671;
    sc_signal< sc_lv<24> > trunc_ln68_2_reg_671_pp0_iter4_reg;
    sc_signal< sc_lv<24> > trunc_ln68_2_reg_671_pp0_iter5_reg;
    sc_signal< sc_lv<24> > trunc_ln68_2_reg_671_pp0_iter6_reg;
    sc_signal< sc_lv<32> > add_ln68_fu_426_p2;
    sc_signal< sc_lv<32> > add_ln68_reg_676;
    sc_signal< sc_lv<32> > add_ln68_reg_676_pp0_iter5_reg;
    sc_signal< sc_lv<32> > add_ln68_1_fu_436_p2;
    sc_signal< sc_lv<32> > add_ln68_1_reg_682;
    sc_signal< sc_lv<32> > add_ln68_1_reg_682_pp0_iter5_reg;
    sc_signal< sc_lv<33> > add_ln1353_fu_444_p2;
    sc_signal< sc_lv<33> > add_ln1353_reg_688;
    sc_signal< sc_lv<33> > add_ln1353_2_fu_453_p2;
    sc_signal< sc_lv<33> > add_ln1353_2_reg_693;
    sc_signal< sc_lv<64> > mul_ln1352_fu_465_p2;
    sc_signal< sc_lv<64> > mul_ln1352_reg_698;
    sc_signal< sc_lv<64> > mul_ln1352_1_fu_477_p2;
    sc_signal< sc_lv<64> > mul_ln1352_1_reg_703;
    sc_signal< sc_lv<63> > select_ln1803_fu_515_p3;
    sc_signal< sc_lv<63> > select_ln1803_reg_708;
    sc_signal< sc_lv<63> > select_ln1803_1_fu_555_p3;
    sc_signal< sc_lv<63> > select_ln1803_1_reg_713;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > bound_fu_218_p0;
    sc_signal< sc_lv<32> > bound_fu_218_p1;
    sc_signal< sc_lv<32> > mul_ln1371_fu_271_p1;
    sc_signal< sc_lv<32> > mul_ln1371_1_fu_295_p1;
    sc_signal< sc_lv<65> > sub_ln1371_fu_309_p2;
    sc_signal< sc_lv<24> > tmp_6_fu_314_p4;
    sc_signal< sc_lv<24> > tmp_fu_328_p4;
    sc_signal< sc_lv<32> > sext_ln1371_1_fu_324_p1;
    sc_signal< sc_lv<32> > sext_ln1371_2_fu_337_p1;
    sc_signal< sc_lv<32> > select_ln1371_fu_341_p3;
    sc_signal< sc_lv<32> > sub_ln1371_1_fu_348_p2;
    sc_signal< sc_lv<65> > sub_ln1371_2_fu_365_p2;
    sc_signal< sc_lv<24> > tmp_12_fu_370_p4;
    sc_signal< sc_lv<24> > tmp_13_fu_384_p4;
    sc_signal< sc_lv<32> > sext_ln1371_4_fu_380_p1;
    sc_signal< sc_lv<32> > sext_ln1371_5_fu_393_p1;
    sc_signal< sc_lv<32> > select_ln1371_2_fu_397_p3;
    sc_signal< sc_lv<32> > sub_ln1371_3_fu_404_p2;
    sc_signal< sc_lv<26> > mul_ln68_fu_421_p1;
    sc_signal< sc_lv<32> > mul_ln68_fu_421_p2;
    sc_signal< sc_lv<26> > mul_ln68_1_fu_431_p1;
    sc_signal< sc_lv<32> > mul_ln68_1_fu_431_p2;
    sc_signal< sc_lv<33> > sext_ln215_fu_441_p1;
    sc_signal< sc_lv<33> > sext_ln215_2_fu_450_p1;
    sc_signal< sc_lv<32> > mul_ln1352_fu_465_p0;
    sc_signal< sc_lv<33> > mul_ln1352_fu_465_p1;
    sc_signal< sc_lv<32> > mul_ln1352_1_fu_477_p0;
    sc_signal< sc_lv<33> > mul_ln1352_1_fu_477_p1;
    sc_signal< sc_lv<24> > sub_ln461_fu_488_p2;
    sc_signal< sc_lv<64> > add_ln1353_1_fu_483_p2;
    sc_signal< sc_lv<64> > zext_ln790_fu_493_p1;
    sc_signal< sc_lv<64> > shl_ln790_fu_497_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_507_p3;
    sc_signal< sc_lv<63> > trunc_ln887_fu_503_p1;
    sc_signal< sc_lv<24> > sub_ln461_1_fu_528_p2;
    sc_signal< sc_lv<64> > add_ln1353_3_fu_523_p2;
    sc_signal< sc_lv<64> > zext_ln790_1_fu_533_p1;
    sc_signal< sc_lv<64> > shl_ln790_1_fu_537_p2;
    sc_signal< sc_lv<1> > tmp_14_fu_547_p3;
    sc_signal< sc_lv<63> > trunc_ln887_1_fu_543_p1;
    sc_signal< sc_lv<64> > zext_ln1803_fu_563_p1;
    sc_signal< sc_lv<127> > tmp_1_fu_566_p3;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<64> > bound_fu_218_p00;
    sc_signal< sc_lv<64> > bound_fu_218_p10;
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
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<65> ap_const_lv65_10B7E6EC3;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<65> ap_const_lv65_0;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_1EA;
    static const sc_lv<33> ap_const_lv33_778;
    static const sc_lv<64> ap_const_lv64_1544FF;
    static const sc_lv<24> ap_const_lv24_1E;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln1353_1_fu_483_p2();
    void thread_add_ln1353_2_fu_453_p2();
    void thread_add_ln1353_3_fu_523_p2();
    void thread_add_ln1353_fu_444_p2();
    void thread_add_ln1778_fu_229_p2();
    void thread_add_ln68_1_fu_436_p2();
    void thread_add_ln68_fu_426_p2();
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
    void thread_bound_fu_218_p0();
    void thread_bound_fu_218_p00();
    void thread_bound_fu_218_p1();
    void thread_bound_fu_218_p10();
    void thread_bound_fu_218_p2();
    void thread_icmp_ln1778_fu_224_p2();
    void thread_icmp_ln887_1_fu_255_p2();
    void thread_icmp_ln887_fu_239_p2();
    void thread_in_V_V_blk_n();
    void thread_in_V_V_read();
    void thread_in_iter_c_V_V_blk_n();
    void thread_in_iter_c_V_V_read();
    void thread_in_iter_r_V_V_blk_n();
    void thread_in_iter_r_V_V_read();
    void thread_internal_ap_ready();
    void thread_mul_ln1352_1_fu_477_p0();
    void thread_mul_ln1352_1_fu_477_p1();
    void thread_mul_ln1352_1_fu_477_p2();
    void thread_mul_ln1352_fu_465_p0();
    void thread_mul_ln1352_fu_465_p1();
    void thread_mul_ln1352_fu_465_p2();
    void thread_mul_ln1371_1_fu_295_p1();
    void thread_mul_ln1371_1_fu_295_p2();
    void thread_mul_ln1371_fu_271_p1();
    void thread_mul_ln1371_fu_271_p2();
    void thread_mul_ln68_1_fu_431_p1();
    void thread_mul_ln68_1_fu_431_p2();
    void thread_mul_ln68_fu_421_p1();
    void thread_mul_ln68_fu_421_p2();
    void thread_out_V_V_blk_n();
    void thread_out_V_V_din();
    void thread_out_V_V_write();
    void thread_out_iter_c_V_V_blk_n();
    void thread_out_iter_c_V_V_din();
    void thread_out_iter_c_V_V_write();
    void thread_out_iter_r_V_V_blk_n();
    void thread_out_iter_r_V_V_din();
    void thread_out_iter_r_V_V_write();
    void thread_p_Result_1_fu_245_p4();
    void thread_real_start();
    void thread_select_ln1371_1_fu_354_p3();
    void thread_select_ln1371_2_fu_397_p3();
    void thread_select_ln1371_3_fu_410_p3();
    void thread_select_ln1371_fu_341_p3();
    void thread_select_ln1792_1_fu_285_p3();
    void thread_select_ln1792_fu_261_p3();
    void thread_select_ln1803_1_fu_555_p3();
    void thread_select_ln1803_fu_515_p3();
    void thread_sext_ln1371_1_fu_324_p1();
    void thread_sext_ln1371_2_fu_337_p1();
    void thread_sext_ln1371_4_fu_380_p1();
    void thread_sext_ln1371_5_fu_393_p1();
    void thread_sext_ln215_2_fu_450_p1();
    void thread_sext_ln215_fu_441_p1();
    void thread_shl_ln790_1_fu_537_p2();
    void thread_shl_ln790_fu_497_p2();
    void thread_start_out();
    void thread_start_write();
    void thread_sub_ln1371_1_fu_348_p2();
    void thread_sub_ln1371_2_fu_365_p2();
    void thread_sub_ln1371_3_fu_404_p2();
    void thread_sub_ln1371_fu_309_p2();
    void thread_sub_ln461_1_fu_528_p2();
    void thread_sub_ln461_fu_488_p2();
    void thread_tmp_12_fu_370_p4();
    void thread_tmp_13_fu_384_p4();
    void thread_tmp_14_fu_547_p3();
    void thread_tmp_1_fu_566_p3();
    void thread_tmp_6_fu_314_p4();
    void thread_tmp_8_fu_507_p3();
    void thread_tmp_fu_328_p4();
    void thread_trunc_ln647_fu_235_p1();
    void thread_trunc_ln68_2_fu_417_p1();
    void thread_trunc_ln68_fu_361_p1();
    void thread_trunc_ln887_1_fu_543_p1();
    void thread_trunc_ln887_fu_503_p1();
    void thread_zext_ln1803_fu_563_p1();
    void thread_zext_ln790_1_fu_533_p1();
    void thread_zext_ln790_fu_493_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
