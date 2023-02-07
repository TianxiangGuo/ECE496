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
    id 1904 \
    name in_sub_max_c_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_sub_max_c_V_V \
    op interface \
    ports { in_sub_max_c_V_V_dout { I 32 vector } in_sub_max_c_V_V_empty_n { I 1 bit } in_sub_max_c_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1905 \
    name in_sub_max_r_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_sub_max_r_V_V \
    op interface \
    ports { in_sub_max_r_V_V_dout { I 32 vector } in_sub_max_r_V_V_empty_n { I 1 bit } in_sub_max_r_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1906 \
    name in_proc_1_iter_r_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_proc_1_iter_r_V_V \
    op interface \
    ports { in_proc_1_iter_r_V_V_din { O 32 vector } in_proc_1_iter_r_V_V_full_n { I 1 bit } in_proc_1_iter_r_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1907 \
    name in_proc_1_iter_c_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_proc_1_iter_c_V_V \
    op interface \
    ports { in_proc_1_iter_c_V_V_din { O 32 vector } in_proc_1_iter_c_V_V_full_n { I 1 bit } in_proc_1_iter_c_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1908 \
    name max_input_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_input_V_V \
    op interface \
    ports { max_input_V_V_dout { I 32 vector } max_input_V_V_empty_n { I 1 bit } max_input_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1909 \
    name in_sub_max_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_sub_max_V_V \
    op interface \
    ports { in_sub_max_V_V_dout { I 32 vector } in_sub_max_V_V_empty_n { I 1 bit } in_sub_max_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1910 \
    name in_proc_1_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_in_proc_1_V_V \
    op interface \
    ports { in_proc_1_V_V_din { O 32 vector } in_proc_1_V_V_full_n { I 1 bit } in_proc_1_V_V_write { O 1 bit } } \
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


