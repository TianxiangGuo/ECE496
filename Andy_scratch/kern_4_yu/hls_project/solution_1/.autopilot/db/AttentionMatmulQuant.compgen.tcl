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
    id 16 \
    name in_V_data_V1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_data_V1 \
    op interface \
    ports { in_V_data_V1_dout { I 512 vector } in_V_data_V1_empty_n { I 1 bit } in_V_data_V1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name in_V_id_V2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_id_V2 \
    op interface \
    ports { in_V_id_V2_dout { I 8 vector } in_V_id_V2_empty_n { I 1 bit } in_V_id_V2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name in_V_dest_V3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_dest_V3 \
    op interface \
    ports { in_V_dest_V3_dout { I 8 vector } in_V_dest_V3_empty_n { I 1 bit } in_V_dest_V3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name in_V_user_V4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_user_V4 \
    op interface \
    ports { in_V_user_V4_dout { I 16 vector } in_V_user_V4_empty_n { I 1 bit } in_V_user_V4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name in_V_last_V5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_last_V5 \
    op interface \
    ports { in_V_last_V5_dout { I 1 vector } in_V_last_V5_empty_n { I 1 bit } in_V_last_V5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
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
    id 22 \
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
    id 23 \
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
    id 24 \
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
    id 25 \
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


