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
    id 80 \
    name in1_0_V_data_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in1_0_V_data_V \
    op interface \
    ports { in1_0_V_data_V_dout { I 512 vector } in1_0_V_data_V_empty_n { I 1 bit } in1_0_V_data_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 81 \
    name in1_0_V_id_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in1_0_V_id_V \
    op interface \
    ports { in1_0_V_id_V_dout { I 8 vector } in1_0_V_id_V_empty_n { I 1 bit } in1_0_V_id_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 82 \
    name in1_0_V_dest_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in1_0_V_dest_V \
    op interface \
    ports { in1_0_V_dest_V_dout { I 8 vector } in1_0_V_dest_V_empty_n { I 1 bit } in1_0_V_dest_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 83 \
    name in1_0_V_user_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in1_0_V_user_V \
    op interface \
    ports { in1_0_V_user_V_dout { I 16 vector } in1_0_V_user_V_empty_n { I 1 bit } in1_0_V_user_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 84 \
    name in1_0_V_last_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in1_0_V_last_V \
    op interface \
    ports { in1_0_V_last_V_dout { I 1 vector } in1_0_V_last_V_empty_n { I 1 bit } in1_0_V_last_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 85 \
    name in2_V_data_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in2_V_data_V \
    op interface \
    ports { in2_V_data_V_dout { I 512 vector } in2_V_data_V_empty_n { I 1 bit } in2_V_data_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 86 \
    name in2_V_id_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in2_V_id_V \
    op interface \
    ports { in2_V_id_V_dout { I 8 vector } in2_V_id_V_empty_n { I 1 bit } in2_V_id_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 87 \
    name in2_V_dest_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in2_V_dest_V \
    op interface \
    ports { in2_V_dest_V_dout { I 8 vector } in2_V_dest_V_empty_n { I 1 bit } in2_V_dest_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 88 \
    name in2_V_user_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in2_V_user_V \
    op interface \
    ports { in2_V_user_V_dout { I 16 vector } in2_V_user_V_empty_n { I 1 bit } in2_V_user_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 89 \
    name in2_V_last_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in2_V_last_V \
    op interface \
    ports { in2_V_last_V_dout { I 1 vector } in2_V_last_V_empty_n { I 1 bit } in2_V_last_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 90 \
    name out_V_data_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_data_V \
    op interface \
    ports { out_V_data_V_din { O 512 vector } out_V_data_V_full_n { I 1 bit } out_V_data_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 91 \
    name out_V_id_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_id_V \
    op interface \
    ports { out_V_id_V_din { O 8 vector } out_V_id_V_full_n { I 1 bit } out_V_id_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 92 \
    name out_V_dest_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_dest_V \
    op interface \
    ports { out_V_dest_V_din { O 8 vector } out_V_dest_V_full_n { I 1 bit } out_V_dest_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 93 \
    name out_V_user_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_user_V \
    op interface \
    ports { out_V_user_V_din { O 16 vector } out_V_user_V_full_n { I 1 bit } out_V_user_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 94 \
    name out_V_last_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_last_V \
    op interface \
    ports { out_V_last_V_din { O 1 vector } out_V_last_V_full_n { I 1 bit } out_V_last_V_write { O 1 bit } } \
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


