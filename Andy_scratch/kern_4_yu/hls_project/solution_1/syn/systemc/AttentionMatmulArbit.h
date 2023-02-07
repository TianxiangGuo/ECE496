// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AttentionMatmulArbit_HH_
#define _AttentionMatmulArbit_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct AttentionMatmulArbit : public sc_module {
    // Port declarations 47
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
    sc_in< sc_lv<512> > in_r_TDATA;
    sc_in< sc_logic > in_r_TVALID;
    sc_out< sc_logic > in_r_TREADY;
    sc_in< sc_lv<8> > in_r_TID;
    sc_in< sc_lv<8> > in_r_TDEST;
    sc_in< sc_lv<16> > in_r_TUSER;
    sc_in< sc_lv<1> > in_r_TLAST;
    sc_out< sc_lv<512> > out_0_V_data_V_din;
    sc_in< sc_logic > out_0_V_data_V_full_n;
    sc_out< sc_logic > out_0_V_data_V_write;
    sc_out< sc_lv<512> > out_1_V_data_V_din;
    sc_in< sc_logic > out_1_V_data_V_full_n;
    sc_out< sc_logic > out_1_V_data_V_write;
    sc_out< sc_lv<8> > out_0_V_id_V_din;
    sc_in< sc_logic > out_0_V_id_V_full_n;
    sc_out< sc_logic > out_0_V_id_V_write;
    sc_out< sc_lv<8> > out_1_V_id_V_din;
    sc_in< sc_logic > out_1_V_id_V_full_n;
    sc_out< sc_logic > out_1_V_id_V_write;
    sc_out< sc_lv<8> > out_0_V_dest_V_din;
    sc_in< sc_logic > out_0_V_dest_V_full_n;
    sc_out< sc_logic > out_0_V_dest_V_write;
    sc_out< sc_lv<8> > out_1_V_dest_V_din;
    sc_in< sc_logic > out_1_V_dest_V_full_n;
    sc_out< sc_logic > out_1_V_dest_V_write;
    sc_out< sc_lv<16> > out_0_V_user_V_din;
    sc_in< sc_logic > out_0_V_user_V_full_n;
    sc_out< sc_logic > out_0_V_user_V_write;
    sc_out< sc_lv<16> > out_1_V_user_V_din;
    sc_in< sc_logic > out_1_V_user_V_full_n;
    sc_out< sc_logic > out_1_V_user_V_write;
    sc_out< sc_lv<1> > out_0_V_last_V_din;
    sc_in< sc_logic > out_0_V_last_V_full_n;
    sc_out< sc_logic > out_0_V_last_V_write;
    sc_out< sc_lv<1> > out_1_V_last_V_din;
    sc_in< sc_logic > out_1_V_last_V_full_n;
    sc_out< sc_logic > out_1_V_last_V_write;


    // Module declarations
    AttentionMatmulArbit(sc_module_name name);
    SC_HAS_PROCESS(AttentionMatmulArbit);

    ~AttentionMatmulArbit();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<512> > in_V_data_V_0_data_out;
    sc_signal< sc_logic > in_V_data_V_0_vld_in;
    sc_signal< sc_logic > in_V_data_V_0_vld_out;
    sc_signal< sc_logic > in_V_data_V_0_ack_in;
    sc_signal< sc_logic > in_V_data_V_0_ack_out;
    sc_signal< sc_lv<512> > in_V_data_V_0_payload_A;
    sc_signal< sc_lv<512> > in_V_data_V_0_payload_B;
    sc_signal< sc_logic > in_V_data_V_0_sel_rd;
    sc_signal< sc_logic > in_V_data_V_0_sel_wr;
    sc_signal< sc_logic > in_V_data_V_0_sel;
    sc_signal< sc_logic > in_V_data_V_0_load_A;
    sc_signal< sc_logic > in_V_data_V_0_load_B;
    sc_signal< sc_lv<2> > in_V_data_V_0_state;
    sc_signal< sc_logic > in_V_data_V_0_state_cmp_full;
    sc_signal< sc_lv<8> > in_V_id_V_0_data_out;
    sc_signal< sc_logic > in_V_id_V_0_vld_in;
    sc_signal< sc_logic > in_V_id_V_0_vld_out;
    sc_signal< sc_logic > in_V_id_V_0_ack_in;
    sc_signal< sc_logic > in_V_id_V_0_ack_out;
    sc_signal< sc_lv<8> > in_V_id_V_0_payload_A;
    sc_signal< sc_lv<8> > in_V_id_V_0_payload_B;
    sc_signal< sc_logic > in_V_id_V_0_sel_rd;
    sc_signal< sc_logic > in_V_id_V_0_sel_wr;
    sc_signal< sc_logic > in_V_id_V_0_sel;
    sc_signal< sc_logic > in_V_id_V_0_load_A;
    sc_signal< sc_logic > in_V_id_V_0_load_B;
    sc_signal< sc_lv<2> > in_V_id_V_0_state;
    sc_signal< sc_logic > in_V_id_V_0_state_cmp_full;
    sc_signal< sc_lv<8> > in_V_dest_V_0_data_out;
    sc_signal< sc_logic > in_V_dest_V_0_vld_in;
    sc_signal< sc_logic > in_V_dest_V_0_vld_out;
    sc_signal< sc_logic > in_V_dest_V_0_ack_in;
    sc_signal< sc_logic > in_V_dest_V_0_ack_out;
    sc_signal< sc_lv<8> > in_V_dest_V_0_payload_A;
    sc_signal< sc_lv<8> > in_V_dest_V_0_payload_B;
    sc_signal< sc_logic > in_V_dest_V_0_sel_rd;
    sc_signal< sc_logic > in_V_dest_V_0_sel_wr;
    sc_signal< sc_logic > in_V_dest_V_0_sel;
    sc_signal< sc_logic > in_V_dest_V_0_load_A;
    sc_signal< sc_logic > in_V_dest_V_0_load_B;
    sc_signal< sc_lv<2> > in_V_dest_V_0_state;
    sc_signal< sc_logic > in_V_dest_V_0_state_cmp_full;
    sc_signal< sc_lv<16> > in_V_user_V_0_data_out;
    sc_signal< sc_logic > in_V_user_V_0_vld_in;
    sc_signal< sc_logic > in_V_user_V_0_vld_out;
    sc_signal< sc_logic > in_V_user_V_0_ack_in;
    sc_signal< sc_logic > in_V_user_V_0_ack_out;
    sc_signal< sc_lv<16> > in_V_user_V_0_payload_A;
    sc_signal< sc_lv<16> > in_V_user_V_0_payload_B;
    sc_signal< sc_logic > in_V_user_V_0_sel_rd;
    sc_signal< sc_logic > in_V_user_V_0_sel_wr;
    sc_signal< sc_logic > in_V_user_V_0_sel;
    sc_signal< sc_logic > in_V_user_V_0_load_A;
    sc_signal< sc_logic > in_V_user_V_0_load_B;
    sc_signal< sc_lv<2> > in_V_user_V_0_state;
    sc_signal< sc_logic > in_V_user_V_0_state_cmp_full;
    sc_signal< sc_lv<1> > in_V_last_V_0_data_out;
    sc_signal< sc_logic > in_V_last_V_0_vld_in;
    sc_signal< sc_logic > in_V_last_V_0_vld_out;
    sc_signal< sc_logic > in_V_last_V_0_ack_in;
    sc_signal< sc_logic > in_V_last_V_0_ack_out;
    sc_signal< sc_lv<1> > in_V_last_V_0_payload_A;
    sc_signal< sc_lv<1> > in_V_last_V_0_payload_B;
    sc_signal< sc_logic > in_V_last_V_0_sel_rd;
    sc_signal< sc_logic > in_V_last_V_0_sel_wr;
    sc_signal< sc_logic > in_V_last_V_0_sel;
    sc_signal< sc_logic > in_V_last_V_0_load_A;
    sc_signal< sc_logic > in_V_last_V_0_load_B;
    sc_signal< sc_lv<2> > in_V_last_V_0_state;
    sc_signal< sc_logic > in_V_last_V_0_state_cmp_full;
    sc_signal< sc_logic > in_r_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln796_fu_300_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln802_fu_324_p2;
    sc_signal< sc_logic > out_0_V_data_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<1> > tmp_144_reg_349;
    sc_signal< sc_lv<1> > tmp_144_fu_316_p3;
    sc_signal< sc_logic > out_1_V_data_V_blk_n;
    sc_signal< sc_logic > out_0_V_id_V_blk_n;
    sc_signal< sc_logic > out_1_V_id_V_blk_n;
    sc_signal< sc_logic > out_0_V_dest_V_blk_n;
    sc_signal< sc_logic > out_1_V_dest_V_blk_n;
    sc_signal< sc_logic > out_0_V_user_V_blk_n;
    sc_signal< sc_logic > out_1_V_user_V_blk_n;
    sc_signal< sc_logic > out_0_V_last_V_blk_n;
    sc_signal< sc_logic > out_1_V_last_V_blk_n;
    sc_signal< sc_lv<32> > i_0_reg_259;
    sc_signal< sc_logic > io_acc_block_signal_op32;
    sc_signal< bool > ap_predicate_op32_write_state2;
    sc_signal< sc_logic > io_acc_block_signal_op34;
    sc_signal< bool > ap_predicate_op34_write_state2;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<2> > iter_fu_306_p2;
    sc_signal< sc_lv<2> > iter_reg_339;
    sc_signal< sc_lv<32> > trunc_ln681_fu_312_p1;
    sc_signal< sc_lv<32> > trunc_ln681_reg_344;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< sc_logic > io_acc_block_signal_op52;
    sc_signal< sc_logic > io_acc_block_signal_op54;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > i_fu_329_p2;
    sc_signal< sc_lv<512> > tmp_data_V_10_reg_362;
    sc_signal< sc_lv<8> > tmp_id_V_4_reg_368;
    sc_signal< sc_lv<8> > tmp_dest_V_4_reg_374;
    sc_signal< sc_lv<16> > tmp_user_V_6_reg_380;
    sc_signal< sc_lv<1> > tmp_last_V_4_reg_386;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_lv<2> > iter_0_reg_248;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< bool > ap_block_pp0_stage0_01001;
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
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_20;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_predicate_op32_write_state2();
    void thread_ap_predicate_op34_write_state2();
    void thread_ap_ready();
    void thread_i_fu_329_p2();
    void thread_icmp_ln796_fu_300_p2();
    void thread_icmp_ln802_fu_324_p2();
    void thread_in_V_data_V_0_ack_in();
    void thread_in_V_data_V_0_ack_out();
    void thread_in_V_data_V_0_data_out();
    void thread_in_V_data_V_0_load_A();
    void thread_in_V_data_V_0_load_B();
    void thread_in_V_data_V_0_sel();
    void thread_in_V_data_V_0_state_cmp_full();
    void thread_in_V_data_V_0_vld_in();
    void thread_in_V_data_V_0_vld_out();
    void thread_in_V_dest_V_0_ack_in();
    void thread_in_V_dest_V_0_ack_out();
    void thread_in_V_dest_V_0_data_out();
    void thread_in_V_dest_V_0_load_A();
    void thread_in_V_dest_V_0_load_B();
    void thread_in_V_dest_V_0_sel();
    void thread_in_V_dest_V_0_state_cmp_full();
    void thread_in_V_dest_V_0_vld_in();
    void thread_in_V_dest_V_0_vld_out();
    void thread_in_V_id_V_0_ack_in();
    void thread_in_V_id_V_0_ack_out();
    void thread_in_V_id_V_0_data_out();
    void thread_in_V_id_V_0_load_A();
    void thread_in_V_id_V_0_load_B();
    void thread_in_V_id_V_0_sel();
    void thread_in_V_id_V_0_state_cmp_full();
    void thread_in_V_id_V_0_vld_in();
    void thread_in_V_id_V_0_vld_out();
    void thread_in_V_last_V_0_ack_in();
    void thread_in_V_last_V_0_ack_out();
    void thread_in_V_last_V_0_data_out();
    void thread_in_V_last_V_0_load_A();
    void thread_in_V_last_V_0_load_B();
    void thread_in_V_last_V_0_sel();
    void thread_in_V_last_V_0_state_cmp_full();
    void thread_in_V_last_V_0_vld_in();
    void thread_in_V_last_V_0_vld_out();
    void thread_in_V_user_V_0_ack_in();
    void thread_in_V_user_V_0_ack_out();
    void thread_in_V_user_V_0_data_out();
    void thread_in_V_user_V_0_load_A();
    void thread_in_V_user_V_0_load_B();
    void thread_in_V_user_V_0_sel();
    void thread_in_V_user_V_0_state_cmp_full();
    void thread_in_V_user_V_0_vld_in();
    void thread_in_V_user_V_0_vld_out();
    void thread_in_r_TDATA_blk_n();
    void thread_in_r_TREADY();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op32();
    void thread_io_acc_block_signal_op34();
    void thread_io_acc_block_signal_op52();
    void thread_io_acc_block_signal_op54();
    void thread_iter_fu_306_p2();
    void thread_out_0_V_data_V_blk_n();
    void thread_out_0_V_data_V_din();
    void thread_out_0_V_data_V_write();
    void thread_out_0_V_dest_V_blk_n();
    void thread_out_0_V_dest_V_din();
    void thread_out_0_V_dest_V_write();
    void thread_out_0_V_id_V_blk_n();
    void thread_out_0_V_id_V_din();
    void thread_out_0_V_id_V_write();
    void thread_out_0_V_last_V_blk_n();
    void thread_out_0_V_last_V_din();
    void thread_out_0_V_last_V_write();
    void thread_out_0_V_user_V_blk_n();
    void thread_out_0_V_user_V_din();
    void thread_out_0_V_user_V_write();
    void thread_out_1_V_data_V_blk_n();
    void thread_out_1_V_data_V_din();
    void thread_out_1_V_data_V_write();
    void thread_out_1_V_dest_V_blk_n();
    void thread_out_1_V_dest_V_din();
    void thread_out_1_V_dest_V_write();
    void thread_out_1_V_id_V_blk_n();
    void thread_out_1_V_id_V_din();
    void thread_out_1_V_id_V_write();
    void thread_out_1_V_last_V_blk_n();
    void thread_out_1_V_last_V_din();
    void thread_out_1_V_last_V_write();
    void thread_out_1_V_user_V_blk_n();
    void thread_out_1_V_user_V_din();
    void thread_out_1_V_user_V_write();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_144_fu_316_p3();
    void thread_trunc_ln681_fu_312_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
