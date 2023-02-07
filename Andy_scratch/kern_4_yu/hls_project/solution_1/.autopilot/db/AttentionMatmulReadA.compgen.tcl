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
    id 26 \
    name in_0_V_data_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_0_V_data_V \
    op interface \
    ports { in_0_V_data_V_dout { I 512 vector } in_0_V_data_V_empty_n { I 1 bit } in_0_V_data_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name in_0_V_id_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_0_V_id_V \
    op interface \
    ports { in_0_V_id_V_dout { I 8 vector } in_0_V_id_V_empty_n { I 1 bit } in_0_V_id_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name in_0_V_dest_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_0_V_dest_V \
    op interface \
    ports { in_0_V_dest_V_dout { I 8 vector } in_0_V_dest_V_empty_n { I 1 bit } in_0_V_dest_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name in_0_V_user_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_0_V_user_V \
    op interface \
    ports { in_0_V_user_V_dout { I 16 vector } in_0_V_user_V_empty_n { I 1 bit } in_0_V_user_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name in_0_V_last_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_0_V_last_V \
    op interface \
    ports { in_0_V_last_V_dout { I 1 vector } in_0_V_last_V_empty_n { I 1 bit } in_0_V_last_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name out_n_r_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_n_r_V_V \
    op interface \
    ports { out_n_r_V_V_din { O 32 vector } out_n_r_V_V_full_n { I 1 bit } out_n_r_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name out_compute_n_r_0_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_compute_n_r_0_V_V \
    op interface \
    ports { out_compute_n_r_0_V_V_din { O 32 vector } out_compute_n_r_0_V_V_full_n { I 1 bit } out_compute_n_r_0_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name out_write_n_r_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_write_n_r_V_V \
    op interface \
    ports { out_write_n_r_V_V_din { O 32 vector } out_write_n_r_V_V_full_n { I 1 bit } out_write_n_r_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name out_0_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_V_V \
    op interface \
    ports { out_0_V_V_din { O 8 vector } out_0_V_V_full_n { I 1 bit } out_0_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name out_1_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_V_V \
    op interface \
    ports { out_1_V_V_din { O 8 vector } out_1_V_V_full_n { I 1 bit } out_1_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name out_2_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_V_V \
    op interface \
    ports { out_2_V_V_din { O 8 vector } out_2_V_V_full_n { I 1 bit } out_2_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name out_3_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_V_V \
    op interface \
    ports { out_3_V_V_din { O 8 vector } out_3_V_V_full_n { I 1 bit } out_3_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name out_4_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_V_V \
    op interface \
    ports { out_4_V_V_din { O 8 vector } out_4_V_V_full_n { I 1 bit } out_4_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name out_5_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_V_V \
    op interface \
    ports { out_5_V_V_din { O 8 vector } out_5_V_V_full_n { I 1 bit } out_5_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 40 \
    name out_6_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_V_V \
    op interface \
    ports { out_6_V_V_din { O 8 vector } out_6_V_V_full_n { I 1 bit } out_6_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 41 \
    name out_7_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_V_V \
    op interface \
    ports { out_7_V_V_din { O 8 vector } out_7_V_V_full_n { I 1 bit } out_7_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name out_8_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_V_V \
    op interface \
    ports { out_8_V_V_din { O 8 vector } out_8_V_V_full_n { I 1 bit } out_8_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name out_9_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_V_V \
    op interface \
    ports { out_9_V_V_din { O 8 vector } out_9_V_V_full_n { I 1 bit } out_9_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
    name out_10_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_10_V_V \
    op interface \
    ports { out_10_V_V_din { O 8 vector } out_10_V_V_full_n { I 1 bit } out_10_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 45 \
    name out_11_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_11_V_V \
    op interface \
    ports { out_11_V_V_din { O 8 vector } out_11_V_V_full_n { I 1 bit } out_11_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name out_12_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_12_V_V \
    op interface \
    ports { out_12_V_V_din { O 8 vector } out_12_V_V_full_n { I 1 bit } out_12_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name out_13_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_13_V_V \
    op interface \
    ports { out_13_V_V_din { O 8 vector } out_13_V_V_full_n { I 1 bit } out_13_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name out_14_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_14_V_V \
    op interface \
    ports { out_14_V_V_din { O 8 vector } out_14_V_V_full_n { I 1 bit } out_14_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name out_15_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_15_V_V \
    op interface \
    ports { out_15_V_V_din { O 8 vector } out_15_V_V_full_n { I 1 bit } out_15_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name out_16_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_16_V_V \
    op interface \
    ports { out_16_V_V_din { O 8 vector } out_16_V_V_full_n { I 1 bit } out_16_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name out_17_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_17_V_V \
    op interface \
    ports { out_17_V_V_din { O 8 vector } out_17_V_V_full_n { I 1 bit } out_17_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name out_18_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_18_V_V \
    op interface \
    ports { out_18_V_V_din { O 8 vector } out_18_V_V_full_n { I 1 bit } out_18_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 53 \
    name out_19_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_19_V_V \
    op interface \
    ports { out_19_V_V_din { O 8 vector } out_19_V_V_full_n { I 1 bit } out_19_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 54 \
    name out_20_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_20_V_V \
    op interface \
    ports { out_20_V_V_din { O 8 vector } out_20_V_V_full_n { I 1 bit } out_20_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name out_21_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_21_V_V \
    op interface \
    ports { out_21_V_V_din { O 8 vector } out_21_V_V_full_n { I 1 bit } out_21_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name out_22_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_22_V_V \
    op interface \
    ports { out_22_V_V_din { O 8 vector } out_22_V_V_full_n { I 1 bit } out_22_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name out_23_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_23_V_V \
    op interface \
    ports { out_23_V_V_din { O 8 vector } out_23_V_V_full_n { I 1 bit } out_23_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name out_24_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_24_V_V \
    op interface \
    ports { out_24_V_V_din { O 8 vector } out_24_V_V_full_n { I 1 bit } out_24_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
    name out_25_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_25_V_V \
    op interface \
    ports { out_25_V_V_din { O 8 vector } out_25_V_V_full_n { I 1 bit } out_25_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 60 \
    name out_26_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_26_V_V \
    op interface \
    ports { out_26_V_V_din { O 8 vector } out_26_V_V_full_n { I 1 bit } out_26_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name out_27_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_27_V_V \
    op interface \
    ports { out_27_V_V_din { O 8 vector } out_27_V_V_full_n { I 1 bit } out_27_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 62 \
    name out_28_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_28_V_V \
    op interface \
    ports { out_28_V_V_din { O 8 vector } out_28_V_V_full_n { I 1 bit } out_28_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name out_29_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_29_V_V \
    op interface \
    ports { out_29_V_V_din { O 8 vector } out_29_V_V_full_n { I 1 bit } out_29_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 64 \
    name out_30_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_30_V_V \
    op interface \
    ports { out_30_V_V_din { O 8 vector } out_30_V_V_full_n { I 1 bit } out_30_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name out_31_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_31_V_V \
    op interface \
    ports { out_31_V_V_din { O 8 vector } out_31_V_V_full_n { I 1 bit } out_31_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name out_32_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_32_V_V \
    op interface \
    ports { out_32_V_V_din { O 8 vector } out_32_V_V_full_n { I 1 bit } out_32_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name out_33_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_33_V_V \
    op interface \
    ports { out_33_V_V_din { O 8 vector } out_33_V_V_full_n { I 1 bit } out_33_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 68 \
    name out_34_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_34_V_V \
    op interface \
    ports { out_34_V_V_din { O 8 vector } out_34_V_V_full_n { I 1 bit } out_34_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 69 \
    name out_35_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_35_V_V \
    op interface \
    ports { out_35_V_V_din { O 8 vector } out_35_V_V_full_n { I 1 bit } out_35_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 70 \
    name out_36_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_36_V_V \
    op interface \
    ports { out_36_V_V_din { O 8 vector } out_36_V_V_full_n { I 1 bit } out_36_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 71 \
    name out_37_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_37_V_V \
    op interface \
    ports { out_37_V_V_din { O 8 vector } out_37_V_V_full_n { I 1 bit } out_37_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 72 \
    name out_38_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_38_V_V \
    op interface \
    ports { out_38_V_V_din { O 8 vector } out_38_V_V_full_n { I 1 bit } out_38_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 73 \
    name out_39_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_39_V_V \
    op interface \
    ports { out_39_V_V_din { O 8 vector } out_39_V_V_full_n { I 1 bit } out_39_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 74 \
    name out_40_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_40_V_V \
    op interface \
    ports { out_40_V_V_din { O 8 vector } out_40_V_V_full_n { I 1 bit } out_40_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 75 \
    name out_41_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_41_V_V \
    op interface \
    ports { out_41_V_V_din { O 8 vector } out_41_V_V_full_n { I 1 bit } out_41_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 76 \
    name out_42_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_42_V_V \
    op interface \
    ports { out_42_V_V_din { O 8 vector } out_42_V_V_full_n { I 1 bit } out_42_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 77 \
    name out_43_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_43_V_V \
    op interface \
    ports { out_43_V_V_din { O 8 vector } out_43_V_V_full_n { I 1 bit } out_43_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 78 \
    name out_44_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_44_V_V \
    op interface \
    ports { out_44_V_V_din { O 8 vector } out_44_V_V_full_n { I 1 bit } out_44_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 79 \
    name out_45_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_45_V_V \
    op interface \
    ports { out_45_V_V_din { O 8 vector } out_45_V_V_full_n { I 1 bit } out_45_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 80 \
    name out_46_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_46_V_V \
    op interface \
    ports { out_46_V_V_din { O 8 vector } out_46_V_V_full_n { I 1 bit } out_46_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 81 \
    name out_47_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_47_V_V \
    op interface \
    ports { out_47_V_V_din { O 8 vector } out_47_V_V_full_n { I 1 bit } out_47_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 82 \
    name out_48_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_48_V_V \
    op interface \
    ports { out_48_V_V_din { O 8 vector } out_48_V_V_full_n { I 1 bit } out_48_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 83 \
    name out_49_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_49_V_V \
    op interface \
    ports { out_49_V_V_din { O 8 vector } out_49_V_V_full_n { I 1 bit } out_49_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 84 \
    name out_50_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_50_V_V \
    op interface \
    ports { out_50_V_V_din { O 8 vector } out_50_V_V_full_n { I 1 bit } out_50_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 85 \
    name out_51_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_51_V_V \
    op interface \
    ports { out_51_V_V_din { O 8 vector } out_51_V_V_full_n { I 1 bit } out_51_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 86 \
    name out_52_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_52_V_V \
    op interface \
    ports { out_52_V_V_din { O 8 vector } out_52_V_V_full_n { I 1 bit } out_52_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 87 \
    name out_53_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_53_V_V \
    op interface \
    ports { out_53_V_V_din { O 8 vector } out_53_V_V_full_n { I 1 bit } out_53_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 88 \
    name out_54_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_54_V_V \
    op interface \
    ports { out_54_V_V_din { O 8 vector } out_54_V_V_full_n { I 1 bit } out_54_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 89 \
    name out_55_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_55_V_V \
    op interface \
    ports { out_55_V_V_din { O 8 vector } out_55_V_V_full_n { I 1 bit } out_55_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 90 \
    name out_56_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_56_V_V \
    op interface \
    ports { out_56_V_V_din { O 8 vector } out_56_V_V_full_n { I 1 bit } out_56_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 91 \
    name out_57_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_57_V_V \
    op interface \
    ports { out_57_V_V_din { O 8 vector } out_57_V_V_full_n { I 1 bit } out_57_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 92 \
    name out_58_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_58_V_V \
    op interface \
    ports { out_58_V_V_din { O 8 vector } out_58_V_V_full_n { I 1 bit } out_58_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 93 \
    name out_59_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_59_V_V \
    op interface \
    ports { out_59_V_V_din { O 8 vector } out_59_V_V_full_n { I 1 bit } out_59_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 94 \
    name out_60_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_60_V_V \
    op interface \
    ports { out_60_V_V_din { O 8 vector } out_60_V_V_full_n { I 1 bit } out_60_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 95 \
    name out_61_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_61_V_V \
    op interface \
    ports { out_61_V_V_din { O 8 vector } out_61_V_V_full_n { I 1 bit } out_61_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 96 \
    name out_62_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_62_V_V \
    op interface \
    ports { out_62_V_V_din { O 8 vector } out_62_V_V_full_n { I 1 bit } out_62_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 97 \
    name out_63_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_63_V_V \
    op interface \
    ports { out_63_V_V_din { O 8 vector } out_63_V_V_full_n { I 1 bit } out_63_V_V_write { O 1 bit } } \
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


