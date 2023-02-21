// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _IdentityAdd_HH_
#define _IdentityAdd_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct IdentityAdd : public sc_module {
    // Port declarations 55
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
    sc_in< sc_lv<512> > in1_0_V_data_V_dout;
    sc_in< sc_logic > in1_0_V_data_V_empty_n;
    sc_out< sc_logic > in1_0_V_data_V_read;
    sc_in< sc_lv<8> > in1_0_V_id_V_dout;
    sc_in< sc_logic > in1_0_V_id_V_empty_n;
    sc_out< sc_logic > in1_0_V_id_V_read;
    sc_in< sc_lv<8> > in1_0_V_dest_V_dout;
    sc_in< sc_logic > in1_0_V_dest_V_empty_n;
    sc_out< sc_logic > in1_0_V_dest_V_read;
    sc_in< sc_lv<16> > in1_0_V_user_V_dout;
    sc_in< sc_logic > in1_0_V_user_V_empty_n;
    sc_out< sc_logic > in1_0_V_user_V_read;
    sc_in< sc_lv<1> > in1_0_V_last_V_dout;
    sc_in< sc_logic > in1_0_V_last_V_empty_n;
    sc_out< sc_logic > in1_0_V_last_V_read;
    sc_in< sc_lv<512> > in2_V_data_V_dout;
    sc_in< sc_logic > in2_V_data_V_empty_n;
    sc_out< sc_logic > in2_V_data_V_read;
    sc_in< sc_lv<8> > in2_V_id_V_dout;
    sc_in< sc_logic > in2_V_id_V_empty_n;
    sc_out< sc_logic > in2_V_id_V_read;
    sc_in< sc_lv<8> > in2_V_dest_V_dout;
    sc_in< sc_logic > in2_V_dest_V_empty_n;
    sc_out< sc_logic > in2_V_dest_V_read;
    sc_in< sc_lv<16> > in2_V_user_V_dout;
    sc_in< sc_logic > in2_V_user_V_empty_n;
    sc_out< sc_logic > in2_V_user_V_read;
    sc_in< sc_lv<1> > in2_V_last_V_dout;
    sc_in< sc_logic > in2_V_last_V_empty_n;
    sc_out< sc_logic > in2_V_last_V_read;
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
    IdentityAdd(sc_module_name name);
    SC_HAS_PROCESS(IdentityAdd);

    ~IdentityAdd();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > in1_0_V_data_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_905;
    sc_signal< sc_logic > in1_0_V_id_V_blk_n;
    sc_signal< sc_logic > in1_0_V_dest_V_blk_n;
    sc_signal< sc_logic > in1_0_V_user_V_blk_n;
    sc_signal< sc_logic > in1_0_V_last_V_blk_n;
    sc_signal< sc_logic > in2_V_data_V_blk_n;
    sc_signal< sc_logic > in2_V_id_V_blk_n;
    sc_signal< sc_logic > in2_V_dest_V_blk_n;
    sc_signal< sc_logic > in2_V_user_V_blk_n;
    sc_signal< sc_logic > in2_V_last_V_blk_n;
    sc_signal< sc_logic > out_V_data_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_905_pp0_iter1_reg;
    sc_signal< sc_logic > out_V_id_V_blk_n;
    sc_signal< sc_logic > out_V_dest_V_blk_n;
    sc_signal< sc_logic > out_V_user_V_blk_n;
    sc_signal< sc_logic > out_V_last_V_blk_n;
    sc_signal< sc_lv<38> > indvar_flatten_reg_377;
    sc_signal< sc_lv<6> > j_reg_388;
    sc_signal< sc_lv<38> > bound_fu_428_p2;
    sc_signal< sc_lv<38> > bound_reg_900;
    sc_signal< sc_logic > in1_0_V_id_V0_status;
    sc_signal< sc_logic > in2_V_id_V0_status;
    sc_signal< sc_logic > out_V_id_V1_status;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_434_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<38> > indvar_flatten_next_fu_439_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > out_data_last_V_fu_459_p2;
    sc_signal< sc_lv<1> > out_data_last_V_reg_914;
    sc_signal< sc_lv<1> > out_data_last_V_reg_914_pp0_iter1_reg;
    sc_signal< sc_lv<6> > j_4_fu_465_p2;
    sc_signal< sc_lv<32> > tmp_V_0_trunc_fu_483_p2;
    sc_signal< sc_lv<32> > tmp_V_0_trunc_reg_924;
    sc_signal< sc_lv<32> > tmp_V_1_trunc_fu_509_p2;
    sc_signal< sc_lv<32> > tmp_V_1_trunc_reg_929;
    sc_signal< sc_lv<32> > tmp_V_2_trunc_fu_535_p2;
    sc_signal< sc_lv<32> > tmp_V_2_trunc_reg_934;
    sc_signal< sc_lv<32> > tmp_V_3_trunc_fu_561_p2;
    sc_signal< sc_lv<32> > tmp_V_3_trunc_reg_939;
    sc_signal< sc_lv<32> > tmp_V_4_trunc_fu_587_p2;
    sc_signal< sc_lv<32> > tmp_V_4_trunc_reg_944;
    sc_signal< sc_lv<32> > tmp_V_5_trunc_fu_613_p2;
    sc_signal< sc_lv<32> > tmp_V_5_trunc_reg_949;
    sc_signal< sc_lv<32> > tmp_V_6_trunc_fu_639_p2;
    sc_signal< sc_lv<32> > tmp_V_6_trunc_reg_954;
    sc_signal< sc_lv<32> > tmp_V_7_trunc_fu_665_p2;
    sc_signal< sc_lv<32> > tmp_V_7_trunc_reg_959;
    sc_signal< sc_lv<32> > tmp_V_8_trunc_fu_691_p2;
    sc_signal< sc_lv<32> > tmp_V_8_trunc_reg_964;
    sc_signal< sc_lv<32> > tmp_V_9_trunc_fu_717_p2;
    sc_signal< sc_lv<32> > tmp_V_9_trunc_reg_969;
    sc_signal< sc_lv<32> > tmp_V_10_trunc_fu_743_p2;
    sc_signal< sc_lv<32> > tmp_V_10_trunc_reg_974;
    sc_signal< sc_lv<32> > tmp_V_11_trunc_fu_769_p2;
    sc_signal< sc_lv<32> > tmp_V_11_trunc_reg_979;
    sc_signal< sc_lv<32> > tmp_V_12_trunc_fu_795_p2;
    sc_signal< sc_lv<32> > tmp_V_12_trunc_reg_984;
    sc_signal< sc_lv<32> > tmp_V_13_trunc_fu_821_p2;
    sc_signal< sc_lv<32> > tmp_V_13_trunc_reg_989;
    sc_signal< sc_lv<32> > tmp_V_14_trunc_fu_847_p2;
    sc_signal< sc_lv<32> > tmp_V_14_trunc_reg_994;
    sc_signal< sc_lv<32> > tmp_V_15_trunc_fu_873_p2;
    sc_signal< sc_lv<32> > tmp_V_15_trunc_reg_999;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > in1_0_V_id_V0_update;
    sc_signal< sc_logic > in2_V_id_V0_update;
    sc_signal< sc_logic > out_V_id_V1_update;
    sc_signal< sc_lv<512> > tmp_data_V_15_fu_879_p17;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > tmp_142_fu_404_p1;
    sc_signal< sc_lv<36> > tmp_s_fu_416_p3;
    sc_signal< sc_lv<38> > p_shl_fu_408_p3;
    sc_signal< sc_lv<38> > p_shl2_fu_424_p1;
    sc_signal< sc_lv<1> > tmp_3_fu_445_p2;
    sc_signal< sc_lv<6> > j_mid2_fu_451_p3;
    sc_signal< sc_lv<32> > tmp_143_fu_475_p1;
    sc_signal< sc_lv<32> > tmp_144_fu_479_p1;
    sc_signal< sc_lv<32> > p_Result_22_1_fu_489_p4;
    sc_signal< sc_lv<32> > p_Result_23_1_fu_499_p4;
    sc_signal< sc_lv<32> > p_Result_22_2_fu_515_p4;
    sc_signal< sc_lv<32> > p_Result_23_2_fu_525_p4;
    sc_signal< sc_lv<32> > p_Result_22_3_fu_541_p4;
    sc_signal< sc_lv<32> > p_Result_23_3_fu_551_p4;
    sc_signal< sc_lv<32> > p_Result_22_4_fu_567_p4;
    sc_signal< sc_lv<32> > p_Result_23_4_fu_577_p4;
    sc_signal< sc_lv<32> > p_Result_22_5_fu_593_p4;
    sc_signal< sc_lv<32> > p_Result_23_5_fu_603_p4;
    sc_signal< sc_lv<32> > p_Result_22_6_fu_619_p4;
    sc_signal< sc_lv<32> > p_Result_23_6_fu_629_p4;
    sc_signal< sc_lv<32> > p_Result_22_7_fu_645_p4;
    sc_signal< sc_lv<32> > p_Result_23_7_fu_655_p4;
    sc_signal< sc_lv<32> > p_Result_22_8_fu_671_p4;
    sc_signal< sc_lv<32> > p_Result_23_8_fu_681_p4;
    sc_signal< sc_lv<32> > p_Result_22_9_fu_697_p4;
    sc_signal< sc_lv<32> > p_Result_23_9_fu_707_p4;
    sc_signal< sc_lv<32> > p_Result_22_s_fu_723_p4;
    sc_signal< sc_lv<32> > p_Result_23_s_fu_733_p4;
    sc_signal< sc_lv<32> > p_Result_22_10_fu_749_p4;
    sc_signal< sc_lv<32> > p_Result_23_10_fu_759_p4;
    sc_signal< sc_lv<32> > p_Result_22_11_fu_775_p4;
    sc_signal< sc_lv<32> > p_Result_23_11_fu_785_p4;
    sc_signal< sc_lv<32> > p_Result_22_12_fu_801_p4;
    sc_signal< sc_lv<32> > p_Result_23_12_fu_811_p4;
    sc_signal< sc_lv<32> > p_Result_22_13_fu_827_p4;
    sc_signal< sc_lv<32> > p_Result_23_13_fu_837_p4;
    sc_signal< sc_lv<32> > p_Result_22_14_fu_853_p4;
    sc_signal< sc_lv<32> > p_Result_23_14_fu_863_p4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state5;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<38> ap_const_lv38_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<8> ap_const_lv8_1D;
    static const sc_lv<8> ap_const_lv8_1E;
    static const sc_lv<16> ap_const_lv16_31;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<38> ap_const_lv38_1;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<32> ap_const_lv32_A0;
    static const sc_lv<32> ap_const_lv32_BF;
    static const sc_lv<32> ap_const_lv32_C0;
    static const sc_lv<32> ap_const_lv32_DF;
    static const sc_lv<32> ap_const_lv32_E0;
    static const sc_lv<32> ap_const_lv32_FF;
    static const sc_lv<32> ap_const_lv32_100;
    static const sc_lv<32> ap_const_lv32_11F;
    static const sc_lv<32> ap_const_lv32_120;
    static const sc_lv<32> ap_const_lv32_13F;
    static const sc_lv<32> ap_const_lv32_140;
    static const sc_lv<32> ap_const_lv32_15F;
    static const sc_lv<32> ap_const_lv32_160;
    static const sc_lv<32> ap_const_lv32_17F;
    static const sc_lv<32> ap_const_lv32_180;
    static const sc_lv<32> ap_const_lv32_19F;
    static const sc_lv<32> ap_const_lv32_1A0;
    static const sc_lv<32> ap_const_lv32_1BF;
    static const sc_lv<32> ap_const_lv32_1C0;
    static const sc_lv<32> ap_const_lv32_1DF;
    static const sc_lv<32> ap_const_lv32_1E0;
    static const sc_lv<32> ap_const_lv32_1FF;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_bound_fu_428_p2();
    void thread_exitcond_flatten_fu_434_p2();
    void thread_in1_0_V_data_V_blk_n();
    void thread_in1_0_V_data_V_read();
    void thread_in1_0_V_dest_V_blk_n();
    void thread_in1_0_V_dest_V_read();
    void thread_in1_0_V_id_V0_status();
    void thread_in1_0_V_id_V0_update();
    void thread_in1_0_V_id_V_blk_n();
    void thread_in1_0_V_id_V_read();
    void thread_in1_0_V_last_V_blk_n();
    void thread_in1_0_V_last_V_read();
    void thread_in1_0_V_user_V_blk_n();
    void thread_in1_0_V_user_V_read();
    void thread_in2_V_data_V_blk_n();
    void thread_in2_V_data_V_read();
    void thread_in2_V_dest_V_blk_n();
    void thread_in2_V_dest_V_read();
    void thread_in2_V_id_V0_status();
    void thread_in2_V_id_V0_update();
    void thread_in2_V_id_V_blk_n();
    void thread_in2_V_id_V_read();
    void thread_in2_V_last_V_blk_n();
    void thread_in2_V_last_V_read();
    void thread_in2_V_user_V_blk_n();
    void thread_in2_V_user_V_read();
    void thread_indvar_flatten_next_fu_439_p2();
    void thread_internal_ap_ready();
    void thread_j_4_fu_465_p2();
    void thread_j_mid2_fu_451_p3();
    void thread_out_V_data_V_blk_n();
    void thread_out_V_data_V_din();
    void thread_out_V_data_V_write();
    void thread_out_V_dest_V_blk_n();
    void thread_out_V_dest_V_din();
    void thread_out_V_dest_V_write();
    void thread_out_V_id_V1_status();
    void thread_out_V_id_V1_update();
    void thread_out_V_id_V_blk_n();
    void thread_out_V_id_V_din();
    void thread_out_V_id_V_write();
    void thread_out_V_last_V_blk_n();
    void thread_out_V_last_V_din();
    void thread_out_V_last_V_write();
    void thread_out_V_user_V_blk_n();
    void thread_out_V_user_V_din();
    void thread_out_V_user_V_write();
    void thread_out_data_last_V_fu_459_p2();
    void thread_p_Result_22_10_fu_749_p4();
    void thread_p_Result_22_11_fu_775_p4();
    void thread_p_Result_22_12_fu_801_p4();
    void thread_p_Result_22_13_fu_827_p4();
    void thread_p_Result_22_14_fu_853_p4();
    void thread_p_Result_22_1_fu_489_p4();
    void thread_p_Result_22_2_fu_515_p4();
    void thread_p_Result_22_3_fu_541_p4();
    void thread_p_Result_22_4_fu_567_p4();
    void thread_p_Result_22_5_fu_593_p4();
    void thread_p_Result_22_6_fu_619_p4();
    void thread_p_Result_22_7_fu_645_p4();
    void thread_p_Result_22_8_fu_671_p4();
    void thread_p_Result_22_9_fu_697_p4();
    void thread_p_Result_22_s_fu_723_p4();
    void thread_p_Result_23_10_fu_759_p4();
    void thread_p_Result_23_11_fu_785_p4();
    void thread_p_Result_23_12_fu_811_p4();
    void thread_p_Result_23_13_fu_837_p4();
    void thread_p_Result_23_14_fu_863_p4();
    void thread_p_Result_23_1_fu_499_p4();
    void thread_p_Result_23_2_fu_525_p4();
    void thread_p_Result_23_3_fu_551_p4();
    void thread_p_Result_23_4_fu_577_p4();
    void thread_p_Result_23_5_fu_603_p4();
    void thread_p_Result_23_6_fu_629_p4();
    void thread_p_Result_23_7_fu_655_p4();
    void thread_p_Result_23_8_fu_681_p4();
    void thread_p_Result_23_9_fu_707_p4();
    void thread_p_Result_23_s_fu_733_p4();
    void thread_p_shl2_fu_424_p1();
    void thread_p_shl_fu_408_p3();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_142_fu_404_p1();
    void thread_tmp_143_fu_475_p1();
    void thread_tmp_144_fu_479_p1();
    void thread_tmp_3_fu_445_p2();
    void thread_tmp_V_0_trunc_fu_483_p2();
    void thread_tmp_V_10_trunc_fu_743_p2();
    void thread_tmp_V_11_trunc_fu_769_p2();
    void thread_tmp_V_12_trunc_fu_795_p2();
    void thread_tmp_V_13_trunc_fu_821_p2();
    void thread_tmp_V_14_trunc_fu_847_p2();
    void thread_tmp_V_15_trunc_fu_873_p2();
    void thread_tmp_V_1_trunc_fu_509_p2();
    void thread_tmp_V_2_trunc_fu_535_p2();
    void thread_tmp_V_3_trunc_fu_561_p2();
    void thread_tmp_V_4_trunc_fu_587_p2();
    void thread_tmp_V_5_trunc_fu_613_p2();
    void thread_tmp_V_6_trunc_fu_639_p2();
    void thread_tmp_V_7_trunc_fu_665_p2();
    void thread_tmp_V_8_trunc_fu_691_p2();
    void thread_tmp_V_9_trunc_fu_717_p2();
    void thread_tmp_data_V_15_fu_879_p17();
    void thread_tmp_s_fu_416_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
