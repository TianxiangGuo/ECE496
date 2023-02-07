# This script segment is generated automatically by AutoPilot

set id 819
set name kernel_4_mul_mul_13ns_16ns_29_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 13
set in0_signed 0
set in1_width 16
set in1_signed 0
set out_width 29
set exp i0*i1
set arg_lists {i0 {13 0 +} i1 {16 0 +} p {29 0 +} acc {0} }
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


set id 820
set name kernel_4_am_addmul_24s_24s_8s_32_1_1
set corename simcore_am
set op am
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 24
set in0_signed 1
set in1_width 24
set in1_signed 1
set in2_width 8
set in2_signed 1
set out_width 32
set exp (i0+i1)*i2
set arg_lists {i0 {24 1 +} i1 {24 1 +} s {25 1 +} i2 {8 1 +} p {32 1 +} c_expval {c} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_am] == "ap_gen_simcore_am"} {
eval "ap_gen_simcore_am { \
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
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_am, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op am
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
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
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
    id 886 \
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
    id 887 \
    name in_n_c_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_n_c_V_V \
    op interface \
    ports { in_n_c_V_V_dout { I 32 vector } in_n_c_V_V_empty_n { I 1 bit } in_n_c_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 888 \
    name in_buffer_1_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V \
    op interface \
    ports { in_buffer_1_V_V_dout { I 8 vector } in_buffer_1_V_V_empty_n { I 1 bit } in_buffer_1_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 889 \
    name in_buffer_1_V_V1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1 \
    op interface \
    ports { in_buffer_1_V_V1_dout { I 8 vector } in_buffer_1_V_V1_empty_n { I 1 bit } in_buffer_1_V_V1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 890 \
    name in_buffer_1_V_V2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V2 \
    op interface \
    ports { in_buffer_1_V_V2_dout { I 8 vector } in_buffer_1_V_V2_empty_n { I 1 bit } in_buffer_1_V_V2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 891 \
    name in_buffer_1_V_V3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V3 \
    op interface \
    ports { in_buffer_1_V_V3_dout { I 8 vector } in_buffer_1_V_V3_empty_n { I 1 bit } in_buffer_1_V_V3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 892 \
    name in_buffer_1_V_V4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V4 \
    op interface \
    ports { in_buffer_1_V_V4_dout { I 8 vector } in_buffer_1_V_V4_empty_n { I 1 bit } in_buffer_1_V_V4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 893 \
    name in_buffer_1_V_V5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V5 \
    op interface \
    ports { in_buffer_1_V_V5_dout { I 8 vector } in_buffer_1_V_V5_empty_n { I 1 bit } in_buffer_1_V_V5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 894 \
    name in_buffer_1_V_V6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V6 \
    op interface \
    ports { in_buffer_1_V_V6_dout { I 8 vector } in_buffer_1_V_V6_empty_n { I 1 bit } in_buffer_1_V_V6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 895 \
    name in_buffer_1_V_V7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V7 \
    op interface \
    ports { in_buffer_1_V_V7_dout { I 8 vector } in_buffer_1_V_V7_empty_n { I 1 bit } in_buffer_1_V_V7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 896 \
    name in_buffer_1_V_V8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V8 \
    op interface \
    ports { in_buffer_1_V_V8_dout { I 8 vector } in_buffer_1_V_V8_empty_n { I 1 bit } in_buffer_1_V_V8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 897 \
    name in_buffer_1_V_V9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V9 \
    op interface \
    ports { in_buffer_1_V_V9_dout { I 8 vector } in_buffer_1_V_V9_empty_n { I 1 bit } in_buffer_1_V_V9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 898 \
    name in_buffer_1_V_V10 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V10 \
    op interface \
    ports { in_buffer_1_V_V10_dout { I 8 vector } in_buffer_1_V_V10_empty_n { I 1 bit } in_buffer_1_V_V10_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 899 \
    name in_buffer_1_V_V11 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V11 \
    op interface \
    ports { in_buffer_1_V_V11_dout { I 8 vector } in_buffer_1_V_V11_empty_n { I 1 bit } in_buffer_1_V_V11_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 900 \
    name in_buffer_1_V_V12 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V12 \
    op interface \
    ports { in_buffer_1_V_V12_dout { I 8 vector } in_buffer_1_V_V12_empty_n { I 1 bit } in_buffer_1_V_V12_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 901 \
    name in_buffer_1_V_V13 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V13 \
    op interface \
    ports { in_buffer_1_V_V13_dout { I 8 vector } in_buffer_1_V_V13_empty_n { I 1 bit } in_buffer_1_V_V13_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 902 \
    name in_buffer_1_V_V14 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V14 \
    op interface \
    ports { in_buffer_1_V_V14_dout { I 8 vector } in_buffer_1_V_V14_empty_n { I 1 bit } in_buffer_1_V_V14_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 903 \
    name in_buffer_1_V_V15 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15 \
    op interface \
    ports { in_buffer_1_V_V15_dout { I 8 vector } in_buffer_1_V_V15_empty_n { I 1 bit } in_buffer_1_V_V15_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 904 \
    name in_buffer_1_V_V16 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16 \
    op interface \
    ports { in_buffer_1_V_V16_dout { I 8 vector } in_buffer_1_V_V16_empty_n { I 1 bit } in_buffer_1_V_V16_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 905 \
    name in_buffer_1_V_V17 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V17 \
    op interface \
    ports { in_buffer_1_V_V17_dout { I 8 vector } in_buffer_1_V_V17_empty_n { I 1 bit } in_buffer_1_V_V17_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 906 \
    name in_buffer_1_V_V18 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V18 \
    op interface \
    ports { in_buffer_1_V_V18_dout { I 8 vector } in_buffer_1_V_V18_empty_n { I 1 bit } in_buffer_1_V_V18_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 907 \
    name in_buffer_1_V_V19 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V19 \
    op interface \
    ports { in_buffer_1_V_V19_dout { I 8 vector } in_buffer_1_V_V19_empty_n { I 1 bit } in_buffer_1_V_V19_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 908 \
    name in_buffer_1_V_V20 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V20 \
    op interface \
    ports { in_buffer_1_V_V20_dout { I 8 vector } in_buffer_1_V_V20_empty_n { I 1 bit } in_buffer_1_V_V20_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 909 \
    name in_buffer_1_V_V21 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V21 \
    op interface \
    ports { in_buffer_1_V_V21_dout { I 8 vector } in_buffer_1_V_V21_empty_n { I 1 bit } in_buffer_1_V_V21_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 910 \
    name in_buffer_1_V_V22 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V22 \
    op interface \
    ports { in_buffer_1_V_V22_dout { I 8 vector } in_buffer_1_V_V22_empty_n { I 1 bit } in_buffer_1_V_V22_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 911 \
    name in_buffer_1_V_V23 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V23 \
    op interface \
    ports { in_buffer_1_V_V23_dout { I 8 vector } in_buffer_1_V_V23_empty_n { I 1 bit } in_buffer_1_V_V23_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 912 \
    name in_buffer_1_V_V24 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V24 \
    op interface \
    ports { in_buffer_1_V_V24_dout { I 8 vector } in_buffer_1_V_V24_empty_n { I 1 bit } in_buffer_1_V_V24_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 913 \
    name in_buffer_1_V_V25 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V25 \
    op interface \
    ports { in_buffer_1_V_V25_dout { I 8 vector } in_buffer_1_V_V25_empty_n { I 1 bit } in_buffer_1_V_V25_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 914 \
    name in_buffer_1_V_V26 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V26 \
    op interface \
    ports { in_buffer_1_V_V26_dout { I 8 vector } in_buffer_1_V_V26_empty_n { I 1 bit } in_buffer_1_V_V26_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 915 \
    name in_buffer_1_V_V27 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V27 \
    op interface \
    ports { in_buffer_1_V_V27_dout { I 8 vector } in_buffer_1_V_V27_empty_n { I 1 bit } in_buffer_1_V_V27_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 916 \
    name in_buffer_1_V_V28 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V28 \
    op interface \
    ports { in_buffer_1_V_V28_dout { I 8 vector } in_buffer_1_V_V28_empty_n { I 1 bit } in_buffer_1_V_V28_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 917 \
    name in_buffer_1_V_V29 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V29 \
    op interface \
    ports { in_buffer_1_V_V29_dout { I 8 vector } in_buffer_1_V_V29_empty_n { I 1 bit } in_buffer_1_V_V29_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 918 \
    name in_buffer_1_V_V30 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V30 \
    op interface \
    ports { in_buffer_1_V_V30_dout { I 8 vector } in_buffer_1_V_V30_empty_n { I 1 bit } in_buffer_1_V_V30_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 919 \
    name in_buffer_1_V_V31 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V31 \
    op interface \
    ports { in_buffer_1_V_V31_dout { I 8 vector } in_buffer_1_V_V31_empty_n { I 1 bit } in_buffer_1_V_V31_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 920 \
    name in_buffer_1_V_V32 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V32 \
    op interface \
    ports { in_buffer_1_V_V32_dout { I 8 vector } in_buffer_1_V_V32_empty_n { I 1 bit } in_buffer_1_V_V32_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 921 \
    name in_buffer_1_V_V33 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V33 \
    op interface \
    ports { in_buffer_1_V_V33_dout { I 8 vector } in_buffer_1_V_V33_empty_n { I 1 bit } in_buffer_1_V_V33_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 922 \
    name in_buffer_1_V_V34 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V34 \
    op interface \
    ports { in_buffer_1_V_V34_dout { I 8 vector } in_buffer_1_V_V34_empty_n { I 1 bit } in_buffer_1_V_V34_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 923 \
    name in_buffer_1_V_V35 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V35 \
    op interface \
    ports { in_buffer_1_V_V35_dout { I 8 vector } in_buffer_1_V_V35_empty_n { I 1 bit } in_buffer_1_V_V35_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 924 \
    name in_buffer_1_V_V36 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V36 \
    op interface \
    ports { in_buffer_1_V_V36_dout { I 8 vector } in_buffer_1_V_V36_empty_n { I 1 bit } in_buffer_1_V_V36_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 925 \
    name in_buffer_1_V_V37 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V37 \
    op interface \
    ports { in_buffer_1_V_V37_dout { I 8 vector } in_buffer_1_V_V37_empty_n { I 1 bit } in_buffer_1_V_V37_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 926 \
    name in_buffer_1_V_V38 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V38 \
    op interface \
    ports { in_buffer_1_V_V38_dout { I 8 vector } in_buffer_1_V_V38_empty_n { I 1 bit } in_buffer_1_V_V38_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 927 \
    name in_buffer_1_V_V39 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V39 \
    op interface \
    ports { in_buffer_1_V_V39_dout { I 8 vector } in_buffer_1_V_V39_empty_n { I 1 bit } in_buffer_1_V_V39_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 928 \
    name in_buffer_1_V_V40 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V40 \
    op interface \
    ports { in_buffer_1_V_V40_dout { I 8 vector } in_buffer_1_V_V40_empty_n { I 1 bit } in_buffer_1_V_V40_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 929 \
    name in_buffer_1_V_V41 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V41 \
    op interface \
    ports { in_buffer_1_V_V41_dout { I 8 vector } in_buffer_1_V_V41_empty_n { I 1 bit } in_buffer_1_V_V41_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 930 \
    name in_buffer_1_V_V42 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V42 \
    op interface \
    ports { in_buffer_1_V_V42_dout { I 8 vector } in_buffer_1_V_V42_empty_n { I 1 bit } in_buffer_1_V_V42_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 931 \
    name in_buffer_1_V_V43 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V43 \
    op interface \
    ports { in_buffer_1_V_V43_dout { I 8 vector } in_buffer_1_V_V43_empty_n { I 1 bit } in_buffer_1_V_V43_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 932 \
    name in_buffer_1_V_V44 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V44 \
    op interface \
    ports { in_buffer_1_V_V44_dout { I 8 vector } in_buffer_1_V_V44_empty_n { I 1 bit } in_buffer_1_V_V44_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 933 \
    name in_buffer_1_V_V45 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V45 \
    op interface \
    ports { in_buffer_1_V_V45_dout { I 8 vector } in_buffer_1_V_V45_empty_n { I 1 bit } in_buffer_1_V_V45_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 934 \
    name in_buffer_1_V_V46 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V46 \
    op interface \
    ports { in_buffer_1_V_V46_dout { I 8 vector } in_buffer_1_V_V46_empty_n { I 1 bit } in_buffer_1_V_V46_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 935 \
    name in_buffer_1_V_V47 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V47 \
    op interface \
    ports { in_buffer_1_V_V47_dout { I 8 vector } in_buffer_1_V_V47_empty_n { I 1 bit } in_buffer_1_V_V47_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 936 \
    name in_buffer_1_V_V48 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V48 \
    op interface \
    ports { in_buffer_1_V_V48_dout { I 8 vector } in_buffer_1_V_V48_empty_n { I 1 bit } in_buffer_1_V_V48_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 937 \
    name in_buffer_1_V_V49 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V49 \
    op interface \
    ports { in_buffer_1_V_V49_dout { I 8 vector } in_buffer_1_V_V49_empty_n { I 1 bit } in_buffer_1_V_V49_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 938 \
    name in_buffer_1_V_V50 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V50 \
    op interface \
    ports { in_buffer_1_V_V50_dout { I 8 vector } in_buffer_1_V_V50_empty_n { I 1 bit } in_buffer_1_V_V50_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 939 \
    name in_buffer_1_V_V51 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V51 \
    op interface \
    ports { in_buffer_1_V_V51_dout { I 8 vector } in_buffer_1_V_V51_empty_n { I 1 bit } in_buffer_1_V_V51_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 940 \
    name in_buffer_1_V_V52 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V52 \
    op interface \
    ports { in_buffer_1_V_V52_dout { I 8 vector } in_buffer_1_V_V52_empty_n { I 1 bit } in_buffer_1_V_V52_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 941 \
    name in_buffer_1_V_V53 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V53 \
    op interface \
    ports { in_buffer_1_V_V53_dout { I 8 vector } in_buffer_1_V_V53_empty_n { I 1 bit } in_buffer_1_V_V53_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 942 \
    name in_buffer_1_V_V54 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V54 \
    op interface \
    ports { in_buffer_1_V_V54_dout { I 8 vector } in_buffer_1_V_V54_empty_n { I 1 bit } in_buffer_1_V_V54_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 943 \
    name in_buffer_1_V_V55 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V55 \
    op interface \
    ports { in_buffer_1_V_V55_dout { I 8 vector } in_buffer_1_V_V55_empty_n { I 1 bit } in_buffer_1_V_V55_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 944 \
    name in_buffer_1_V_V56 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V56 \
    op interface \
    ports { in_buffer_1_V_V56_dout { I 8 vector } in_buffer_1_V_V56_empty_n { I 1 bit } in_buffer_1_V_V56_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 945 \
    name in_buffer_1_V_V57 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V57 \
    op interface \
    ports { in_buffer_1_V_V57_dout { I 8 vector } in_buffer_1_V_V57_empty_n { I 1 bit } in_buffer_1_V_V57_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 946 \
    name in_buffer_1_V_V58 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V58 \
    op interface \
    ports { in_buffer_1_V_V58_dout { I 8 vector } in_buffer_1_V_V58_empty_n { I 1 bit } in_buffer_1_V_V58_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 947 \
    name in_buffer_1_V_V59 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V59 \
    op interface \
    ports { in_buffer_1_V_V59_dout { I 8 vector } in_buffer_1_V_V59_empty_n { I 1 bit } in_buffer_1_V_V59_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 948 \
    name in_buffer_1_V_V60 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V60 \
    op interface \
    ports { in_buffer_1_V_V60_dout { I 8 vector } in_buffer_1_V_V60_empty_n { I 1 bit } in_buffer_1_V_V60_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 949 \
    name in_buffer_1_V_V61 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V61 \
    op interface \
    ports { in_buffer_1_V_V61_dout { I 8 vector } in_buffer_1_V_V61_empty_n { I 1 bit } in_buffer_1_V_V61_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 950 \
    name in_buffer_1_V_V62 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V62 \
    op interface \
    ports { in_buffer_1_V_V62_dout { I 8 vector } in_buffer_1_V_V62_empty_n { I 1 bit } in_buffer_1_V_V62_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 951 \
    name in_buffer_1_V_V63 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V63 \
    op interface \
    ports { in_buffer_1_V_V63_dout { I 8 vector } in_buffer_1_V_V63_empty_n { I 1 bit } in_buffer_1_V_V63_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 952 \
    name in_buffer_2_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V \
    op interface \
    ports { in_buffer_2_V_V_dout { I 8 vector } in_buffer_2_V_V_empty_n { I 1 bit } in_buffer_2_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 953 \
    name in_buffer_2_V_V1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V1 \
    op interface \
    ports { in_buffer_2_V_V1_dout { I 8 vector } in_buffer_2_V_V1_empty_n { I 1 bit } in_buffer_2_V_V1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 954 \
    name in_buffer_2_V_V2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V2 \
    op interface \
    ports { in_buffer_2_V_V2_dout { I 8 vector } in_buffer_2_V_V2_empty_n { I 1 bit } in_buffer_2_V_V2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 955 \
    name in_buffer_2_V_V3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V3 \
    op interface \
    ports { in_buffer_2_V_V3_dout { I 8 vector } in_buffer_2_V_V3_empty_n { I 1 bit } in_buffer_2_V_V3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 956 \
    name in_buffer_2_V_V4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V4 \
    op interface \
    ports { in_buffer_2_V_V4_dout { I 8 vector } in_buffer_2_V_V4_empty_n { I 1 bit } in_buffer_2_V_V4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 957 \
    name in_buffer_2_V_V5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V5 \
    op interface \
    ports { in_buffer_2_V_V5_dout { I 8 vector } in_buffer_2_V_V5_empty_n { I 1 bit } in_buffer_2_V_V5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 958 \
    name in_buffer_2_V_V6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6 \
    op interface \
    ports { in_buffer_2_V_V6_dout { I 8 vector } in_buffer_2_V_V6_empty_n { I 1 bit } in_buffer_2_V_V6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 959 \
    name in_buffer_2_V_V7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V7 \
    op interface \
    ports { in_buffer_2_V_V7_dout { I 8 vector } in_buffer_2_V_V7_empty_n { I 1 bit } in_buffer_2_V_V7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 960 \
    name in_buffer_2_V_V8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V8 \
    op interface \
    ports { in_buffer_2_V_V8_dout { I 8 vector } in_buffer_2_V_V8_empty_n { I 1 bit } in_buffer_2_V_V8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 961 \
    name in_buffer_2_V_V9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V9 \
    op interface \
    ports { in_buffer_2_V_V9_dout { I 8 vector } in_buffer_2_V_V9_empty_n { I 1 bit } in_buffer_2_V_V9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 962 \
    name in_buffer_2_V_V10 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V10 \
    op interface \
    ports { in_buffer_2_V_V10_dout { I 8 vector } in_buffer_2_V_V10_empty_n { I 1 bit } in_buffer_2_V_V10_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 963 \
    name in_buffer_2_V_V11 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V11 \
    op interface \
    ports { in_buffer_2_V_V11_dout { I 8 vector } in_buffer_2_V_V11_empty_n { I 1 bit } in_buffer_2_V_V11_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 964 \
    name in_buffer_2_V_V12 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V12 \
    op interface \
    ports { in_buffer_2_V_V12_dout { I 8 vector } in_buffer_2_V_V12_empty_n { I 1 bit } in_buffer_2_V_V12_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 965 \
    name in_buffer_2_V_V13 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V13 \
    op interface \
    ports { in_buffer_2_V_V13_dout { I 8 vector } in_buffer_2_V_V13_empty_n { I 1 bit } in_buffer_2_V_V13_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 966 \
    name in_buffer_2_V_V14 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V14 \
    op interface \
    ports { in_buffer_2_V_V14_dout { I 8 vector } in_buffer_2_V_V14_empty_n { I 1 bit } in_buffer_2_V_V14_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 967 \
    name in_buffer_2_V_V15 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V15 \
    op interface \
    ports { in_buffer_2_V_V15_dout { I 8 vector } in_buffer_2_V_V15_empty_n { I 1 bit } in_buffer_2_V_V15_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 968 \
    name in_buffer_2_V_V16 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V16 \
    op interface \
    ports { in_buffer_2_V_V16_dout { I 8 vector } in_buffer_2_V_V16_empty_n { I 1 bit } in_buffer_2_V_V16_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 969 \
    name in_buffer_2_V_V17 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V17 \
    op interface \
    ports { in_buffer_2_V_V17_dout { I 8 vector } in_buffer_2_V_V17_empty_n { I 1 bit } in_buffer_2_V_V17_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 970 \
    name in_buffer_2_V_V18 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18 \
    op interface \
    ports { in_buffer_2_V_V18_dout { I 8 vector } in_buffer_2_V_V18_empty_n { I 1 bit } in_buffer_2_V_V18_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 971 \
    name in_buffer_2_V_V19 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19 \
    op interface \
    ports { in_buffer_2_V_V19_dout { I 8 vector } in_buffer_2_V_V19_empty_n { I 1 bit } in_buffer_2_V_V19_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 972 \
    name in_buffer_2_V_V20 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V20 \
    op interface \
    ports { in_buffer_2_V_V20_dout { I 8 vector } in_buffer_2_V_V20_empty_n { I 1 bit } in_buffer_2_V_V20_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 973 \
    name in_buffer_2_V_V21 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V21 \
    op interface \
    ports { in_buffer_2_V_V21_dout { I 8 vector } in_buffer_2_V_V21_empty_n { I 1 bit } in_buffer_2_V_V21_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 974 \
    name in_buffer_2_V_V22 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V22 \
    op interface \
    ports { in_buffer_2_V_V22_dout { I 8 vector } in_buffer_2_V_V22_empty_n { I 1 bit } in_buffer_2_V_V22_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 975 \
    name in_buffer_2_V_V23 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V23 \
    op interface \
    ports { in_buffer_2_V_V23_dout { I 8 vector } in_buffer_2_V_V23_empty_n { I 1 bit } in_buffer_2_V_V23_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 976 \
    name in_buffer_2_V_V24 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V24 \
    op interface \
    ports { in_buffer_2_V_V24_dout { I 8 vector } in_buffer_2_V_V24_empty_n { I 1 bit } in_buffer_2_V_V24_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 977 \
    name in_buffer_2_V_V25 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25 \
    op interface \
    ports { in_buffer_2_V_V25_dout { I 8 vector } in_buffer_2_V_V25_empty_n { I 1 bit } in_buffer_2_V_V25_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 978 \
    name in_buffer_2_V_V26 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V26 \
    op interface \
    ports { in_buffer_2_V_V26_dout { I 8 vector } in_buffer_2_V_V26_empty_n { I 1 bit } in_buffer_2_V_V26_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 979 \
    name in_buffer_2_V_V27 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V27 \
    op interface \
    ports { in_buffer_2_V_V27_dout { I 8 vector } in_buffer_2_V_V27_empty_n { I 1 bit } in_buffer_2_V_V27_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 980 \
    name in_buffer_2_V_V28 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V28 \
    op interface \
    ports { in_buffer_2_V_V28_dout { I 8 vector } in_buffer_2_V_V28_empty_n { I 1 bit } in_buffer_2_V_V28_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 981 \
    name in_buffer_2_V_V29 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V29 \
    op interface \
    ports { in_buffer_2_V_V29_dout { I 8 vector } in_buffer_2_V_V29_empty_n { I 1 bit } in_buffer_2_V_V29_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 982 \
    name in_buffer_2_V_V30 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V30 \
    op interface \
    ports { in_buffer_2_V_V30_dout { I 8 vector } in_buffer_2_V_V30_empty_n { I 1 bit } in_buffer_2_V_V30_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 983 \
    name in_buffer_2_V_V31 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V31 \
    op interface \
    ports { in_buffer_2_V_V31_dout { I 8 vector } in_buffer_2_V_V31_empty_n { I 1 bit } in_buffer_2_V_V31_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 984 \
    name in_buffer_2_V_V32 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V32 \
    op interface \
    ports { in_buffer_2_V_V32_dout { I 8 vector } in_buffer_2_V_V32_empty_n { I 1 bit } in_buffer_2_V_V32_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 985 \
    name in_buffer_2_V_V33 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V33 \
    op interface \
    ports { in_buffer_2_V_V33_dout { I 8 vector } in_buffer_2_V_V33_empty_n { I 1 bit } in_buffer_2_V_V33_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 986 \
    name in_buffer_2_V_V34 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V34 \
    op interface \
    ports { in_buffer_2_V_V34_dout { I 8 vector } in_buffer_2_V_V34_empty_n { I 1 bit } in_buffer_2_V_V34_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 987 \
    name in_buffer_2_V_V35 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V35 \
    op interface \
    ports { in_buffer_2_V_V35_dout { I 8 vector } in_buffer_2_V_V35_empty_n { I 1 bit } in_buffer_2_V_V35_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 988 \
    name in_buffer_2_V_V36 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V36 \
    op interface \
    ports { in_buffer_2_V_V36_dout { I 8 vector } in_buffer_2_V_V36_empty_n { I 1 bit } in_buffer_2_V_V36_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 989 \
    name in_buffer_2_V_V37 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V37 \
    op interface \
    ports { in_buffer_2_V_V37_dout { I 8 vector } in_buffer_2_V_V37_empty_n { I 1 bit } in_buffer_2_V_V37_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 990 \
    name in_buffer_2_V_V38 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V38 \
    op interface \
    ports { in_buffer_2_V_V38_dout { I 8 vector } in_buffer_2_V_V38_empty_n { I 1 bit } in_buffer_2_V_V38_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 991 \
    name in_buffer_2_V_V39 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V39 \
    op interface \
    ports { in_buffer_2_V_V39_dout { I 8 vector } in_buffer_2_V_V39_empty_n { I 1 bit } in_buffer_2_V_V39_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 992 \
    name in_buffer_2_V_V40 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V40 \
    op interface \
    ports { in_buffer_2_V_V40_dout { I 8 vector } in_buffer_2_V_V40_empty_n { I 1 bit } in_buffer_2_V_V40_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 993 \
    name in_buffer_2_V_V41 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V41 \
    op interface \
    ports { in_buffer_2_V_V41_dout { I 8 vector } in_buffer_2_V_V41_empty_n { I 1 bit } in_buffer_2_V_V41_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 994 \
    name in_buffer_2_V_V42 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V42 \
    op interface \
    ports { in_buffer_2_V_V42_dout { I 8 vector } in_buffer_2_V_V42_empty_n { I 1 bit } in_buffer_2_V_V42_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 995 \
    name in_buffer_2_V_V43 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V43 \
    op interface \
    ports { in_buffer_2_V_V43_dout { I 8 vector } in_buffer_2_V_V43_empty_n { I 1 bit } in_buffer_2_V_V43_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 996 \
    name in_buffer_2_V_V44 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V44 \
    op interface \
    ports { in_buffer_2_V_V44_dout { I 8 vector } in_buffer_2_V_V44_empty_n { I 1 bit } in_buffer_2_V_V44_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 997 \
    name in_buffer_2_V_V45 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V45 \
    op interface \
    ports { in_buffer_2_V_V45_dout { I 8 vector } in_buffer_2_V_V45_empty_n { I 1 bit } in_buffer_2_V_V45_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 998 \
    name in_buffer_2_V_V46 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V46 \
    op interface \
    ports { in_buffer_2_V_V46_dout { I 8 vector } in_buffer_2_V_V46_empty_n { I 1 bit } in_buffer_2_V_V46_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 999 \
    name in_buffer_2_V_V47 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V47 \
    op interface \
    ports { in_buffer_2_V_V47_dout { I 8 vector } in_buffer_2_V_V47_empty_n { I 1 bit } in_buffer_2_V_V47_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1000 \
    name in_buffer_2_V_V48 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V48 \
    op interface \
    ports { in_buffer_2_V_V48_dout { I 8 vector } in_buffer_2_V_V48_empty_n { I 1 bit } in_buffer_2_V_V48_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1001 \
    name in_buffer_2_V_V49 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V49 \
    op interface \
    ports { in_buffer_2_V_V49_dout { I 8 vector } in_buffer_2_V_V49_empty_n { I 1 bit } in_buffer_2_V_V49_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1002 \
    name in_buffer_2_V_V50 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V50 \
    op interface \
    ports { in_buffer_2_V_V50_dout { I 8 vector } in_buffer_2_V_V50_empty_n { I 1 bit } in_buffer_2_V_V50_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1003 \
    name in_buffer_2_V_V51 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V51 \
    op interface \
    ports { in_buffer_2_V_V51_dout { I 8 vector } in_buffer_2_V_V51_empty_n { I 1 bit } in_buffer_2_V_V51_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1004 \
    name in_buffer_2_V_V52 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V52 \
    op interface \
    ports { in_buffer_2_V_V52_dout { I 8 vector } in_buffer_2_V_V52_empty_n { I 1 bit } in_buffer_2_V_V52_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1005 \
    name in_buffer_2_V_V53 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V53 \
    op interface \
    ports { in_buffer_2_V_V53_dout { I 8 vector } in_buffer_2_V_V53_empty_n { I 1 bit } in_buffer_2_V_V53_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1006 \
    name in_buffer_2_V_V54 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V54 \
    op interface \
    ports { in_buffer_2_V_V54_dout { I 8 vector } in_buffer_2_V_V54_empty_n { I 1 bit } in_buffer_2_V_V54_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1007 \
    name in_buffer_2_V_V55 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V55 \
    op interface \
    ports { in_buffer_2_V_V55_dout { I 8 vector } in_buffer_2_V_V55_empty_n { I 1 bit } in_buffer_2_V_V55_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1008 \
    name in_buffer_2_V_V56 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V56 \
    op interface \
    ports { in_buffer_2_V_V56_dout { I 8 vector } in_buffer_2_V_V56_empty_n { I 1 bit } in_buffer_2_V_V56_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1009 \
    name in_buffer_2_V_V57 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V57 \
    op interface \
    ports { in_buffer_2_V_V57_dout { I 8 vector } in_buffer_2_V_V57_empty_n { I 1 bit } in_buffer_2_V_V57_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1010 \
    name in_buffer_2_V_V58 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V58 \
    op interface \
    ports { in_buffer_2_V_V58_dout { I 8 vector } in_buffer_2_V_V58_empty_n { I 1 bit } in_buffer_2_V_V58_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1011 \
    name in_buffer_2_V_V59 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V59 \
    op interface \
    ports { in_buffer_2_V_V59_dout { I 8 vector } in_buffer_2_V_V59_empty_n { I 1 bit } in_buffer_2_V_V59_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1012 \
    name in_buffer_2_V_V60 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V60 \
    op interface \
    ports { in_buffer_2_V_V60_dout { I 8 vector } in_buffer_2_V_V60_empty_n { I 1 bit } in_buffer_2_V_V60_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1013 \
    name in_buffer_2_V_V61 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V61 \
    op interface \
    ports { in_buffer_2_V_V61_dout { I 8 vector } in_buffer_2_V_V61_empty_n { I 1 bit } in_buffer_2_V_V61_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1014 \
    name in_buffer_2_V_V62 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V62 \
    op interface \
    ports { in_buffer_2_V_V62_dout { I 8 vector } in_buffer_2_V_V62_empty_n { I 1 bit } in_buffer_2_V_V62_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1015 \
    name in_buffer_2_V_V63 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V63 \
    op interface \
    ports { in_buffer_2_V_V63_dout { I 8 vector } in_buffer_2_V_V63_empty_n { I 1 bit } in_buffer_2_V_V63_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1016 \
    name in_buffer_2_V_V256 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256 \
    op interface \
    ports { in_buffer_2_V_V256_dout { I 8 vector } in_buffer_2_V_V256_empty_n { I 1 bit } in_buffer_2_V_V256_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1017 \
    name in_buffer_2_V_V25664 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25664 \
    op interface \
    ports { in_buffer_2_V_V25664_dout { I 8 vector } in_buffer_2_V_V25664_empty_n { I 1 bit } in_buffer_2_V_V25664_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1018 \
    name in_buffer_2_V_V25665 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25665 \
    op interface \
    ports { in_buffer_2_V_V25665_dout { I 8 vector } in_buffer_2_V_V25665_empty_n { I 1 bit } in_buffer_2_V_V25665_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1019 \
    name in_buffer_2_V_V25666 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25666 \
    op interface \
    ports { in_buffer_2_V_V25666_dout { I 8 vector } in_buffer_2_V_V25666_empty_n { I 1 bit } in_buffer_2_V_V25666_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1020 \
    name in_buffer_2_V_V25667 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25667 \
    op interface \
    ports { in_buffer_2_V_V25667_dout { I 8 vector } in_buffer_2_V_V25667_empty_n { I 1 bit } in_buffer_2_V_V25667_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1021 \
    name in_buffer_2_V_V25668 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25668 \
    op interface \
    ports { in_buffer_2_V_V25668_dout { I 8 vector } in_buffer_2_V_V25668_empty_n { I 1 bit } in_buffer_2_V_V25668_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1022 \
    name in_buffer_2_V_V25669 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25669 \
    op interface \
    ports { in_buffer_2_V_V25669_dout { I 8 vector } in_buffer_2_V_V25669_empty_n { I 1 bit } in_buffer_2_V_V25669_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1023 \
    name in_buffer_2_V_V25670 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25670 \
    op interface \
    ports { in_buffer_2_V_V25670_dout { I 8 vector } in_buffer_2_V_V25670_empty_n { I 1 bit } in_buffer_2_V_V25670_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1024 \
    name in_buffer_2_V_V25671 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25671 \
    op interface \
    ports { in_buffer_2_V_V25671_dout { I 8 vector } in_buffer_2_V_V25671_empty_n { I 1 bit } in_buffer_2_V_V25671_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1025 \
    name in_buffer_2_V_V25672 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25672 \
    op interface \
    ports { in_buffer_2_V_V25672_dout { I 8 vector } in_buffer_2_V_V25672_empty_n { I 1 bit } in_buffer_2_V_V25672_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1026 \
    name in_buffer_2_V_V25673 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25673 \
    op interface \
    ports { in_buffer_2_V_V25673_dout { I 8 vector } in_buffer_2_V_V25673_empty_n { I 1 bit } in_buffer_2_V_V25673_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1027 \
    name in_buffer_2_V_V25674 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25674 \
    op interface \
    ports { in_buffer_2_V_V25674_dout { I 8 vector } in_buffer_2_V_V25674_empty_n { I 1 bit } in_buffer_2_V_V25674_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1028 \
    name in_buffer_2_V_V25675 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25675 \
    op interface \
    ports { in_buffer_2_V_V25675_dout { I 8 vector } in_buffer_2_V_V25675_empty_n { I 1 bit } in_buffer_2_V_V25675_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1029 \
    name in_buffer_2_V_V25676 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25676 \
    op interface \
    ports { in_buffer_2_V_V25676_dout { I 8 vector } in_buffer_2_V_V25676_empty_n { I 1 bit } in_buffer_2_V_V25676_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1030 \
    name in_buffer_2_V_V25677 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25677 \
    op interface \
    ports { in_buffer_2_V_V25677_dout { I 8 vector } in_buffer_2_V_V25677_empty_n { I 1 bit } in_buffer_2_V_V25677_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1031 \
    name in_buffer_2_V_V25678 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25678 \
    op interface \
    ports { in_buffer_2_V_V25678_dout { I 8 vector } in_buffer_2_V_V25678_empty_n { I 1 bit } in_buffer_2_V_V25678_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1032 \
    name in_buffer_2_V_V25679 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25679 \
    op interface \
    ports { in_buffer_2_V_V25679_dout { I 8 vector } in_buffer_2_V_V25679_empty_n { I 1 bit } in_buffer_2_V_V25679_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1033 \
    name in_buffer_2_V_V25680 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25680 \
    op interface \
    ports { in_buffer_2_V_V25680_dout { I 8 vector } in_buffer_2_V_V25680_empty_n { I 1 bit } in_buffer_2_V_V25680_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1034 \
    name in_buffer_2_V_V25681 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25681 \
    op interface \
    ports { in_buffer_2_V_V25681_dout { I 8 vector } in_buffer_2_V_V25681_empty_n { I 1 bit } in_buffer_2_V_V25681_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1035 \
    name in_buffer_2_V_V25682 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25682 \
    op interface \
    ports { in_buffer_2_V_V25682_dout { I 8 vector } in_buffer_2_V_V25682_empty_n { I 1 bit } in_buffer_2_V_V25682_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1036 \
    name in_buffer_2_V_V25683 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25683 \
    op interface \
    ports { in_buffer_2_V_V25683_dout { I 8 vector } in_buffer_2_V_V25683_empty_n { I 1 bit } in_buffer_2_V_V25683_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1037 \
    name in_buffer_2_V_V25684 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25684 \
    op interface \
    ports { in_buffer_2_V_V25684_dout { I 8 vector } in_buffer_2_V_V25684_empty_n { I 1 bit } in_buffer_2_V_V25684_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1038 \
    name in_buffer_2_V_V25685 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25685 \
    op interface \
    ports { in_buffer_2_V_V25685_dout { I 8 vector } in_buffer_2_V_V25685_empty_n { I 1 bit } in_buffer_2_V_V25685_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1039 \
    name in_buffer_2_V_V25686 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25686 \
    op interface \
    ports { in_buffer_2_V_V25686_dout { I 8 vector } in_buffer_2_V_V25686_empty_n { I 1 bit } in_buffer_2_V_V25686_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1040 \
    name in_buffer_2_V_V25687 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25687 \
    op interface \
    ports { in_buffer_2_V_V25687_dout { I 8 vector } in_buffer_2_V_V25687_empty_n { I 1 bit } in_buffer_2_V_V25687_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1041 \
    name in_buffer_2_V_V25688 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25688 \
    op interface \
    ports { in_buffer_2_V_V25688_dout { I 8 vector } in_buffer_2_V_V25688_empty_n { I 1 bit } in_buffer_2_V_V25688_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1042 \
    name in_buffer_2_V_V25689 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25689 \
    op interface \
    ports { in_buffer_2_V_V25689_dout { I 8 vector } in_buffer_2_V_V25689_empty_n { I 1 bit } in_buffer_2_V_V25689_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1043 \
    name in_buffer_2_V_V25690 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25690 \
    op interface \
    ports { in_buffer_2_V_V25690_dout { I 8 vector } in_buffer_2_V_V25690_empty_n { I 1 bit } in_buffer_2_V_V25690_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1044 \
    name in_buffer_2_V_V25691 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25691 \
    op interface \
    ports { in_buffer_2_V_V25691_dout { I 8 vector } in_buffer_2_V_V25691_empty_n { I 1 bit } in_buffer_2_V_V25691_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1045 \
    name in_buffer_2_V_V25692 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25692 \
    op interface \
    ports { in_buffer_2_V_V25692_dout { I 8 vector } in_buffer_2_V_V25692_empty_n { I 1 bit } in_buffer_2_V_V25692_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1046 \
    name in_buffer_2_V_V25693 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25693 \
    op interface \
    ports { in_buffer_2_V_V25693_dout { I 8 vector } in_buffer_2_V_V25693_empty_n { I 1 bit } in_buffer_2_V_V25693_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1047 \
    name in_buffer_2_V_V25694 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25694 \
    op interface \
    ports { in_buffer_2_V_V25694_dout { I 8 vector } in_buffer_2_V_V25694_empty_n { I 1 bit } in_buffer_2_V_V25694_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1048 \
    name in_buffer_2_V_V25695 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25695 \
    op interface \
    ports { in_buffer_2_V_V25695_dout { I 8 vector } in_buffer_2_V_V25695_empty_n { I 1 bit } in_buffer_2_V_V25695_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1049 \
    name in_buffer_2_V_V25696 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25696 \
    op interface \
    ports { in_buffer_2_V_V25696_dout { I 8 vector } in_buffer_2_V_V25696_empty_n { I 1 bit } in_buffer_2_V_V25696_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1050 \
    name in_buffer_2_V_V25697 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25697 \
    op interface \
    ports { in_buffer_2_V_V25697_dout { I 8 vector } in_buffer_2_V_V25697_empty_n { I 1 bit } in_buffer_2_V_V25697_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1051 \
    name in_buffer_2_V_V25698 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25698 \
    op interface \
    ports { in_buffer_2_V_V25698_dout { I 8 vector } in_buffer_2_V_V25698_empty_n { I 1 bit } in_buffer_2_V_V25698_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1052 \
    name in_buffer_2_V_V25699 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V25699 \
    op interface \
    ports { in_buffer_2_V_V25699_dout { I 8 vector } in_buffer_2_V_V25699_empty_n { I 1 bit } in_buffer_2_V_V25699_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1053 \
    name in_buffer_2_V_V256100 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256100 \
    op interface \
    ports { in_buffer_2_V_V256100_dout { I 8 vector } in_buffer_2_V_V256100_empty_n { I 1 bit } in_buffer_2_V_V256100_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1054 \
    name in_buffer_2_V_V256101 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256101 \
    op interface \
    ports { in_buffer_2_V_V256101_dout { I 8 vector } in_buffer_2_V_V256101_empty_n { I 1 bit } in_buffer_2_V_V256101_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1055 \
    name in_buffer_2_V_V256102 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256102 \
    op interface \
    ports { in_buffer_2_V_V256102_dout { I 8 vector } in_buffer_2_V_V256102_empty_n { I 1 bit } in_buffer_2_V_V256102_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1056 \
    name in_buffer_2_V_V256103 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256103 \
    op interface \
    ports { in_buffer_2_V_V256103_dout { I 8 vector } in_buffer_2_V_V256103_empty_n { I 1 bit } in_buffer_2_V_V256103_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1057 \
    name in_buffer_2_V_V256104 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256104 \
    op interface \
    ports { in_buffer_2_V_V256104_dout { I 8 vector } in_buffer_2_V_V256104_empty_n { I 1 bit } in_buffer_2_V_V256104_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1058 \
    name in_buffer_2_V_V256105 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256105 \
    op interface \
    ports { in_buffer_2_V_V256105_dout { I 8 vector } in_buffer_2_V_V256105_empty_n { I 1 bit } in_buffer_2_V_V256105_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1059 \
    name in_buffer_2_V_V256106 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256106 \
    op interface \
    ports { in_buffer_2_V_V256106_dout { I 8 vector } in_buffer_2_V_V256106_empty_n { I 1 bit } in_buffer_2_V_V256106_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1060 \
    name in_buffer_2_V_V256107 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256107 \
    op interface \
    ports { in_buffer_2_V_V256107_dout { I 8 vector } in_buffer_2_V_V256107_empty_n { I 1 bit } in_buffer_2_V_V256107_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1061 \
    name in_buffer_2_V_V256108 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256108 \
    op interface \
    ports { in_buffer_2_V_V256108_dout { I 8 vector } in_buffer_2_V_V256108_empty_n { I 1 bit } in_buffer_2_V_V256108_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1062 \
    name in_buffer_2_V_V256109 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256109 \
    op interface \
    ports { in_buffer_2_V_V256109_dout { I 8 vector } in_buffer_2_V_V256109_empty_n { I 1 bit } in_buffer_2_V_V256109_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1063 \
    name in_buffer_2_V_V256110 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256110 \
    op interface \
    ports { in_buffer_2_V_V256110_dout { I 8 vector } in_buffer_2_V_V256110_empty_n { I 1 bit } in_buffer_2_V_V256110_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1064 \
    name in_buffer_2_V_V256111 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256111 \
    op interface \
    ports { in_buffer_2_V_V256111_dout { I 8 vector } in_buffer_2_V_V256111_empty_n { I 1 bit } in_buffer_2_V_V256111_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1065 \
    name in_buffer_2_V_V256112 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256112 \
    op interface \
    ports { in_buffer_2_V_V256112_dout { I 8 vector } in_buffer_2_V_V256112_empty_n { I 1 bit } in_buffer_2_V_V256112_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1066 \
    name in_buffer_2_V_V256113 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256113 \
    op interface \
    ports { in_buffer_2_V_V256113_dout { I 8 vector } in_buffer_2_V_V256113_empty_n { I 1 bit } in_buffer_2_V_V256113_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1067 \
    name in_buffer_2_V_V256114 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256114 \
    op interface \
    ports { in_buffer_2_V_V256114_dout { I 8 vector } in_buffer_2_V_V256114_empty_n { I 1 bit } in_buffer_2_V_V256114_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1068 \
    name in_buffer_2_V_V256115 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256115 \
    op interface \
    ports { in_buffer_2_V_V256115_dout { I 8 vector } in_buffer_2_V_V256115_empty_n { I 1 bit } in_buffer_2_V_V256115_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1069 \
    name in_buffer_2_V_V256116 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256116 \
    op interface \
    ports { in_buffer_2_V_V256116_dout { I 8 vector } in_buffer_2_V_V256116_empty_n { I 1 bit } in_buffer_2_V_V256116_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1070 \
    name in_buffer_2_V_V256117 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256117 \
    op interface \
    ports { in_buffer_2_V_V256117_dout { I 8 vector } in_buffer_2_V_V256117_empty_n { I 1 bit } in_buffer_2_V_V256117_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1071 \
    name in_buffer_2_V_V256118 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256118 \
    op interface \
    ports { in_buffer_2_V_V256118_dout { I 8 vector } in_buffer_2_V_V256118_empty_n { I 1 bit } in_buffer_2_V_V256118_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1072 \
    name in_buffer_2_V_V256119 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256119 \
    op interface \
    ports { in_buffer_2_V_V256119_dout { I 8 vector } in_buffer_2_V_V256119_empty_n { I 1 bit } in_buffer_2_V_V256119_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1073 \
    name in_buffer_2_V_V256120 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256120 \
    op interface \
    ports { in_buffer_2_V_V256120_dout { I 8 vector } in_buffer_2_V_V256120_empty_n { I 1 bit } in_buffer_2_V_V256120_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1074 \
    name in_buffer_2_V_V256121 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256121 \
    op interface \
    ports { in_buffer_2_V_V256121_dout { I 8 vector } in_buffer_2_V_V256121_empty_n { I 1 bit } in_buffer_2_V_V256121_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1075 \
    name in_buffer_2_V_V256122 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256122 \
    op interface \
    ports { in_buffer_2_V_V256122_dout { I 8 vector } in_buffer_2_V_V256122_empty_n { I 1 bit } in_buffer_2_V_V256122_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1076 \
    name in_buffer_2_V_V256123 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256123 \
    op interface \
    ports { in_buffer_2_V_V256123_dout { I 8 vector } in_buffer_2_V_V256123_empty_n { I 1 bit } in_buffer_2_V_V256123_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1077 \
    name in_buffer_2_V_V256124 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256124 \
    op interface \
    ports { in_buffer_2_V_V256124_dout { I 8 vector } in_buffer_2_V_V256124_empty_n { I 1 bit } in_buffer_2_V_V256124_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1078 \
    name in_buffer_2_V_V256125 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256125 \
    op interface \
    ports { in_buffer_2_V_V256125_dout { I 8 vector } in_buffer_2_V_V256125_empty_n { I 1 bit } in_buffer_2_V_V256125_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1079 \
    name in_buffer_2_V_V256126 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V256126 \
    op interface \
    ports { in_buffer_2_V_V256126_dout { I 8 vector } in_buffer_2_V_V256126_empty_n { I 1 bit } in_buffer_2_V_V256126_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1080 \
    name out_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V \
    op interface \
    ports { out_V_V_din { O 32 vector } out_V_V_full_n { I 1 bit } out_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1081 \
    name out_V_V260 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V260 \
    op interface \
    ports { out_V_V260_din { O 32 vector } out_V_V260_full_n { I 1 bit } out_V_V260_write { O 1 bit } } \
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


