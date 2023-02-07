# This script segment is generated automatically by AutoPilot

set id 98
set name kernel_4_mul_mul_15ns_17ns_32_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 15
set in0_signed 0
set in1_width 17
set in1_signed 0
set out_width 32
set exp i0*i1
set arg_lists {i0 {15 0 +} i1 {17 0 +} p {32 0 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 100
set hasByteEnable 0
set MemName AttentionMatmulReadB_buffer_0_0_0_V
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 8
set AddrRange 64
set AddrWd 6
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 0.677
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
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
    id 101 \
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
    id 102 \
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
    id 103 \
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
    id 104 \
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
    id 105 \
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
    id 106 \
    name in_n_r_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_n_r_V_V \
    op interface \
    ports { in_n_r_V_V_dout { I 32 vector } in_n_r_V_V_empty_n { I 1 bit } in_n_r_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 107 \
    name out_compute_n_c_0_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_compute_n_c_0_V_V \
    op interface \
    ports { out_compute_n_c_0_V_V_din { O 32 vector } out_compute_n_c_0_V_V_full_n { I 1 bit } out_compute_n_c_0_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 108 \
    name out_write_n_c_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_write_n_c_V_V \
    op interface \
    ports { out_write_n_c_V_V_din { O 32 vector } out_write_n_c_V_V_full_n { I 1 bit } out_write_n_c_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 109 \
    name out_0_0_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_0_V_V \
    op interface \
    ports { out_0_0_V_V_din { O 8 vector } out_0_0_V_V_full_n { I 1 bit } out_0_0_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 110 \
    name out_0_1_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_1_V_V \
    op interface \
    ports { out_0_1_V_V_din { O 8 vector } out_0_1_V_V_full_n { I 1 bit } out_0_1_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 111 \
    name out_0_2_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_2_V_V \
    op interface \
    ports { out_0_2_V_V_din { O 8 vector } out_0_2_V_V_full_n { I 1 bit } out_0_2_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 112 \
    name out_0_3_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_3_V_V \
    op interface \
    ports { out_0_3_V_V_din { O 8 vector } out_0_3_V_V_full_n { I 1 bit } out_0_3_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 113 \
    name out_0_4_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_4_V_V \
    op interface \
    ports { out_0_4_V_V_din { O 8 vector } out_0_4_V_V_full_n { I 1 bit } out_0_4_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 114 \
    name out_0_5_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_5_V_V \
    op interface \
    ports { out_0_5_V_V_din { O 8 vector } out_0_5_V_V_full_n { I 1 bit } out_0_5_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 115 \
    name out_0_6_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_6_V_V \
    op interface \
    ports { out_0_6_V_V_din { O 8 vector } out_0_6_V_V_full_n { I 1 bit } out_0_6_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 116 \
    name out_0_7_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_7_V_V \
    op interface \
    ports { out_0_7_V_V_din { O 8 vector } out_0_7_V_V_full_n { I 1 bit } out_0_7_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 117 \
    name out_0_8_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_8_V_V \
    op interface \
    ports { out_0_8_V_V_din { O 8 vector } out_0_8_V_V_full_n { I 1 bit } out_0_8_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 118 \
    name out_0_9_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_9_V_V \
    op interface \
    ports { out_0_9_V_V_din { O 8 vector } out_0_9_V_V_full_n { I 1 bit } out_0_9_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
    name out_0_10_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_10_V_V \
    op interface \
    ports { out_0_10_V_V_din { O 8 vector } out_0_10_V_V_full_n { I 1 bit } out_0_10_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 120 \
    name out_0_11_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_11_V_V \
    op interface \
    ports { out_0_11_V_V_din { O 8 vector } out_0_11_V_V_full_n { I 1 bit } out_0_11_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 121 \
    name out_0_12_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_12_V_V \
    op interface \
    ports { out_0_12_V_V_din { O 8 vector } out_0_12_V_V_full_n { I 1 bit } out_0_12_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 122 \
    name out_0_13_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_13_V_V \
    op interface \
    ports { out_0_13_V_V_din { O 8 vector } out_0_13_V_V_full_n { I 1 bit } out_0_13_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 123 \
    name out_0_14_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_14_V_V \
    op interface \
    ports { out_0_14_V_V_din { O 8 vector } out_0_14_V_V_full_n { I 1 bit } out_0_14_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 124 \
    name out_0_15_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_15_V_V \
    op interface \
    ports { out_0_15_V_V_din { O 8 vector } out_0_15_V_V_full_n { I 1 bit } out_0_15_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 125 \
    name out_0_16_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_16_V_V \
    op interface \
    ports { out_0_16_V_V_din { O 8 vector } out_0_16_V_V_full_n { I 1 bit } out_0_16_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 126 \
    name out_0_17_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_17_V_V \
    op interface \
    ports { out_0_17_V_V_din { O 8 vector } out_0_17_V_V_full_n { I 1 bit } out_0_17_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 127 \
    name out_0_18_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_18_V_V \
    op interface \
    ports { out_0_18_V_V_din { O 8 vector } out_0_18_V_V_full_n { I 1 bit } out_0_18_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 128 \
    name out_0_19_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_19_V_V \
    op interface \
    ports { out_0_19_V_V_din { O 8 vector } out_0_19_V_V_full_n { I 1 bit } out_0_19_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name out_0_20_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_20_V_V \
    op interface \
    ports { out_0_20_V_V_din { O 8 vector } out_0_20_V_V_full_n { I 1 bit } out_0_20_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name out_0_21_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_21_V_V \
    op interface \
    ports { out_0_21_V_V_din { O 8 vector } out_0_21_V_V_full_n { I 1 bit } out_0_21_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name out_0_22_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_22_V_V \
    op interface \
    ports { out_0_22_V_V_din { O 8 vector } out_0_22_V_V_full_n { I 1 bit } out_0_22_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name out_0_23_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_23_V_V \
    op interface \
    ports { out_0_23_V_V_din { O 8 vector } out_0_23_V_V_full_n { I 1 bit } out_0_23_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name out_0_24_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_24_V_V \
    op interface \
    ports { out_0_24_V_V_din { O 8 vector } out_0_24_V_V_full_n { I 1 bit } out_0_24_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name out_0_25_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_25_V_V \
    op interface \
    ports { out_0_25_V_V_din { O 8 vector } out_0_25_V_V_full_n { I 1 bit } out_0_25_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name out_0_26_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_26_V_V \
    op interface \
    ports { out_0_26_V_V_din { O 8 vector } out_0_26_V_V_full_n { I 1 bit } out_0_26_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name out_0_27_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_27_V_V \
    op interface \
    ports { out_0_27_V_V_din { O 8 vector } out_0_27_V_V_full_n { I 1 bit } out_0_27_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name out_0_28_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_28_V_V \
    op interface \
    ports { out_0_28_V_V_din { O 8 vector } out_0_28_V_V_full_n { I 1 bit } out_0_28_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name out_0_29_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_29_V_V \
    op interface \
    ports { out_0_29_V_V_din { O 8 vector } out_0_29_V_V_full_n { I 1 bit } out_0_29_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name out_0_30_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_30_V_V \
    op interface \
    ports { out_0_30_V_V_din { O 8 vector } out_0_30_V_V_full_n { I 1 bit } out_0_30_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 140 \
    name out_0_31_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_31_V_V \
    op interface \
    ports { out_0_31_V_V_din { O 8 vector } out_0_31_V_V_full_n { I 1 bit } out_0_31_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 141 \
    name out_0_32_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_32_V_V \
    op interface \
    ports { out_0_32_V_V_din { O 8 vector } out_0_32_V_V_full_n { I 1 bit } out_0_32_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name out_0_33_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_33_V_V \
    op interface \
    ports { out_0_33_V_V_din { O 8 vector } out_0_33_V_V_full_n { I 1 bit } out_0_33_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 143 \
    name out_0_34_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_34_V_V \
    op interface \
    ports { out_0_34_V_V_din { O 8 vector } out_0_34_V_V_full_n { I 1 bit } out_0_34_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 144 \
    name out_0_35_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_35_V_V \
    op interface \
    ports { out_0_35_V_V_din { O 8 vector } out_0_35_V_V_full_n { I 1 bit } out_0_35_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name out_0_36_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_36_V_V \
    op interface \
    ports { out_0_36_V_V_din { O 8 vector } out_0_36_V_V_full_n { I 1 bit } out_0_36_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name out_0_37_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_37_V_V \
    op interface \
    ports { out_0_37_V_V_din { O 8 vector } out_0_37_V_V_full_n { I 1 bit } out_0_37_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name out_0_38_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_38_V_V \
    op interface \
    ports { out_0_38_V_V_din { O 8 vector } out_0_38_V_V_full_n { I 1 bit } out_0_38_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name out_0_39_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_39_V_V \
    op interface \
    ports { out_0_39_V_V_din { O 8 vector } out_0_39_V_V_full_n { I 1 bit } out_0_39_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name out_0_40_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_40_V_V \
    op interface \
    ports { out_0_40_V_V_din { O 8 vector } out_0_40_V_V_full_n { I 1 bit } out_0_40_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name out_0_41_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_41_V_V \
    op interface \
    ports { out_0_41_V_V_din { O 8 vector } out_0_41_V_V_full_n { I 1 bit } out_0_41_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name out_0_42_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_42_V_V \
    op interface \
    ports { out_0_42_V_V_din { O 8 vector } out_0_42_V_V_full_n { I 1 bit } out_0_42_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name out_0_43_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_43_V_V \
    op interface \
    ports { out_0_43_V_V_din { O 8 vector } out_0_43_V_V_full_n { I 1 bit } out_0_43_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name out_0_44_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_44_V_V \
    op interface \
    ports { out_0_44_V_V_din { O 8 vector } out_0_44_V_V_full_n { I 1 bit } out_0_44_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name out_0_45_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_45_V_V \
    op interface \
    ports { out_0_45_V_V_din { O 8 vector } out_0_45_V_V_full_n { I 1 bit } out_0_45_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name out_0_46_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_46_V_V \
    op interface \
    ports { out_0_46_V_V_din { O 8 vector } out_0_46_V_V_full_n { I 1 bit } out_0_46_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name out_0_47_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_47_V_V \
    op interface \
    ports { out_0_47_V_V_din { O 8 vector } out_0_47_V_V_full_n { I 1 bit } out_0_47_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 157 \
    name out_0_48_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_48_V_V \
    op interface \
    ports { out_0_48_V_V_din { O 8 vector } out_0_48_V_V_full_n { I 1 bit } out_0_48_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 158 \
    name out_0_49_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_49_V_V \
    op interface \
    ports { out_0_49_V_V_din { O 8 vector } out_0_49_V_V_full_n { I 1 bit } out_0_49_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 159 \
    name out_0_50_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_50_V_V \
    op interface \
    ports { out_0_50_V_V_din { O 8 vector } out_0_50_V_V_full_n { I 1 bit } out_0_50_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 160 \
    name out_0_51_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_51_V_V \
    op interface \
    ports { out_0_51_V_V_din { O 8 vector } out_0_51_V_V_full_n { I 1 bit } out_0_51_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 161 \
    name out_0_52_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_52_V_V \
    op interface \
    ports { out_0_52_V_V_din { O 8 vector } out_0_52_V_V_full_n { I 1 bit } out_0_52_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name out_0_53_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_53_V_V \
    op interface \
    ports { out_0_53_V_V_din { O 8 vector } out_0_53_V_V_full_n { I 1 bit } out_0_53_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name out_0_54_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_54_V_V \
    op interface \
    ports { out_0_54_V_V_din { O 8 vector } out_0_54_V_V_full_n { I 1 bit } out_0_54_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name out_0_55_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_55_V_V \
    op interface \
    ports { out_0_55_V_V_din { O 8 vector } out_0_55_V_V_full_n { I 1 bit } out_0_55_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name out_0_56_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_56_V_V \
    op interface \
    ports { out_0_56_V_V_din { O 8 vector } out_0_56_V_V_full_n { I 1 bit } out_0_56_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name out_0_57_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_57_V_V \
    op interface \
    ports { out_0_57_V_V_din { O 8 vector } out_0_57_V_V_full_n { I 1 bit } out_0_57_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name out_0_58_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_58_V_V \
    op interface \
    ports { out_0_58_V_V_din { O 8 vector } out_0_58_V_V_full_n { I 1 bit } out_0_58_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 168 \
    name out_0_59_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_59_V_V \
    op interface \
    ports { out_0_59_V_V_din { O 8 vector } out_0_59_V_V_full_n { I 1 bit } out_0_59_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 169 \
    name out_0_60_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_60_V_V \
    op interface \
    ports { out_0_60_V_V_din { O 8 vector } out_0_60_V_V_full_n { I 1 bit } out_0_60_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 170 \
    name out_0_61_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_61_V_V \
    op interface \
    ports { out_0_61_V_V_din { O 8 vector } out_0_61_V_V_full_n { I 1 bit } out_0_61_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 171 \
    name out_0_62_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_62_V_V \
    op interface \
    ports { out_0_62_V_V_din { O 8 vector } out_0_62_V_V_full_n { I 1 bit } out_0_62_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 172 \
    name out_0_63_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_63_V_V \
    op interface \
    ports { out_0_63_V_V_din { O 8 vector } out_0_63_V_V_full_n { I 1 bit } out_0_63_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 173 \
    name out_1_0_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_0_V_V \
    op interface \
    ports { out_1_0_V_V_din { O 8 vector } out_1_0_V_V_full_n { I 1 bit } out_1_0_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 174 \
    name out_1_1_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_1_V_V \
    op interface \
    ports { out_1_1_V_V_din { O 8 vector } out_1_1_V_V_full_n { I 1 bit } out_1_1_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 175 \
    name out_1_2_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_2_V_V \
    op interface \
    ports { out_1_2_V_V_din { O 8 vector } out_1_2_V_V_full_n { I 1 bit } out_1_2_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 176 \
    name out_1_3_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_3_V_V \
    op interface \
    ports { out_1_3_V_V_din { O 8 vector } out_1_3_V_V_full_n { I 1 bit } out_1_3_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 177 \
    name out_1_4_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_4_V_V \
    op interface \
    ports { out_1_4_V_V_din { O 8 vector } out_1_4_V_V_full_n { I 1 bit } out_1_4_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 178 \
    name out_1_5_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_5_V_V \
    op interface \
    ports { out_1_5_V_V_din { O 8 vector } out_1_5_V_V_full_n { I 1 bit } out_1_5_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 179 \
    name out_1_6_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_6_V_V \
    op interface \
    ports { out_1_6_V_V_din { O 8 vector } out_1_6_V_V_full_n { I 1 bit } out_1_6_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name out_1_7_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_7_V_V \
    op interface \
    ports { out_1_7_V_V_din { O 8 vector } out_1_7_V_V_full_n { I 1 bit } out_1_7_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name out_1_8_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_8_V_V \
    op interface \
    ports { out_1_8_V_V_din { O 8 vector } out_1_8_V_V_full_n { I 1 bit } out_1_8_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 182 \
    name out_1_9_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_9_V_V \
    op interface \
    ports { out_1_9_V_V_din { O 8 vector } out_1_9_V_V_full_n { I 1 bit } out_1_9_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 183 \
    name out_1_10_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_10_V_V \
    op interface \
    ports { out_1_10_V_V_din { O 8 vector } out_1_10_V_V_full_n { I 1 bit } out_1_10_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 184 \
    name out_1_11_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_11_V_V \
    op interface \
    ports { out_1_11_V_V_din { O 8 vector } out_1_11_V_V_full_n { I 1 bit } out_1_11_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 185 \
    name out_1_12_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_12_V_V \
    op interface \
    ports { out_1_12_V_V_din { O 8 vector } out_1_12_V_V_full_n { I 1 bit } out_1_12_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 186 \
    name out_1_13_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_13_V_V \
    op interface \
    ports { out_1_13_V_V_din { O 8 vector } out_1_13_V_V_full_n { I 1 bit } out_1_13_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 187 \
    name out_1_14_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_14_V_V \
    op interface \
    ports { out_1_14_V_V_din { O 8 vector } out_1_14_V_V_full_n { I 1 bit } out_1_14_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 188 \
    name out_1_15_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_15_V_V \
    op interface \
    ports { out_1_15_V_V_din { O 8 vector } out_1_15_V_V_full_n { I 1 bit } out_1_15_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 189 \
    name out_1_16_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_16_V_V \
    op interface \
    ports { out_1_16_V_V_din { O 8 vector } out_1_16_V_V_full_n { I 1 bit } out_1_16_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 190 \
    name out_1_17_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_17_V_V \
    op interface \
    ports { out_1_17_V_V_din { O 8 vector } out_1_17_V_V_full_n { I 1 bit } out_1_17_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 191 \
    name out_1_18_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_18_V_V \
    op interface \
    ports { out_1_18_V_V_din { O 8 vector } out_1_18_V_V_full_n { I 1 bit } out_1_18_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 192 \
    name out_1_19_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_19_V_V \
    op interface \
    ports { out_1_19_V_V_din { O 8 vector } out_1_19_V_V_full_n { I 1 bit } out_1_19_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 193 \
    name out_1_20_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_20_V_V \
    op interface \
    ports { out_1_20_V_V_din { O 8 vector } out_1_20_V_V_full_n { I 1 bit } out_1_20_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 194 \
    name out_1_21_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_21_V_V \
    op interface \
    ports { out_1_21_V_V_din { O 8 vector } out_1_21_V_V_full_n { I 1 bit } out_1_21_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 195 \
    name out_1_22_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_22_V_V \
    op interface \
    ports { out_1_22_V_V_din { O 8 vector } out_1_22_V_V_full_n { I 1 bit } out_1_22_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 196 \
    name out_1_23_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_23_V_V \
    op interface \
    ports { out_1_23_V_V_din { O 8 vector } out_1_23_V_V_full_n { I 1 bit } out_1_23_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 197 \
    name out_1_24_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_24_V_V \
    op interface \
    ports { out_1_24_V_V_din { O 8 vector } out_1_24_V_V_full_n { I 1 bit } out_1_24_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 198 \
    name out_1_25_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_25_V_V \
    op interface \
    ports { out_1_25_V_V_din { O 8 vector } out_1_25_V_V_full_n { I 1 bit } out_1_25_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 199 \
    name out_1_26_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_26_V_V \
    op interface \
    ports { out_1_26_V_V_din { O 8 vector } out_1_26_V_V_full_n { I 1 bit } out_1_26_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 200 \
    name out_1_27_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_27_V_V \
    op interface \
    ports { out_1_27_V_V_din { O 8 vector } out_1_27_V_V_full_n { I 1 bit } out_1_27_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 201 \
    name out_1_28_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_28_V_V \
    op interface \
    ports { out_1_28_V_V_din { O 8 vector } out_1_28_V_V_full_n { I 1 bit } out_1_28_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 202 \
    name out_1_29_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_29_V_V \
    op interface \
    ports { out_1_29_V_V_din { O 8 vector } out_1_29_V_V_full_n { I 1 bit } out_1_29_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 203 \
    name out_1_30_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_30_V_V \
    op interface \
    ports { out_1_30_V_V_din { O 8 vector } out_1_30_V_V_full_n { I 1 bit } out_1_30_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 204 \
    name out_1_31_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_31_V_V \
    op interface \
    ports { out_1_31_V_V_din { O 8 vector } out_1_31_V_V_full_n { I 1 bit } out_1_31_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name out_1_32_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_32_V_V \
    op interface \
    ports { out_1_32_V_V_din { O 8 vector } out_1_32_V_V_full_n { I 1 bit } out_1_32_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name out_1_33_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_33_V_V \
    op interface \
    ports { out_1_33_V_V_din { O 8 vector } out_1_33_V_V_full_n { I 1 bit } out_1_33_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
    name out_1_34_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_34_V_V \
    op interface \
    ports { out_1_34_V_V_din { O 8 vector } out_1_34_V_V_full_n { I 1 bit } out_1_34_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 208 \
    name out_1_35_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_35_V_V \
    op interface \
    ports { out_1_35_V_V_din { O 8 vector } out_1_35_V_V_full_n { I 1 bit } out_1_35_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 209 \
    name out_1_36_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_36_V_V \
    op interface \
    ports { out_1_36_V_V_din { O 8 vector } out_1_36_V_V_full_n { I 1 bit } out_1_36_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 210 \
    name out_1_37_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_37_V_V \
    op interface \
    ports { out_1_37_V_V_din { O 8 vector } out_1_37_V_V_full_n { I 1 bit } out_1_37_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 211 \
    name out_1_38_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_38_V_V \
    op interface \
    ports { out_1_38_V_V_din { O 8 vector } out_1_38_V_V_full_n { I 1 bit } out_1_38_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 212 \
    name out_1_39_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_39_V_V \
    op interface \
    ports { out_1_39_V_V_din { O 8 vector } out_1_39_V_V_full_n { I 1 bit } out_1_39_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 213 \
    name out_1_40_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_40_V_V \
    op interface \
    ports { out_1_40_V_V_din { O 8 vector } out_1_40_V_V_full_n { I 1 bit } out_1_40_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 214 \
    name out_1_41_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_41_V_V \
    op interface \
    ports { out_1_41_V_V_din { O 8 vector } out_1_41_V_V_full_n { I 1 bit } out_1_41_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 215 \
    name out_1_42_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_42_V_V \
    op interface \
    ports { out_1_42_V_V_din { O 8 vector } out_1_42_V_V_full_n { I 1 bit } out_1_42_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 216 \
    name out_1_43_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_43_V_V \
    op interface \
    ports { out_1_43_V_V_din { O 8 vector } out_1_43_V_V_full_n { I 1 bit } out_1_43_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 217 \
    name out_1_44_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_44_V_V \
    op interface \
    ports { out_1_44_V_V_din { O 8 vector } out_1_44_V_V_full_n { I 1 bit } out_1_44_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 218 \
    name out_1_45_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_45_V_V \
    op interface \
    ports { out_1_45_V_V_din { O 8 vector } out_1_45_V_V_full_n { I 1 bit } out_1_45_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 219 \
    name out_1_46_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_46_V_V \
    op interface \
    ports { out_1_46_V_V_din { O 8 vector } out_1_46_V_V_full_n { I 1 bit } out_1_46_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 220 \
    name out_1_47_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_47_V_V \
    op interface \
    ports { out_1_47_V_V_din { O 8 vector } out_1_47_V_V_full_n { I 1 bit } out_1_47_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name out_1_48_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_48_V_V \
    op interface \
    ports { out_1_48_V_V_din { O 8 vector } out_1_48_V_V_full_n { I 1 bit } out_1_48_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name out_1_49_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_49_V_V \
    op interface \
    ports { out_1_49_V_V_din { O 8 vector } out_1_49_V_V_full_n { I 1 bit } out_1_49_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name out_1_50_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_50_V_V \
    op interface \
    ports { out_1_50_V_V_din { O 8 vector } out_1_50_V_V_full_n { I 1 bit } out_1_50_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name out_1_51_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_51_V_V \
    op interface \
    ports { out_1_51_V_V_din { O 8 vector } out_1_51_V_V_full_n { I 1 bit } out_1_51_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name out_1_52_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_52_V_V \
    op interface \
    ports { out_1_52_V_V_din { O 8 vector } out_1_52_V_V_full_n { I 1 bit } out_1_52_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 226 \
    name out_1_53_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_53_V_V \
    op interface \
    ports { out_1_53_V_V_din { O 8 vector } out_1_53_V_V_full_n { I 1 bit } out_1_53_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
    name out_1_54_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_54_V_V \
    op interface \
    ports { out_1_54_V_V_din { O 8 vector } out_1_54_V_V_full_n { I 1 bit } out_1_54_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 228 \
    name out_1_55_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_55_V_V \
    op interface \
    ports { out_1_55_V_V_din { O 8 vector } out_1_55_V_V_full_n { I 1 bit } out_1_55_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 229 \
    name out_1_56_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_56_V_V \
    op interface \
    ports { out_1_56_V_V_din { O 8 vector } out_1_56_V_V_full_n { I 1 bit } out_1_56_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 230 \
    name out_1_57_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_57_V_V \
    op interface \
    ports { out_1_57_V_V_din { O 8 vector } out_1_57_V_V_full_n { I 1 bit } out_1_57_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 231 \
    name out_1_58_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_58_V_V \
    op interface \
    ports { out_1_58_V_V_din { O 8 vector } out_1_58_V_V_full_n { I 1 bit } out_1_58_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 232 \
    name out_1_59_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_59_V_V \
    op interface \
    ports { out_1_59_V_V_din { O 8 vector } out_1_59_V_V_full_n { I 1 bit } out_1_59_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 233 \
    name out_1_60_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_60_V_V \
    op interface \
    ports { out_1_60_V_V_din { O 8 vector } out_1_60_V_V_full_n { I 1 bit } out_1_60_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 234 \
    name out_1_61_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_61_V_V \
    op interface \
    ports { out_1_61_V_V_din { O 8 vector } out_1_61_V_V_full_n { I 1 bit } out_1_61_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 235 \
    name out_1_62_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_62_V_V \
    op interface \
    ports { out_1_62_V_V_din { O 8 vector } out_1_62_V_V_full_n { I 1 bit } out_1_62_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 236 \
    name out_1_63_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_63_V_V \
    op interface \
    ports { out_1_63_V_V_din { O 8 vector } out_1_63_V_V_full_n { I 1 bit } out_1_63_V_V_write { O 1 bit } } \
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


