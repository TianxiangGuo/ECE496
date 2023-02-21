# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name n_pipe1_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_n_pipe1_V_V \
    op interface \
    ports { n_pipe1_V_V_dout { I 32 vector } n_pipe1_V_V_empty_n { I 1 bit } n_pipe1_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name n_pipe2_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_n_pipe2_V_V \
    op interface \
    ports { n_pipe2_V_V_din { O 32 vector } n_pipe2_V_V_full_n { I 1 bit } n_pipe2_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name mean_pipe1_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mean_pipe1_V_V \
    op interface \
    ports { mean_pipe1_V_V_dout { I 32 vector } mean_pipe1_V_V_empty_n { I 1 bit } mean_pipe1_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 140 \
    name in_compute_V_V_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_0 \
    op interface \
    ports { in_compute_V_V_0_dout { I 32 vector } in_compute_V_V_0_empty_n { I 1 bit } in_compute_V_V_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 141 \
    name in_compute_V_V_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_1 \
    op interface \
    ports { in_compute_V_V_1_dout { I 32 vector } in_compute_V_V_1_empty_n { I 1 bit } in_compute_V_V_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name in_compute_V_V_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_2 \
    op interface \
    ports { in_compute_V_V_2_dout { I 32 vector } in_compute_V_V_2_empty_n { I 1 bit } in_compute_V_V_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 143 \
    name in_compute_V_V_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_3 \
    op interface \
    ports { in_compute_V_V_3_dout { I 32 vector } in_compute_V_V_3_empty_n { I 1 bit } in_compute_V_V_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 144 \
    name in_compute_V_V_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_4 \
    op interface \
    ports { in_compute_V_V_4_dout { I 32 vector } in_compute_V_V_4_empty_n { I 1 bit } in_compute_V_V_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name in_compute_V_V_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_5 \
    op interface \
    ports { in_compute_V_V_5_dout { I 32 vector } in_compute_V_V_5_empty_n { I 1 bit } in_compute_V_V_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name in_compute_V_V_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_6 \
    op interface \
    ports { in_compute_V_V_6_dout { I 32 vector } in_compute_V_V_6_empty_n { I 1 bit } in_compute_V_V_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name in_compute_V_V_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_7 \
    op interface \
    ports { in_compute_V_V_7_dout { I 32 vector } in_compute_V_V_7_empty_n { I 1 bit } in_compute_V_V_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name in_compute_V_V_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_8 \
    op interface \
    ports { in_compute_V_V_8_dout { I 32 vector } in_compute_V_V_8_empty_n { I 1 bit } in_compute_V_V_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name in_compute_V_V_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_9 \
    op interface \
    ports { in_compute_V_V_9_dout { I 32 vector } in_compute_V_V_9_empty_n { I 1 bit } in_compute_V_V_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name in_compute_V_V_10 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_10 \
    op interface \
    ports { in_compute_V_V_10_dout { I 32 vector } in_compute_V_V_10_empty_n { I 1 bit } in_compute_V_V_10_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name in_compute_V_V_11 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_11 \
    op interface \
    ports { in_compute_V_V_11_dout { I 32 vector } in_compute_V_V_11_empty_n { I 1 bit } in_compute_V_V_11_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name in_compute_V_V_12 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_12 \
    op interface \
    ports { in_compute_V_V_12_dout { I 32 vector } in_compute_V_V_12_empty_n { I 1 bit } in_compute_V_V_12_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name in_compute_V_V_13 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_13 \
    op interface \
    ports { in_compute_V_V_13_dout { I 32 vector } in_compute_V_V_13_empty_n { I 1 bit } in_compute_V_V_13_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name in_compute_V_V_14 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_14 \
    op interface \
    ports { in_compute_V_V_14_dout { I 32 vector } in_compute_V_V_14_empty_n { I 1 bit } in_compute_V_V_14_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name in_compute_V_V_15 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_compute_V_V_15 \
    op interface \
    ports { in_compute_V_V_15_dout { I 32 vector } in_compute_V_V_15_empty_n { I 1 bit } in_compute_V_V_15_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name in_sqrt_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_sqrt_V_V \
    op interface \
    ports { in_sqrt_V_V_din { O 32 vector } in_sqrt_V_V_full_n { I 1 bit } in_sqrt_V_V_write { O 1 bit } } \
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


