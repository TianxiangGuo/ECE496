// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AttentionMatmulQuant_HH_
#define _AttentionMatmulQuant_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct AttentionMatmulQuant : public sc_module {
    // Port declarations 40
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
    sc_in< sc_lv<512> > in_V_data_V1_dout;
    sc_in< sc_logic > in_V_data_V1_empty_n;
    sc_out< sc_logic > in_V_data_V1_read;
    sc_in< sc_lv<8> > in_V_id_V2_dout;
    sc_in< sc_logic > in_V_id_V2_empty_n;
    sc_out< sc_logic > in_V_id_V2_read;
    sc_in< sc_lv<8> > in_V_dest_V3_dout;
    sc_in< sc_logic > in_V_dest_V3_empty_n;
    sc_out< sc_logic > in_V_dest_V3_read;
    sc_in< sc_lv<16> > in_V_user_V4_dout;
    sc_in< sc_logic > in_V_user_V4_empty_n;
    sc_out< sc_logic > in_V_user_V4_read;
    sc_in< sc_lv<1> > in_V_last_V5_dout;
    sc_in< sc_logic > in_V_last_V5_empty_n;
    sc_out< sc_logic > in_V_last_V5_read;
    sc_out< sc_lv<512> > out_V_data_V_din;
    sc_in< sc_logic > out_V_data_V_full_n;
    sc_out< sc_logic > out_V_data_V_write;
    sc_out< sc_lv<8> > out_V_id_V_din;
    sc_in< sc_logic > out_V_id_V_full_n;
    sc_out< sc_logic > out_V_id_V_write;
    sc_out< sc_lv<8> > out_V_dest_V_din;
    sc_in< sc_logic > out_V_dest_V_full_n;
    sc_out< sc_logic > out_V_dest_V_write;
    sc_out< sc_lv<16> > out_V_user_V_din;
    sc_in< sc_logic > out_V_user_V_full_n;
    sc_out< sc_logic > out_V_user_V_write;
    sc_out< sc_lv<1> > out_V_last_V_din;
    sc_in< sc_logic > out_V_last_V_full_n;
    sc_out< sc_logic > out_V_last_V_write;


    // Module declarations
    AttentionMatmulQuant(sc_module_name name);
    SC_HAS_PROCESS(AttentionMatmulQuant);

    ~AttentionMatmulQuant();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > in_V_data_V1_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln841_reg_512;
    sc_signal< sc_logic > in_V_id_V2_blk_n;
    sc_signal< sc_logic > in_V_dest_V3_blk_n;
    sc_signal< sc_logic > in_V_user_V4_blk_n;
    sc_signal< sc_logic > in_V_last_V5_blk_n;
    sc_signal< sc_logic > out_V_data_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > out_V_id_V_blk_n;
    sc_signal< sc_logic > out_V_dest_V_blk_n;
    sc_signal< sc_logic > out_V_user_V_blk_n;
    sc_signal< sc_logic > out_V_last_V_blk_n;
    sc_signal< sc_lv<32> > i_0_reg_246;
    sc_signal< sc_lv<512> > tmp_data_V_9_reg_454;
    sc_signal< sc_logic > io_acc_block_signal_op10;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<8> > tmp_id_V_2_reg_459;
    sc_signal< sc_lv<8> > tmp_dest_V_2_reg_464;
    sc_signal< sc_lv<16> > tmp_user_V_4_reg_469;
    sc_signal< sc_lv<1> > tmp_last_V_2_reg_474;
    sc_signal< sc_lv<32> > Nc_2_fu_302_p1;
    sc_signal< sc_lv<32> > Nc_2_reg_479;
    sc_signal< sc_lv<1> > icmp_ln821_fu_320_p2;
    sc_signal< sc_lv<1> > icmp_ln821_reg_487;
    sc_signal< sc_lv<1> > icmp_ln824_fu_326_p2;
    sc_signal< sc_lv<1> > icmp_ln824_reg_493;
    sc_signal< sc_lv<32> > select_ln824_fu_372_p3;
    sc_signal< sc_lv<32> > select_ln824_reg_498;
    sc_signal< sc_logic > io_acc_block_signal_op44;
    sc_signal< sc_lv<1> > icmp_ln836_fu_398_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< sc_logic > io_acc_block_signal_op60;
    sc_signal< sc_logic > io_acc_block_signal_op62;
    sc_signal< sc_logic > io_acc_block_signal_op68;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > i_fu_403_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > icmp_ln841_fu_409_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_lv<8> > tmp_id_V_fu_196;
    sc_signal< sc_lv<8> > tmp_dest_V_fu_200;
    sc_signal< sc_lv<16> > tmp_user_V_fu_204;
    sc_signal< sc_lv<1> > tmp_last_V_fu_208;
    sc_signal< sc_lv<512> > p_Result_s_fu_386_p5;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<28> > tmp_16_fu_310_p4;
    sc_signal< sc_lv<4> > trunc_ln825_fu_306_p1;
    sc_signal< sc_lv<32> > add_ln827_fu_332_p2;
    sc_signal< sc_lv<28> > tmp_1_fu_337_p4;
    sc_signal< sc_lv<32> > Nc_fu_347_p3;
    sc_signal< sc_lv<1> > xor_ln821_fu_362_p2;
    sc_signal< sc_lv<1> > and_ln824_fu_367_p2;
    sc_signal< sc_lv<32> > select_ln821_fu_355_p3;
    sc_signal< sc_lv<64> > tmp_fu_379_p3;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state5;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<512> ap_const_lv512_lc_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<28> ap_const_lv28_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_Nc_2_fu_302_p1();
    void thread_Nc_fu_347_p3();
    void thread_add_ln827_fu_332_p2();
    void thread_and_ln824_fu_367_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_i_fu_403_p2();
    void thread_icmp_ln821_fu_320_p2();
    void thread_icmp_ln824_fu_326_p2();
    void thread_icmp_ln836_fu_398_p2();
    void thread_icmp_ln841_fu_409_p2();
    void thread_in_V_data_V1_blk_n();
    void thread_in_V_data_V1_read();
    void thread_in_V_dest_V3_blk_n();
    void thread_in_V_dest_V3_read();
    void thread_in_V_id_V2_blk_n();
    void thread_in_V_id_V2_read();
    void thread_in_V_last_V5_blk_n();
    void thread_in_V_last_V5_read();
    void thread_in_V_user_V4_blk_n();
    void thread_in_V_user_V4_read();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op10();
    void thread_io_acc_block_signal_op44();
    void thread_io_acc_block_signal_op60();
    void thread_io_acc_block_signal_op62();
    void thread_io_acc_block_signal_op68();
    void thread_out_V_data_V_blk_n();
    void thread_out_V_data_V_din();
    void thread_out_V_data_V_write();
    void thread_out_V_dest_V_blk_n();
    void thread_out_V_dest_V_din();
    void thread_out_V_dest_V_write();
    void thread_out_V_id_V_blk_n();
    void thread_out_V_id_V_din();
    void thread_out_V_id_V_write();
    void thread_out_V_last_V_blk_n();
    void thread_out_V_last_V_din();
    void thread_out_V_last_V_write();
    void thread_out_V_user_V_blk_n();
    void thread_out_V_user_V_din();
    void thread_out_V_user_V_write();
    void thread_p_Result_s_fu_386_p5();
    void thread_real_start();
    void thread_select_ln821_fu_355_p3();
    void thread_select_ln824_fu_372_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_16_fu_310_p4();
    void thread_tmp_1_fu_337_p4();
    void thread_tmp_fu_379_p3();
    void thread_trunc_ln825_fu_306_p1();
    void thread_xor_ln821_fu_362_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
