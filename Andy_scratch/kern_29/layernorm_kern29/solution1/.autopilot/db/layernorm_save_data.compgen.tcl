# This script segment is generated automatically by AutoPilot

set id 95
set name kernel_29_srem_41s_11ns_33_45_1
set corename simcore_srem
set op srem
set stage_num 45
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 41
set in0_signed 1
set in1_width 11
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 33
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_srem] == "ap_gen_simcore_srem"} {
eval "ap_gen_simcore_srem { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_srem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op srem
set corename DivnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 97 \
    name in_V_data_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_data_V \
    op interface \
    ports { in_V_data_V_dout { I 512 vector } in_V_data_V_empty_n { I 1 bit } in_V_data_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 98 \
    name in_V_id_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_id_V \
    op interface \
    ports { in_V_id_V_dout { I 8 vector } in_V_id_V_empty_n { I 1 bit } in_V_id_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 99 \
    name in_V_dest_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_dest_V \
    op interface \
    ports { in_V_dest_V_dout { I 8 vector } in_V_dest_V_empty_n { I 1 bit } in_V_dest_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 100 \
    name in_V_user_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_user_V \
    op interface \
    ports { in_V_user_V_dout { I 16 vector } in_V_user_V_empty_n { I 1 bit } in_V_user_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 101 \
    name in_V_last_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_last_V \
    op interface \
    ports { in_V_last_V_dout { I 1 vector } in_V_last_V_empty_n { I 1 bit } in_V_last_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 102 \
    name n_pipe1_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_n_pipe1_V_V \
    op interface \
    ports { n_pipe1_V_V_din { O 32 vector } n_pipe1_V_V_full_n { I 1 bit } n_pipe1_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 103 \
    name mean_pipe1_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_mean_pipe1_V_V \
    op interface \
    ports { mean_pipe1_V_V_din { O 32 vector } mean_pipe1_V_V_full_n { I 1 bit } mean_pipe1_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 104 \
    name mean_pipe2_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_mean_pipe2_V_V \
    op interface \
    ports { mean_pipe2_V_V_din { O 32 vector } mean_pipe2_V_V_full_n { I 1 bit } mean_pipe2_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 105 \
    name in_compute_V_V_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_0 \
    op interface \
    ports { in_compute_V_V_0_din { O 32 vector } in_compute_V_V_0_full_n { I 1 bit } in_compute_V_V_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 106 \
    name in_compute_y_V_V_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_0 \
    op interface \
    ports { in_compute_y_V_V_0_din { O 32 vector } in_compute_y_V_V_0_full_n { I 1 bit } in_compute_y_V_V_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 107 \
    name in_compute_V_V_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_1 \
    op interface \
    ports { in_compute_V_V_1_din { O 32 vector } in_compute_V_V_1_full_n { I 1 bit } in_compute_V_V_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 108 \
    name in_compute_y_V_V_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_1 \
    op interface \
    ports { in_compute_y_V_V_1_din { O 32 vector } in_compute_y_V_V_1_full_n { I 1 bit } in_compute_y_V_V_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 109 \
    name in_compute_V_V_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_2 \
    op interface \
    ports { in_compute_V_V_2_din { O 32 vector } in_compute_V_V_2_full_n { I 1 bit } in_compute_V_V_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 110 \
    name in_compute_y_V_V_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_2 \
    op interface \
    ports { in_compute_y_V_V_2_din { O 32 vector } in_compute_y_V_V_2_full_n { I 1 bit } in_compute_y_V_V_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 111 \
    name in_compute_V_V_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_3 \
    op interface \
    ports { in_compute_V_V_3_din { O 32 vector } in_compute_V_V_3_full_n { I 1 bit } in_compute_V_V_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 112 \
    name in_compute_y_V_V_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_3 \
    op interface \
    ports { in_compute_y_V_V_3_din { O 32 vector } in_compute_y_V_V_3_full_n { I 1 bit } in_compute_y_V_V_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 113 \
    name in_compute_V_V_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_4 \
    op interface \
    ports { in_compute_V_V_4_din { O 32 vector } in_compute_V_V_4_full_n { I 1 bit } in_compute_V_V_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 114 \
    name in_compute_y_V_V_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_4 \
    op interface \
    ports { in_compute_y_V_V_4_din { O 32 vector } in_compute_y_V_V_4_full_n { I 1 bit } in_compute_y_V_V_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 115 \
    name in_compute_V_V_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_5 \
    op interface \
    ports { in_compute_V_V_5_din { O 32 vector } in_compute_V_V_5_full_n { I 1 bit } in_compute_V_V_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 116 \
    name in_compute_y_V_V_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_5 \
    op interface \
    ports { in_compute_y_V_V_5_din { O 32 vector } in_compute_y_V_V_5_full_n { I 1 bit } in_compute_y_V_V_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 117 \
    name in_compute_V_V_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_6 \
    op interface \
    ports { in_compute_V_V_6_din { O 32 vector } in_compute_V_V_6_full_n { I 1 bit } in_compute_V_V_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 118 \
    name in_compute_y_V_V_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_6 \
    op interface \
    ports { in_compute_y_V_V_6_din { O 32 vector } in_compute_y_V_V_6_full_n { I 1 bit } in_compute_y_V_V_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
    name in_compute_V_V_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_7 \
    op interface \
    ports { in_compute_V_V_7_din { O 32 vector } in_compute_V_V_7_full_n { I 1 bit } in_compute_V_V_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 120 \
    name in_compute_y_V_V_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_7 \
    op interface \
    ports { in_compute_y_V_V_7_din { O 32 vector } in_compute_y_V_V_7_full_n { I 1 bit } in_compute_y_V_V_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 121 \
    name in_compute_V_V_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_8 \
    op interface \
    ports { in_compute_V_V_8_din { O 32 vector } in_compute_V_V_8_full_n { I 1 bit } in_compute_V_V_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 122 \
    name in_compute_y_V_V_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_8 \
    op interface \
    ports { in_compute_y_V_V_8_din { O 32 vector } in_compute_y_V_V_8_full_n { I 1 bit } in_compute_y_V_V_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 123 \
    name in_compute_V_V_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_9 \
    op interface \
    ports { in_compute_V_V_9_din { O 32 vector } in_compute_V_V_9_full_n { I 1 bit } in_compute_V_V_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 124 \
    name in_compute_y_V_V_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_9 \
    op interface \
    ports { in_compute_y_V_V_9_din { O 32 vector } in_compute_y_V_V_9_full_n { I 1 bit } in_compute_y_V_V_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 125 \
    name in_compute_V_V_10 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_10 \
    op interface \
    ports { in_compute_V_V_10_din { O 32 vector } in_compute_V_V_10_full_n { I 1 bit } in_compute_V_V_10_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 126 \
    name in_compute_y_V_V_10 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_10 \
    op interface \
    ports { in_compute_y_V_V_10_din { O 32 vector } in_compute_y_V_V_10_full_n { I 1 bit } in_compute_y_V_V_10_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 127 \
    name in_compute_V_V_11 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_11 \
    op interface \
    ports { in_compute_V_V_11_din { O 32 vector } in_compute_V_V_11_full_n { I 1 bit } in_compute_V_V_11_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 128 \
    name in_compute_y_V_V_11 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_11 \
    op interface \
    ports { in_compute_y_V_V_11_din { O 32 vector } in_compute_y_V_V_11_full_n { I 1 bit } in_compute_y_V_V_11_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name in_compute_V_V_12 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_12 \
    op interface \
    ports { in_compute_V_V_12_din { O 32 vector } in_compute_V_V_12_full_n { I 1 bit } in_compute_V_V_12_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name in_compute_y_V_V_12 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_12 \
    op interface \
    ports { in_compute_y_V_V_12_din { O 32 vector } in_compute_y_V_V_12_full_n { I 1 bit } in_compute_y_V_V_12_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name in_compute_V_V_13 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_13 \
    op interface \
    ports { in_compute_V_V_13_din { O 32 vector } in_compute_V_V_13_full_n { I 1 bit } in_compute_V_V_13_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name in_compute_y_V_V_13 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_13 \
    op interface \
    ports { in_compute_y_V_V_13_din { O 32 vector } in_compute_y_V_V_13_full_n { I 1 bit } in_compute_y_V_V_13_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name in_compute_V_V_14 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_14 \
    op interface \
    ports { in_compute_V_V_14_din { O 32 vector } in_compute_V_V_14_full_n { I 1 bit } in_compute_V_V_14_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name in_compute_y_V_V_14 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_14 \
    op interface \
    ports { in_compute_y_V_V_14_din { O 32 vector } in_compute_y_V_V_14_full_n { I 1 bit } in_compute_y_V_V_14_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name in_compute_V_V_15 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_15 \
    op interface \
    ports { in_compute_V_V_15_din { O 32 vector } in_compute_V_V_15_full_n { I 1 bit } in_compute_V_V_15_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name in_compute_y_V_V_15 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_y_V_V_15 \
    op interface \
    ports { in_compute_y_V_V_15_din { O 32 vector } in_compute_y_V_V_15_full_n { I 1 bit } in_compute_y_V_V_15_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


