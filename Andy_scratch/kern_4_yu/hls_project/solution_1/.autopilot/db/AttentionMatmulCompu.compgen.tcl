# This script segment is generated automatically by AutoPilot

set id 237
set name kernel_4_mul_mul_15ns_16ns_31_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 15
set in0_signed 0
set in1_width 16
set in1_signed 0
set out_width 31
set exp i0*i1
set arg_lists {i0 {15 0 +} i1 {16 0 +} p {31 0 +} acc {0} }
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


set id 238
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
    id 304 \
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
    id 305 \
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
    id 306 \
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
    id 307 \
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
    id 308 \
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
    id 309 \
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
    id 310 \
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
    id 311 \
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
    id 312 \
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
    id 313 \
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
    id 314 \
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
    id 315 \
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
    id 316 \
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
    id 317 \
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
    id 318 \
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
    id 319 \
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
    id 320 \
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
    id 321 \
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
    id 322 \
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
    id 323 \
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
    id 324 \
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
    id 325 \
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
    id 326 \
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
    id 327 \
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
    id 328 \
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
    id 329 \
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
    id 330 \
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
    id 331 \
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
    id 332 \
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
    id 333 \
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
    id 334 \
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
    id 335 \
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
    id 336 \
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
    id 337 \
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
    id 338 \
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
    id 339 \
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
    id 340 \
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
    id 341 \
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
    id 342 \
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
    id 343 \
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
    id 344 \
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
    id 345 \
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
    id 346 \
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
    id 347 \
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
    id 348 \
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
    id 349 \
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
    id 350 \
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
    id 351 \
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
    id 352 \
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
    id 353 \
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
    id 354 \
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
    id 355 \
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
    id 356 \
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
    id 357 \
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
    id 358 \
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
    id 359 \
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
    id 360 \
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
    id 361 \
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
    id 362 \
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
    id 363 \
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
    id 364 \
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
    id 365 \
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
    id 366 \
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
    id 367 \
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
    id 368 \
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
    id 369 \
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
    id 370 \
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
    id 371 \
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
    id 372 \
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
    id 373 \
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
    id 374 \
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
    id 375 \
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
    id 376 \
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
    id 377 \
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
    id 378 \
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
    id 379 \
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
    id 380 \
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
    id 381 \
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
    id 382 \
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
    id 383 \
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
    id 384 \
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
    id 385 \
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
    id 386 \
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
    id 387 \
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
    id 388 \
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
    id 389 \
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
    id 390 \
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
    id 391 \
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
    id 392 \
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
    id 393 \
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
    id 394 \
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
    id 395 \
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
    id 396 \
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
    id 397 \
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
    id 398 \
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
    id 399 \
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
    id 400 \
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
    id 401 \
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
    id 402 \
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
    id 403 \
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
    id 404 \
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
    id 405 \
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
    id 406 \
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
    id 407 \
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
    id 408 \
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
    id 409 \
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
    id 410 \
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
    id 411 \
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
    id 412 \
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
    id 413 \
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
    id 414 \
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
    id 415 \
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
    id 416 \
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
    id 417 \
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
    id 418 \
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
    id 419 \
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
    id 420 \
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
    id 421 \
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
    id 422 \
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
    id 423 \
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
    id 424 \
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
    id 425 \
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
    id 426 \
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
    id 427 \
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
    id 428 \
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
    id 429 \
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
    id 430 \
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
    id 431 \
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
    id 432 \
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
    id 433 \
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
    id 434 \
    name in_buffer_2_V_V64 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64 \
    op interface \
    ports { in_buffer_2_V_V64_dout { I 8 vector } in_buffer_2_V_V64_empty_n { I 1 bit } in_buffer_2_V_V64_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 435 \
    name in_buffer_2_V_V6464 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6464 \
    op interface \
    ports { in_buffer_2_V_V6464_dout { I 8 vector } in_buffer_2_V_V6464_empty_n { I 1 bit } in_buffer_2_V_V6464_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 436 \
    name in_buffer_2_V_V6465 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6465 \
    op interface \
    ports { in_buffer_2_V_V6465_dout { I 8 vector } in_buffer_2_V_V6465_empty_n { I 1 bit } in_buffer_2_V_V6465_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 437 \
    name in_buffer_2_V_V6466 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6466 \
    op interface \
    ports { in_buffer_2_V_V6466_dout { I 8 vector } in_buffer_2_V_V6466_empty_n { I 1 bit } in_buffer_2_V_V6466_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name in_buffer_2_V_V6467 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6467 \
    op interface \
    ports { in_buffer_2_V_V6467_dout { I 8 vector } in_buffer_2_V_V6467_empty_n { I 1 bit } in_buffer_2_V_V6467_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name in_buffer_2_V_V6468 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6468 \
    op interface \
    ports { in_buffer_2_V_V6468_dout { I 8 vector } in_buffer_2_V_V6468_empty_n { I 1 bit } in_buffer_2_V_V6468_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 440 \
    name in_buffer_2_V_V6469 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6469 \
    op interface \
    ports { in_buffer_2_V_V6469_dout { I 8 vector } in_buffer_2_V_V6469_empty_n { I 1 bit } in_buffer_2_V_V6469_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 441 \
    name in_buffer_2_V_V6470 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6470 \
    op interface \
    ports { in_buffer_2_V_V6470_dout { I 8 vector } in_buffer_2_V_V6470_empty_n { I 1 bit } in_buffer_2_V_V6470_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 442 \
    name in_buffer_2_V_V6471 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6471 \
    op interface \
    ports { in_buffer_2_V_V6471_dout { I 8 vector } in_buffer_2_V_V6471_empty_n { I 1 bit } in_buffer_2_V_V6471_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 443 \
    name in_buffer_2_V_V6472 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6472 \
    op interface \
    ports { in_buffer_2_V_V6472_dout { I 8 vector } in_buffer_2_V_V6472_empty_n { I 1 bit } in_buffer_2_V_V6472_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 444 \
    name in_buffer_2_V_V6473 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6473 \
    op interface \
    ports { in_buffer_2_V_V6473_dout { I 8 vector } in_buffer_2_V_V6473_empty_n { I 1 bit } in_buffer_2_V_V6473_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 445 \
    name in_buffer_2_V_V6474 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6474 \
    op interface \
    ports { in_buffer_2_V_V6474_dout { I 8 vector } in_buffer_2_V_V6474_empty_n { I 1 bit } in_buffer_2_V_V6474_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 446 \
    name in_buffer_2_V_V6475 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6475 \
    op interface \
    ports { in_buffer_2_V_V6475_dout { I 8 vector } in_buffer_2_V_V6475_empty_n { I 1 bit } in_buffer_2_V_V6475_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 447 \
    name in_buffer_2_V_V6476 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6476 \
    op interface \
    ports { in_buffer_2_V_V6476_dout { I 8 vector } in_buffer_2_V_V6476_empty_n { I 1 bit } in_buffer_2_V_V6476_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name in_buffer_2_V_V6477 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6477 \
    op interface \
    ports { in_buffer_2_V_V6477_dout { I 8 vector } in_buffer_2_V_V6477_empty_n { I 1 bit } in_buffer_2_V_V6477_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name in_buffer_2_V_V6478 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6478 \
    op interface \
    ports { in_buffer_2_V_V6478_dout { I 8 vector } in_buffer_2_V_V6478_empty_n { I 1 bit } in_buffer_2_V_V6478_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 450 \
    name in_buffer_2_V_V6479 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6479 \
    op interface \
    ports { in_buffer_2_V_V6479_dout { I 8 vector } in_buffer_2_V_V6479_empty_n { I 1 bit } in_buffer_2_V_V6479_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 451 \
    name in_buffer_2_V_V6480 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6480 \
    op interface \
    ports { in_buffer_2_V_V6480_dout { I 8 vector } in_buffer_2_V_V6480_empty_n { I 1 bit } in_buffer_2_V_V6480_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 452 \
    name in_buffer_2_V_V6481 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6481 \
    op interface \
    ports { in_buffer_2_V_V6481_dout { I 8 vector } in_buffer_2_V_V6481_empty_n { I 1 bit } in_buffer_2_V_V6481_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 453 \
    name in_buffer_2_V_V6482 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6482 \
    op interface \
    ports { in_buffer_2_V_V6482_dout { I 8 vector } in_buffer_2_V_V6482_empty_n { I 1 bit } in_buffer_2_V_V6482_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 454 \
    name in_buffer_2_V_V6483 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6483 \
    op interface \
    ports { in_buffer_2_V_V6483_dout { I 8 vector } in_buffer_2_V_V6483_empty_n { I 1 bit } in_buffer_2_V_V6483_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 455 \
    name in_buffer_2_V_V6484 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6484 \
    op interface \
    ports { in_buffer_2_V_V6484_dout { I 8 vector } in_buffer_2_V_V6484_empty_n { I 1 bit } in_buffer_2_V_V6484_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 456 \
    name in_buffer_2_V_V6485 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6485 \
    op interface \
    ports { in_buffer_2_V_V6485_dout { I 8 vector } in_buffer_2_V_V6485_empty_n { I 1 bit } in_buffer_2_V_V6485_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 457 \
    name in_buffer_2_V_V6486 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6486 \
    op interface \
    ports { in_buffer_2_V_V6486_dout { I 8 vector } in_buffer_2_V_V6486_empty_n { I 1 bit } in_buffer_2_V_V6486_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 458 \
    name in_buffer_2_V_V6487 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6487 \
    op interface \
    ports { in_buffer_2_V_V6487_dout { I 8 vector } in_buffer_2_V_V6487_empty_n { I 1 bit } in_buffer_2_V_V6487_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 459 \
    name in_buffer_2_V_V6488 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6488 \
    op interface \
    ports { in_buffer_2_V_V6488_dout { I 8 vector } in_buffer_2_V_V6488_empty_n { I 1 bit } in_buffer_2_V_V6488_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 460 \
    name in_buffer_2_V_V6489 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6489 \
    op interface \
    ports { in_buffer_2_V_V6489_dout { I 8 vector } in_buffer_2_V_V6489_empty_n { I 1 bit } in_buffer_2_V_V6489_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 461 \
    name in_buffer_2_V_V6490 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6490 \
    op interface \
    ports { in_buffer_2_V_V6490_dout { I 8 vector } in_buffer_2_V_V6490_empty_n { I 1 bit } in_buffer_2_V_V6490_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 462 \
    name in_buffer_2_V_V6491 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6491 \
    op interface \
    ports { in_buffer_2_V_V6491_dout { I 8 vector } in_buffer_2_V_V6491_empty_n { I 1 bit } in_buffer_2_V_V6491_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 463 \
    name in_buffer_2_V_V6492 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6492 \
    op interface \
    ports { in_buffer_2_V_V6492_dout { I 8 vector } in_buffer_2_V_V6492_empty_n { I 1 bit } in_buffer_2_V_V6492_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 464 \
    name in_buffer_2_V_V6493 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6493 \
    op interface \
    ports { in_buffer_2_V_V6493_dout { I 8 vector } in_buffer_2_V_V6493_empty_n { I 1 bit } in_buffer_2_V_V6493_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 465 \
    name in_buffer_2_V_V6494 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6494 \
    op interface \
    ports { in_buffer_2_V_V6494_dout { I 8 vector } in_buffer_2_V_V6494_empty_n { I 1 bit } in_buffer_2_V_V6494_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 466 \
    name in_buffer_2_V_V6495 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6495 \
    op interface \
    ports { in_buffer_2_V_V6495_dout { I 8 vector } in_buffer_2_V_V6495_empty_n { I 1 bit } in_buffer_2_V_V6495_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 467 \
    name in_buffer_2_V_V6496 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6496 \
    op interface \
    ports { in_buffer_2_V_V6496_dout { I 8 vector } in_buffer_2_V_V6496_empty_n { I 1 bit } in_buffer_2_V_V6496_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 468 \
    name in_buffer_2_V_V6497 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6497 \
    op interface \
    ports { in_buffer_2_V_V6497_dout { I 8 vector } in_buffer_2_V_V6497_empty_n { I 1 bit } in_buffer_2_V_V6497_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 469 \
    name in_buffer_2_V_V6498 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6498 \
    op interface \
    ports { in_buffer_2_V_V6498_dout { I 8 vector } in_buffer_2_V_V6498_empty_n { I 1 bit } in_buffer_2_V_V6498_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 470 \
    name in_buffer_2_V_V6499 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V6499 \
    op interface \
    ports { in_buffer_2_V_V6499_dout { I 8 vector } in_buffer_2_V_V6499_empty_n { I 1 bit } in_buffer_2_V_V6499_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 471 \
    name in_buffer_2_V_V64100 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64100 \
    op interface \
    ports { in_buffer_2_V_V64100_dout { I 8 vector } in_buffer_2_V_V64100_empty_n { I 1 bit } in_buffer_2_V_V64100_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 472 \
    name in_buffer_2_V_V64101 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64101 \
    op interface \
    ports { in_buffer_2_V_V64101_dout { I 8 vector } in_buffer_2_V_V64101_empty_n { I 1 bit } in_buffer_2_V_V64101_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 473 \
    name in_buffer_2_V_V64102 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64102 \
    op interface \
    ports { in_buffer_2_V_V64102_dout { I 8 vector } in_buffer_2_V_V64102_empty_n { I 1 bit } in_buffer_2_V_V64102_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 474 \
    name in_buffer_2_V_V64103 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64103 \
    op interface \
    ports { in_buffer_2_V_V64103_dout { I 8 vector } in_buffer_2_V_V64103_empty_n { I 1 bit } in_buffer_2_V_V64103_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 475 \
    name in_buffer_2_V_V64104 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64104 \
    op interface \
    ports { in_buffer_2_V_V64104_dout { I 8 vector } in_buffer_2_V_V64104_empty_n { I 1 bit } in_buffer_2_V_V64104_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 476 \
    name in_buffer_2_V_V64105 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64105 \
    op interface \
    ports { in_buffer_2_V_V64105_dout { I 8 vector } in_buffer_2_V_V64105_empty_n { I 1 bit } in_buffer_2_V_V64105_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 477 \
    name in_buffer_2_V_V64106 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64106 \
    op interface \
    ports { in_buffer_2_V_V64106_dout { I 8 vector } in_buffer_2_V_V64106_empty_n { I 1 bit } in_buffer_2_V_V64106_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 478 \
    name in_buffer_2_V_V64107 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64107 \
    op interface \
    ports { in_buffer_2_V_V64107_dout { I 8 vector } in_buffer_2_V_V64107_empty_n { I 1 bit } in_buffer_2_V_V64107_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 479 \
    name in_buffer_2_V_V64108 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64108 \
    op interface \
    ports { in_buffer_2_V_V64108_dout { I 8 vector } in_buffer_2_V_V64108_empty_n { I 1 bit } in_buffer_2_V_V64108_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 480 \
    name in_buffer_2_V_V64109 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64109 \
    op interface \
    ports { in_buffer_2_V_V64109_dout { I 8 vector } in_buffer_2_V_V64109_empty_n { I 1 bit } in_buffer_2_V_V64109_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 481 \
    name in_buffer_2_V_V64110 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64110 \
    op interface \
    ports { in_buffer_2_V_V64110_dout { I 8 vector } in_buffer_2_V_V64110_empty_n { I 1 bit } in_buffer_2_V_V64110_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 482 \
    name in_buffer_2_V_V64111 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64111 \
    op interface \
    ports { in_buffer_2_V_V64111_dout { I 8 vector } in_buffer_2_V_V64111_empty_n { I 1 bit } in_buffer_2_V_V64111_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 483 \
    name in_buffer_2_V_V64112 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64112 \
    op interface \
    ports { in_buffer_2_V_V64112_dout { I 8 vector } in_buffer_2_V_V64112_empty_n { I 1 bit } in_buffer_2_V_V64112_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 484 \
    name in_buffer_2_V_V64113 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64113 \
    op interface \
    ports { in_buffer_2_V_V64113_dout { I 8 vector } in_buffer_2_V_V64113_empty_n { I 1 bit } in_buffer_2_V_V64113_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 485 \
    name in_buffer_2_V_V64114 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64114 \
    op interface \
    ports { in_buffer_2_V_V64114_dout { I 8 vector } in_buffer_2_V_V64114_empty_n { I 1 bit } in_buffer_2_V_V64114_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 486 \
    name in_buffer_2_V_V64115 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64115 \
    op interface \
    ports { in_buffer_2_V_V64115_dout { I 8 vector } in_buffer_2_V_V64115_empty_n { I 1 bit } in_buffer_2_V_V64115_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 487 \
    name in_buffer_2_V_V64116 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64116 \
    op interface \
    ports { in_buffer_2_V_V64116_dout { I 8 vector } in_buffer_2_V_V64116_empty_n { I 1 bit } in_buffer_2_V_V64116_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 488 \
    name in_buffer_2_V_V64117 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64117 \
    op interface \
    ports { in_buffer_2_V_V64117_dout { I 8 vector } in_buffer_2_V_V64117_empty_n { I 1 bit } in_buffer_2_V_V64117_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 489 \
    name in_buffer_2_V_V64118 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64118 \
    op interface \
    ports { in_buffer_2_V_V64118_dout { I 8 vector } in_buffer_2_V_V64118_empty_n { I 1 bit } in_buffer_2_V_V64118_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 490 \
    name in_buffer_2_V_V64119 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64119 \
    op interface \
    ports { in_buffer_2_V_V64119_dout { I 8 vector } in_buffer_2_V_V64119_empty_n { I 1 bit } in_buffer_2_V_V64119_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 491 \
    name in_buffer_2_V_V64120 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64120 \
    op interface \
    ports { in_buffer_2_V_V64120_dout { I 8 vector } in_buffer_2_V_V64120_empty_n { I 1 bit } in_buffer_2_V_V64120_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 492 \
    name in_buffer_2_V_V64121 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64121 \
    op interface \
    ports { in_buffer_2_V_V64121_dout { I 8 vector } in_buffer_2_V_V64121_empty_n { I 1 bit } in_buffer_2_V_V64121_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 493 \
    name in_buffer_2_V_V64122 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64122 \
    op interface \
    ports { in_buffer_2_V_V64122_dout { I 8 vector } in_buffer_2_V_V64122_empty_n { I 1 bit } in_buffer_2_V_V64122_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 494 \
    name in_buffer_2_V_V64123 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64123 \
    op interface \
    ports { in_buffer_2_V_V64123_dout { I 8 vector } in_buffer_2_V_V64123_empty_n { I 1 bit } in_buffer_2_V_V64123_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 495 \
    name in_buffer_2_V_V64124 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64124 \
    op interface \
    ports { in_buffer_2_V_V64124_dout { I 8 vector } in_buffer_2_V_V64124_empty_n { I 1 bit } in_buffer_2_V_V64124_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 496 \
    name in_buffer_2_V_V64125 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64125 \
    op interface \
    ports { in_buffer_2_V_V64125_dout { I 8 vector } in_buffer_2_V_V64125_empty_n { I 1 bit } in_buffer_2_V_V64125_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 497 \
    name in_buffer_2_V_V64126 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V64126 \
    op interface \
    ports { in_buffer_2_V_V64126_dout { I 8 vector } in_buffer_2_V_V64126_empty_n { I 1 bit } in_buffer_2_V_V64126_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 498 \
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
    id 499 \
    name out_V_V65 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V65 \
    op interface \
    ports { out_V_V65_din { O 32 vector } out_V_V65_full_n { I 1 bit } out_V_V65_write { O 1 bit } } \
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


