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
    id 1408 \
    name in_n_r_V_V2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_n_r_V_V2 \
    op interface \
    ports { in_n_r_V_V2_dout { I 32 vector } in_n_r_V_V2_empty_n { I 1 bit } in_n_r_V_V2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1409 \
    name in_n_c_V_V9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_n_c_V_V9 \
    op interface \
    ports { in_n_c_V_V9_dout { I 32 vector } in_n_c_V_V9_empty_n { I 1 bit } in_n_c_V_V9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1410 \
    name in_buffer_1_V_V16128 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16128 \
    op interface \
    ports { in_buffer_1_V_V16128_dout { I 8 vector } in_buffer_1_V_V16128_empty_n { I 1 bit } in_buffer_1_V_V16128_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1411 \
    name in_buffer_1_V_V16129 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16129 \
    op interface \
    ports { in_buffer_1_V_V16129_dout { I 8 vector } in_buffer_1_V_V16129_empty_n { I 1 bit } in_buffer_1_V_V16129_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1412 \
    name in_buffer_1_V_V16130 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16130 \
    op interface \
    ports { in_buffer_1_V_V16130_dout { I 8 vector } in_buffer_1_V_V16130_empty_n { I 1 bit } in_buffer_1_V_V16130_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1413 \
    name in_buffer_1_V_V16131 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16131 \
    op interface \
    ports { in_buffer_1_V_V16131_dout { I 8 vector } in_buffer_1_V_V16131_empty_n { I 1 bit } in_buffer_1_V_V16131_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1414 \
    name in_buffer_1_V_V16132 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16132 \
    op interface \
    ports { in_buffer_1_V_V16132_dout { I 8 vector } in_buffer_1_V_V16132_empty_n { I 1 bit } in_buffer_1_V_V16132_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1415 \
    name in_buffer_1_V_V16133 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16133 \
    op interface \
    ports { in_buffer_1_V_V16133_dout { I 8 vector } in_buffer_1_V_V16133_empty_n { I 1 bit } in_buffer_1_V_V16133_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1416 \
    name in_buffer_1_V_V16134 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16134 \
    op interface \
    ports { in_buffer_1_V_V16134_dout { I 8 vector } in_buffer_1_V_V16134_empty_n { I 1 bit } in_buffer_1_V_V16134_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1417 \
    name in_buffer_1_V_V16135 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16135 \
    op interface \
    ports { in_buffer_1_V_V16135_dout { I 8 vector } in_buffer_1_V_V16135_empty_n { I 1 bit } in_buffer_1_V_V16135_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1418 \
    name in_buffer_1_V_V16136 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16136 \
    op interface \
    ports { in_buffer_1_V_V16136_dout { I 8 vector } in_buffer_1_V_V16136_empty_n { I 1 bit } in_buffer_1_V_V16136_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1419 \
    name in_buffer_1_V_V16137 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16137 \
    op interface \
    ports { in_buffer_1_V_V16137_dout { I 8 vector } in_buffer_1_V_V16137_empty_n { I 1 bit } in_buffer_1_V_V16137_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1420 \
    name in_buffer_1_V_V16138 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16138 \
    op interface \
    ports { in_buffer_1_V_V16138_dout { I 8 vector } in_buffer_1_V_V16138_empty_n { I 1 bit } in_buffer_1_V_V16138_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1421 \
    name in_buffer_1_V_V16139 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16139 \
    op interface \
    ports { in_buffer_1_V_V16139_dout { I 8 vector } in_buffer_1_V_V16139_empty_n { I 1 bit } in_buffer_1_V_V16139_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1422 \
    name in_buffer_1_V_V16140 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16140 \
    op interface \
    ports { in_buffer_1_V_V16140_dout { I 8 vector } in_buffer_1_V_V16140_empty_n { I 1 bit } in_buffer_1_V_V16140_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1423 \
    name in_buffer_1_V_V16141 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16141 \
    op interface \
    ports { in_buffer_1_V_V16141_dout { I 8 vector } in_buffer_1_V_V16141_empty_n { I 1 bit } in_buffer_1_V_V16141_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1424 \
    name in_buffer_1_V_V16142 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16142 \
    op interface \
    ports { in_buffer_1_V_V16142_dout { I 8 vector } in_buffer_1_V_V16142_empty_n { I 1 bit } in_buffer_1_V_V16142_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1425 \
    name in_buffer_1_V_V16143 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16143 \
    op interface \
    ports { in_buffer_1_V_V16143_dout { I 8 vector } in_buffer_1_V_V16143_empty_n { I 1 bit } in_buffer_1_V_V16143_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1426 \
    name in_buffer_1_V_V16144 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16144 \
    op interface \
    ports { in_buffer_1_V_V16144_dout { I 8 vector } in_buffer_1_V_V16144_empty_n { I 1 bit } in_buffer_1_V_V16144_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1427 \
    name in_buffer_1_V_V16145 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16145 \
    op interface \
    ports { in_buffer_1_V_V16145_dout { I 8 vector } in_buffer_1_V_V16145_empty_n { I 1 bit } in_buffer_1_V_V16145_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1428 \
    name in_buffer_1_V_V16146 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16146 \
    op interface \
    ports { in_buffer_1_V_V16146_dout { I 8 vector } in_buffer_1_V_V16146_empty_n { I 1 bit } in_buffer_1_V_V16146_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1429 \
    name in_buffer_1_V_V16147 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16147 \
    op interface \
    ports { in_buffer_1_V_V16147_dout { I 8 vector } in_buffer_1_V_V16147_empty_n { I 1 bit } in_buffer_1_V_V16147_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1430 \
    name in_buffer_1_V_V16148 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16148 \
    op interface \
    ports { in_buffer_1_V_V16148_dout { I 8 vector } in_buffer_1_V_V16148_empty_n { I 1 bit } in_buffer_1_V_V16148_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1431 \
    name in_buffer_1_V_V16149 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16149 \
    op interface \
    ports { in_buffer_1_V_V16149_dout { I 8 vector } in_buffer_1_V_V16149_empty_n { I 1 bit } in_buffer_1_V_V16149_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1432 \
    name in_buffer_1_V_V16150 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16150 \
    op interface \
    ports { in_buffer_1_V_V16150_dout { I 8 vector } in_buffer_1_V_V16150_empty_n { I 1 bit } in_buffer_1_V_V16150_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1433 \
    name in_buffer_1_V_V16151 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16151 \
    op interface \
    ports { in_buffer_1_V_V16151_dout { I 8 vector } in_buffer_1_V_V16151_empty_n { I 1 bit } in_buffer_1_V_V16151_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1434 \
    name in_buffer_1_V_V16152 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16152 \
    op interface \
    ports { in_buffer_1_V_V16152_dout { I 8 vector } in_buffer_1_V_V16152_empty_n { I 1 bit } in_buffer_1_V_V16152_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1435 \
    name in_buffer_1_V_V16153 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16153 \
    op interface \
    ports { in_buffer_1_V_V16153_dout { I 8 vector } in_buffer_1_V_V16153_empty_n { I 1 bit } in_buffer_1_V_V16153_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1436 \
    name in_buffer_1_V_V16154 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16154 \
    op interface \
    ports { in_buffer_1_V_V16154_dout { I 8 vector } in_buffer_1_V_V16154_empty_n { I 1 bit } in_buffer_1_V_V16154_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1437 \
    name in_buffer_1_V_V16155 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16155 \
    op interface \
    ports { in_buffer_1_V_V16155_dout { I 8 vector } in_buffer_1_V_V16155_empty_n { I 1 bit } in_buffer_1_V_V16155_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1438 \
    name in_buffer_1_V_V16156 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16156 \
    op interface \
    ports { in_buffer_1_V_V16156_dout { I 8 vector } in_buffer_1_V_V16156_empty_n { I 1 bit } in_buffer_1_V_V16156_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1439 \
    name in_buffer_1_V_V16157 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16157 \
    op interface \
    ports { in_buffer_1_V_V16157_dout { I 8 vector } in_buffer_1_V_V16157_empty_n { I 1 bit } in_buffer_1_V_V16157_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1440 \
    name in_buffer_1_V_V16158 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16158 \
    op interface \
    ports { in_buffer_1_V_V16158_dout { I 8 vector } in_buffer_1_V_V16158_empty_n { I 1 bit } in_buffer_1_V_V16158_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1441 \
    name in_buffer_1_V_V16159 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16159 \
    op interface \
    ports { in_buffer_1_V_V16159_dout { I 8 vector } in_buffer_1_V_V16159_empty_n { I 1 bit } in_buffer_1_V_V16159_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1442 \
    name in_buffer_1_V_V16160 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16160 \
    op interface \
    ports { in_buffer_1_V_V16160_dout { I 8 vector } in_buffer_1_V_V16160_empty_n { I 1 bit } in_buffer_1_V_V16160_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1443 \
    name in_buffer_1_V_V16161 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16161 \
    op interface \
    ports { in_buffer_1_V_V16161_dout { I 8 vector } in_buffer_1_V_V16161_empty_n { I 1 bit } in_buffer_1_V_V16161_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1444 \
    name in_buffer_1_V_V16162 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16162 \
    op interface \
    ports { in_buffer_1_V_V16162_dout { I 8 vector } in_buffer_1_V_V16162_empty_n { I 1 bit } in_buffer_1_V_V16162_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1445 \
    name in_buffer_1_V_V16163 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16163 \
    op interface \
    ports { in_buffer_1_V_V16163_dout { I 8 vector } in_buffer_1_V_V16163_empty_n { I 1 bit } in_buffer_1_V_V16163_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1446 \
    name in_buffer_1_V_V16164 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16164 \
    op interface \
    ports { in_buffer_1_V_V16164_dout { I 8 vector } in_buffer_1_V_V16164_empty_n { I 1 bit } in_buffer_1_V_V16164_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1447 \
    name in_buffer_1_V_V16165 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16165 \
    op interface \
    ports { in_buffer_1_V_V16165_dout { I 8 vector } in_buffer_1_V_V16165_empty_n { I 1 bit } in_buffer_1_V_V16165_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1448 \
    name in_buffer_1_V_V16166 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16166 \
    op interface \
    ports { in_buffer_1_V_V16166_dout { I 8 vector } in_buffer_1_V_V16166_empty_n { I 1 bit } in_buffer_1_V_V16166_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1449 \
    name in_buffer_1_V_V16167 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16167 \
    op interface \
    ports { in_buffer_1_V_V16167_dout { I 8 vector } in_buffer_1_V_V16167_empty_n { I 1 bit } in_buffer_1_V_V16167_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1450 \
    name in_buffer_1_V_V16168 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16168 \
    op interface \
    ports { in_buffer_1_V_V16168_dout { I 8 vector } in_buffer_1_V_V16168_empty_n { I 1 bit } in_buffer_1_V_V16168_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1451 \
    name in_buffer_1_V_V16169 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16169 \
    op interface \
    ports { in_buffer_1_V_V16169_dout { I 8 vector } in_buffer_1_V_V16169_empty_n { I 1 bit } in_buffer_1_V_V16169_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1452 \
    name in_buffer_1_V_V16170 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16170 \
    op interface \
    ports { in_buffer_1_V_V16170_dout { I 8 vector } in_buffer_1_V_V16170_empty_n { I 1 bit } in_buffer_1_V_V16170_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1453 \
    name in_buffer_1_V_V16171 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16171 \
    op interface \
    ports { in_buffer_1_V_V16171_dout { I 8 vector } in_buffer_1_V_V16171_empty_n { I 1 bit } in_buffer_1_V_V16171_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1454 \
    name in_buffer_1_V_V16172 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16172 \
    op interface \
    ports { in_buffer_1_V_V16172_dout { I 8 vector } in_buffer_1_V_V16172_empty_n { I 1 bit } in_buffer_1_V_V16172_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1455 \
    name in_buffer_1_V_V16173 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16173 \
    op interface \
    ports { in_buffer_1_V_V16173_dout { I 8 vector } in_buffer_1_V_V16173_empty_n { I 1 bit } in_buffer_1_V_V16173_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1456 \
    name in_buffer_1_V_V16174 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16174 \
    op interface \
    ports { in_buffer_1_V_V16174_dout { I 8 vector } in_buffer_1_V_V16174_empty_n { I 1 bit } in_buffer_1_V_V16174_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1457 \
    name in_buffer_1_V_V16175 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16175 \
    op interface \
    ports { in_buffer_1_V_V16175_dout { I 8 vector } in_buffer_1_V_V16175_empty_n { I 1 bit } in_buffer_1_V_V16175_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1458 \
    name in_buffer_1_V_V16176 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16176 \
    op interface \
    ports { in_buffer_1_V_V16176_dout { I 8 vector } in_buffer_1_V_V16176_empty_n { I 1 bit } in_buffer_1_V_V16176_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1459 \
    name in_buffer_1_V_V16177 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16177 \
    op interface \
    ports { in_buffer_1_V_V16177_dout { I 8 vector } in_buffer_1_V_V16177_empty_n { I 1 bit } in_buffer_1_V_V16177_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1460 \
    name in_buffer_1_V_V16178 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16178 \
    op interface \
    ports { in_buffer_1_V_V16178_dout { I 8 vector } in_buffer_1_V_V16178_empty_n { I 1 bit } in_buffer_1_V_V16178_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1461 \
    name in_buffer_1_V_V16179 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16179 \
    op interface \
    ports { in_buffer_1_V_V16179_dout { I 8 vector } in_buffer_1_V_V16179_empty_n { I 1 bit } in_buffer_1_V_V16179_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1462 \
    name in_buffer_1_V_V16180 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16180 \
    op interface \
    ports { in_buffer_1_V_V16180_dout { I 8 vector } in_buffer_1_V_V16180_empty_n { I 1 bit } in_buffer_1_V_V16180_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1463 \
    name in_buffer_1_V_V16181 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16181 \
    op interface \
    ports { in_buffer_1_V_V16181_dout { I 8 vector } in_buffer_1_V_V16181_empty_n { I 1 bit } in_buffer_1_V_V16181_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1464 \
    name in_buffer_1_V_V16182 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16182 \
    op interface \
    ports { in_buffer_1_V_V16182_dout { I 8 vector } in_buffer_1_V_V16182_empty_n { I 1 bit } in_buffer_1_V_V16182_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1465 \
    name in_buffer_1_V_V16183 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16183 \
    op interface \
    ports { in_buffer_1_V_V16183_dout { I 8 vector } in_buffer_1_V_V16183_empty_n { I 1 bit } in_buffer_1_V_V16183_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1466 \
    name in_buffer_1_V_V16184 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16184 \
    op interface \
    ports { in_buffer_1_V_V16184_dout { I 8 vector } in_buffer_1_V_V16184_empty_n { I 1 bit } in_buffer_1_V_V16184_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1467 \
    name in_buffer_1_V_V16185 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16185 \
    op interface \
    ports { in_buffer_1_V_V16185_dout { I 8 vector } in_buffer_1_V_V16185_empty_n { I 1 bit } in_buffer_1_V_V16185_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1468 \
    name in_buffer_1_V_V16186 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16186 \
    op interface \
    ports { in_buffer_1_V_V16186_dout { I 8 vector } in_buffer_1_V_V16186_empty_n { I 1 bit } in_buffer_1_V_V16186_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1469 \
    name in_buffer_1_V_V16187 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16187 \
    op interface \
    ports { in_buffer_1_V_V16187_dout { I 8 vector } in_buffer_1_V_V16187_empty_n { I 1 bit } in_buffer_1_V_V16187_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1470 \
    name in_buffer_1_V_V16188 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16188 \
    op interface \
    ports { in_buffer_1_V_V16188_dout { I 8 vector } in_buffer_1_V_V16188_empty_n { I 1 bit } in_buffer_1_V_V16188_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1471 \
    name in_buffer_1_V_V16189 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16189 \
    op interface \
    ports { in_buffer_1_V_V16189_dout { I 8 vector } in_buffer_1_V_V16189_empty_n { I 1 bit } in_buffer_1_V_V16189_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1472 \
    name in_buffer_1_V_V16190 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16190 \
    op interface \
    ports { in_buffer_1_V_V16190_dout { I 8 vector } in_buffer_1_V_V16190_empty_n { I 1 bit } in_buffer_1_V_V16190_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1473 \
    name in_buffer_1_V_V16191 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V16191 \
    op interface \
    ports { in_buffer_1_V_V16191_dout { I 8 vector } in_buffer_1_V_V16191_empty_n { I 1 bit } in_buffer_1_V_V16191_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1474 \
    name in_buffer_2_V_V19254 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19254 \
    op interface \
    ports { in_buffer_2_V_V19254_dout { I 8 vector } in_buffer_2_V_V19254_empty_n { I 1 bit } in_buffer_2_V_V19254_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1475 \
    name in_buffer_2_V_V19255 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19255 \
    op interface \
    ports { in_buffer_2_V_V19255_dout { I 8 vector } in_buffer_2_V_V19255_empty_n { I 1 bit } in_buffer_2_V_V19255_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1476 \
    name in_buffer_2_V_V19256 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19256 \
    op interface \
    ports { in_buffer_2_V_V19256_dout { I 8 vector } in_buffer_2_V_V19256_empty_n { I 1 bit } in_buffer_2_V_V19256_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1477 \
    name in_buffer_2_V_V19257 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19257 \
    op interface \
    ports { in_buffer_2_V_V19257_dout { I 8 vector } in_buffer_2_V_V19257_empty_n { I 1 bit } in_buffer_2_V_V19257_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1478 \
    name in_buffer_2_V_V19258 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258 \
    op interface \
    ports { in_buffer_2_V_V19258_dout { I 8 vector } in_buffer_2_V_V19258_empty_n { I 1 bit } in_buffer_2_V_V19258_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1479 \
    name in_buffer_2_V_V19259 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19259 \
    op interface \
    ports { in_buffer_2_V_V19259_dout { I 8 vector } in_buffer_2_V_V19259_empty_n { I 1 bit } in_buffer_2_V_V19259_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1480 \
    name in_buffer_2_V_V19260 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19260 \
    op interface \
    ports { in_buffer_2_V_V19260_dout { I 8 vector } in_buffer_2_V_V19260_empty_n { I 1 bit } in_buffer_2_V_V19260_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1481 \
    name in_buffer_2_V_V19261 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19261 \
    op interface \
    ports { in_buffer_2_V_V19261_dout { I 8 vector } in_buffer_2_V_V19261_empty_n { I 1 bit } in_buffer_2_V_V19261_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1482 \
    name in_buffer_2_V_V19262 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19262 \
    op interface \
    ports { in_buffer_2_V_V19262_dout { I 8 vector } in_buffer_2_V_V19262_empty_n { I 1 bit } in_buffer_2_V_V19262_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1483 \
    name in_buffer_2_V_V19263 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19263 \
    op interface \
    ports { in_buffer_2_V_V19263_dout { I 8 vector } in_buffer_2_V_V19263_empty_n { I 1 bit } in_buffer_2_V_V19263_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1484 \
    name in_buffer_2_V_V19264 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19264 \
    op interface \
    ports { in_buffer_2_V_V19264_dout { I 8 vector } in_buffer_2_V_V19264_empty_n { I 1 bit } in_buffer_2_V_V19264_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1485 \
    name in_buffer_2_V_V19265 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19265 \
    op interface \
    ports { in_buffer_2_V_V19265_dout { I 8 vector } in_buffer_2_V_V19265_empty_n { I 1 bit } in_buffer_2_V_V19265_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1486 \
    name in_buffer_2_V_V19266 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19266 \
    op interface \
    ports { in_buffer_2_V_V19266_dout { I 8 vector } in_buffer_2_V_V19266_empty_n { I 1 bit } in_buffer_2_V_V19266_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1487 \
    name in_buffer_2_V_V19267 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19267 \
    op interface \
    ports { in_buffer_2_V_V19267_dout { I 8 vector } in_buffer_2_V_V19267_empty_n { I 1 bit } in_buffer_2_V_V19267_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1488 \
    name in_buffer_2_V_V19268 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19268 \
    op interface \
    ports { in_buffer_2_V_V19268_dout { I 8 vector } in_buffer_2_V_V19268_empty_n { I 1 bit } in_buffer_2_V_V19268_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1489 \
    name in_buffer_2_V_V19269 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19269 \
    op interface \
    ports { in_buffer_2_V_V19269_dout { I 8 vector } in_buffer_2_V_V19269_empty_n { I 1 bit } in_buffer_2_V_V19269_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1490 \
    name in_buffer_2_V_V19270 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19270 \
    op interface \
    ports { in_buffer_2_V_V19270_dout { I 8 vector } in_buffer_2_V_V19270_empty_n { I 1 bit } in_buffer_2_V_V19270_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1491 \
    name in_buffer_2_V_V19271 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19271 \
    op interface \
    ports { in_buffer_2_V_V19271_dout { I 8 vector } in_buffer_2_V_V19271_empty_n { I 1 bit } in_buffer_2_V_V19271_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1492 \
    name in_buffer_2_V_V19272 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19272 \
    op interface \
    ports { in_buffer_2_V_V19272_dout { I 8 vector } in_buffer_2_V_V19272_empty_n { I 1 bit } in_buffer_2_V_V19272_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1493 \
    name in_buffer_2_V_V19273 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19273 \
    op interface \
    ports { in_buffer_2_V_V19273_dout { I 8 vector } in_buffer_2_V_V19273_empty_n { I 1 bit } in_buffer_2_V_V19273_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1494 \
    name in_buffer_2_V_V19274 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19274 \
    op interface \
    ports { in_buffer_2_V_V19274_dout { I 8 vector } in_buffer_2_V_V19274_empty_n { I 1 bit } in_buffer_2_V_V19274_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1495 \
    name in_buffer_2_V_V19275 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19275 \
    op interface \
    ports { in_buffer_2_V_V19275_dout { I 8 vector } in_buffer_2_V_V19275_empty_n { I 1 bit } in_buffer_2_V_V19275_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1496 \
    name in_buffer_2_V_V19276 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19276 \
    op interface \
    ports { in_buffer_2_V_V19276_dout { I 8 vector } in_buffer_2_V_V19276_empty_n { I 1 bit } in_buffer_2_V_V19276_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1497 \
    name in_buffer_2_V_V19277 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19277 \
    op interface \
    ports { in_buffer_2_V_V19277_dout { I 8 vector } in_buffer_2_V_V19277_empty_n { I 1 bit } in_buffer_2_V_V19277_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1498 \
    name in_buffer_2_V_V19278 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19278 \
    op interface \
    ports { in_buffer_2_V_V19278_dout { I 8 vector } in_buffer_2_V_V19278_empty_n { I 1 bit } in_buffer_2_V_V19278_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1499 \
    name in_buffer_2_V_V19279 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19279 \
    op interface \
    ports { in_buffer_2_V_V19279_dout { I 8 vector } in_buffer_2_V_V19279_empty_n { I 1 bit } in_buffer_2_V_V19279_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1500 \
    name in_buffer_2_V_V19280 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19280 \
    op interface \
    ports { in_buffer_2_V_V19280_dout { I 8 vector } in_buffer_2_V_V19280_empty_n { I 1 bit } in_buffer_2_V_V19280_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1501 \
    name in_buffer_2_V_V19281 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19281 \
    op interface \
    ports { in_buffer_2_V_V19281_dout { I 8 vector } in_buffer_2_V_V19281_empty_n { I 1 bit } in_buffer_2_V_V19281_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1502 \
    name in_buffer_2_V_V19282 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19282 \
    op interface \
    ports { in_buffer_2_V_V19282_dout { I 8 vector } in_buffer_2_V_V19282_empty_n { I 1 bit } in_buffer_2_V_V19282_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1503 \
    name in_buffer_2_V_V19283 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19283 \
    op interface \
    ports { in_buffer_2_V_V19283_dout { I 8 vector } in_buffer_2_V_V19283_empty_n { I 1 bit } in_buffer_2_V_V19283_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1504 \
    name in_buffer_2_V_V19284 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19284 \
    op interface \
    ports { in_buffer_2_V_V19284_dout { I 8 vector } in_buffer_2_V_V19284_empty_n { I 1 bit } in_buffer_2_V_V19284_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1505 \
    name in_buffer_2_V_V19285 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19285 \
    op interface \
    ports { in_buffer_2_V_V19285_dout { I 8 vector } in_buffer_2_V_V19285_empty_n { I 1 bit } in_buffer_2_V_V19285_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1506 \
    name in_buffer_2_V_V19286 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19286 \
    op interface \
    ports { in_buffer_2_V_V19286_dout { I 8 vector } in_buffer_2_V_V19286_empty_n { I 1 bit } in_buffer_2_V_V19286_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1507 \
    name in_buffer_2_V_V19287 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19287 \
    op interface \
    ports { in_buffer_2_V_V19287_dout { I 8 vector } in_buffer_2_V_V19287_empty_n { I 1 bit } in_buffer_2_V_V19287_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1508 \
    name in_buffer_2_V_V19288 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19288 \
    op interface \
    ports { in_buffer_2_V_V19288_dout { I 8 vector } in_buffer_2_V_V19288_empty_n { I 1 bit } in_buffer_2_V_V19288_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1509 \
    name in_buffer_2_V_V19289 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19289 \
    op interface \
    ports { in_buffer_2_V_V19289_dout { I 8 vector } in_buffer_2_V_V19289_empty_n { I 1 bit } in_buffer_2_V_V19289_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1510 \
    name in_buffer_2_V_V19290 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19290 \
    op interface \
    ports { in_buffer_2_V_V19290_dout { I 8 vector } in_buffer_2_V_V19290_empty_n { I 1 bit } in_buffer_2_V_V19290_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1511 \
    name in_buffer_2_V_V19291 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19291 \
    op interface \
    ports { in_buffer_2_V_V19291_dout { I 8 vector } in_buffer_2_V_V19291_empty_n { I 1 bit } in_buffer_2_V_V19291_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1512 \
    name in_buffer_2_V_V19292 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19292 \
    op interface \
    ports { in_buffer_2_V_V19292_dout { I 8 vector } in_buffer_2_V_V19292_empty_n { I 1 bit } in_buffer_2_V_V19292_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1513 \
    name in_buffer_2_V_V19293 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19293 \
    op interface \
    ports { in_buffer_2_V_V19293_dout { I 8 vector } in_buffer_2_V_V19293_empty_n { I 1 bit } in_buffer_2_V_V19293_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1514 \
    name in_buffer_2_V_V19294 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19294 \
    op interface \
    ports { in_buffer_2_V_V19294_dout { I 8 vector } in_buffer_2_V_V19294_empty_n { I 1 bit } in_buffer_2_V_V19294_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1515 \
    name in_buffer_2_V_V19295 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19295 \
    op interface \
    ports { in_buffer_2_V_V19295_dout { I 8 vector } in_buffer_2_V_V19295_empty_n { I 1 bit } in_buffer_2_V_V19295_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1516 \
    name in_buffer_2_V_V19296 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19296 \
    op interface \
    ports { in_buffer_2_V_V19296_dout { I 8 vector } in_buffer_2_V_V19296_empty_n { I 1 bit } in_buffer_2_V_V19296_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1517 \
    name in_buffer_2_V_V19297 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19297 \
    op interface \
    ports { in_buffer_2_V_V19297_dout { I 8 vector } in_buffer_2_V_V19297_empty_n { I 1 bit } in_buffer_2_V_V19297_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1518 \
    name in_buffer_2_V_V19298 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19298 \
    op interface \
    ports { in_buffer_2_V_V19298_dout { I 8 vector } in_buffer_2_V_V19298_empty_n { I 1 bit } in_buffer_2_V_V19298_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1519 \
    name in_buffer_2_V_V19299 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19299 \
    op interface \
    ports { in_buffer_2_V_V19299_dout { I 8 vector } in_buffer_2_V_V19299_empty_n { I 1 bit } in_buffer_2_V_V19299_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1520 \
    name in_buffer_2_V_V19300 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19300 \
    op interface \
    ports { in_buffer_2_V_V19300_dout { I 8 vector } in_buffer_2_V_V19300_empty_n { I 1 bit } in_buffer_2_V_V19300_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1521 \
    name in_buffer_2_V_V19301 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19301 \
    op interface \
    ports { in_buffer_2_V_V19301_dout { I 8 vector } in_buffer_2_V_V19301_empty_n { I 1 bit } in_buffer_2_V_V19301_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1522 \
    name in_buffer_2_V_V19302 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19302 \
    op interface \
    ports { in_buffer_2_V_V19302_dout { I 8 vector } in_buffer_2_V_V19302_empty_n { I 1 bit } in_buffer_2_V_V19302_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1523 \
    name in_buffer_2_V_V19303 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19303 \
    op interface \
    ports { in_buffer_2_V_V19303_dout { I 8 vector } in_buffer_2_V_V19303_empty_n { I 1 bit } in_buffer_2_V_V19303_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1524 \
    name in_buffer_2_V_V19304 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19304 \
    op interface \
    ports { in_buffer_2_V_V19304_dout { I 8 vector } in_buffer_2_V_V19304_empty_n { I 1 bit } in_buffer_2_V_V19304_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1525 \
    name in_buffer_2_V_V19305 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19305 \
    op interface \
    ports { in_buffer_2_V_V19305_dout { I 8 vector } in_buffer_2_V_V19305_empty_n { I 1 bit } in_buffer_2_V_V19305_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1526 \
    name in_buffer_2_V_V19306 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19306 \
    op interface \
    ports { in_buffer_2_V_V19306_dout { I 8 vector } in_buffer_2_V_V19306_empty_n { I 1 bit } in_buffer_2_V_V19306_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1527 \
    name in_buffer_2_V_V19307 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19307 \
    op interface \
    ports { in_buffer_2_V_V19307_dout { I 8 vector } in_buffer_2_V_V19307_empty_n { I 1 bit } in_buffer_2_V_V19307_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1528 \
    name in_buffer_2_V_V19308 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19308 \
    op interface \
    ports { in_buffer_2_V_V19308_dout { I 8 vector } in_buffer_2_V_V19308_empty_n { I 1 bit } in_buffer_2_V_V19308_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1529 \
    name in_buffer_2_V_V19309 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19309 \
    op interface \
    ports { in_buffer_2_V_V19309_dout { I 8 vector } in_buffer_2_V_V19309_empty_n { I 1 bit } in_buffer_2_V_V19309_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1530 \
    name in_buffer_2_V_V19310 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19310 \
    op interface \
    ports { in_buffer_2_V_V19310_dout { I 8 vector } in_buffer_2_V_V19310_empty_n { I 1 bit } in_buffer_2_V_V19310_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1531 \
    name in_buffer_2_V_V19311 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19311 \
    op interface \
    ports { in_buffer_2_V_V19311_dout { I 8 vector } in_buffer_2_V_V19311_empty_n { I 1 bit } in_buffer_2_V_V19311_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1532 \
    name in_buffer_2_V_V19312 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19312 \
    op interface \
    ports { in_buffer_2_V_V19312_dout { I 8 vector } in_buffer_2_V_V19312_empty_n { I 1 bit } in_buffer_2_V_V19312_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1533 \
    name in_buffer_2_V_V19313 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19313 \
    op interface \
    ports { in_buffer_2_V_V19313_dout { I 8 vector } in_buffer_2_V_V19313_empty_n { I 1 bit } in_buffer_2_V_V19313_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1534 \
    name in_buffer_2_V_V19314 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19314 \
    op interface \
    ports { in_buffer_2_V_V19314_dout { I 8 vector } in_buffer_2_V_V19314_empty_n { I 1 bit } in_buffer_2_V_V19314_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1535 \
    name in_buffer_2_V_V19315 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19315 \
    op interface \
    ports { in_buffer_2_V_V19315_dout { I 8 vector } in_buffer_2_V_V19315_empty_n { I 1 bit } in_buffer_2_V_V19315_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1536 \
    name in_buffer_2_V_V19316 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19316 \
    op interface \
    ports { in_buffer_2_V_V19316_dout { I 8 vector } in_buffer_2_V_V19316_empty_n { I 1 bit } in_buffer_2_V_V19316_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1537 \
    name in_buffer_2_V_V19317 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19317 \
    op interface \
    ports { in_buffer_2_V_V19317_dout { I 8 vector } in_buffer_2_V_V19317_empty_n { I 1 bit } in_buffer_2_V_V19317_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1538 \
    name in_buffer_2_V_V19258318 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258318 \
    op interface \
    ports { in_buffer_2_V_V19258318_dout { I 8 vector } in_buffer_2_V_V19258318_empty_n { I 1 bit } in_buffer_2_V_V19258318_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1539 \
    name in_buffer_2_V_V19258319 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258319 \
    op interface \
    ports { in_buffer_2_V_V19258319_dout { I 8 vector } in_buffer_2_V_V19258319_empty_n { I 1 bit } in_buffer_2_V_V19258319_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1540 \
    name in_buffer_2_V_V19258320 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258320 \
    op interface \
    ports { in_buffer_2_V_V19258320_dout { I 8 vector } in_buffer_2_V_V19258320_empty_n { I 1 bit } in_buffer_2_V_V19258320_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1541 \
    name in_buffer_2_V_V19258321 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258321 \
    op interface \
    ports { in_buffer_2_V_V19258321_dout { I 8 vector } in_buffer_2_V_V19258321_empty_n { I 1 bit } in_buffer_2_V_V19258321_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1542 \
    name in_buffer_2_V_V19258322 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258322 \
    op interface \
    ports { in_buffer_2_V_V19258322_dout { I 8 vector } in_buffer_2_V_V19258322_empty_n { I 1 bit } in_buffer_2_V_V19258322_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1543 \
    name in_buffer_2_V_V19258323 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258323 \
    op interface \
    ports { in_buffer_2_V_V19258323_dout { I 8 vector } in_buffer_2_V_V19258323_empty_n { I 1 bit } in_buffer_2_V_V19258323_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1544 \
    name in_buffer_2_V_V19258324 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258324 \
    op interface \
    ports { in_buffer_2_V_V19258324_dout { I 8 vector } in_buffer_2_V_V19258324_empty_n { I 1 bit } in_buffer_2_V_V19258324_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1545 \
    name in_buffer_2_V_V19258325 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258325 \
    op interface \
    ports { in_buffer_2_V_V19258325_dout { I 8 vector } in_buffer_2_V_V19258325_empty_n { I 1 bit } in_buffer_2_V_V19258325_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1546 \
    name in_buffer_2_V_V19258326 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258326 \
    op interface \
    ports { in_buffer_2_V_V19258326_dout { I 8 vector } in_buffer_2_V_V19258326_empty_n { I 1 bit } in_buffer_2_V_V19258326_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1547 \
    name in_buffer_2_V_V19258327 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258327 \
    op interface \
    ports { in_buffer_2_V_V19258327_dout { I 8 vector } in_buffer_2_V_V19258327_empty_n { I 1 bit } in_buffer_2_V_V19258327_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1548 \
    name in_buffer_2_V_V19258328 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258328 \
    op interface \
    ports { in_buffer_2_V_V19258328_dout { I 8 vector } in_buffer_2_V_V19258328_empty_n { I 1 bit } in_buffer_2_V_V19258328_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1549 \
    name in_buffer_2_V_V19258329 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258329 \
    op interface \
    ports { in_buffer_2_V_V19258329_dout { I 8 vector } in_buffer_2_V_V19258329_empty_n { I 1 bit } in_buffer_2_V_V19258329_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1550 \
    name in_buffer_2_V_V19258330 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258330 \
    op interface \
    ports { in_buffer_2_V_V19258330_dout { I 8 vector } in_buffer_2_V_V19258330_empty_n { I 1 bit } in_buffer_2_V_V19258330_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1551 \
    name in_buffer_2_V_V19258331 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258331 \
    op interface \
    ports { in_buffer_2_V_V19258331_dout { I 8 vector } in_buffer_2_V_V19258331_empty_n { I 1 bit } in_buffer_2_V_V19258331_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1552 \
    name in_buffer_2_V_V19258332 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258332 \
    op interface \
    ports { in_buffer_2_V_V19258332_dout { I 8 vector } in_buffer_2_V_V19258332_empty_n { I 1 bit } in_buffer_2_V_V19258332_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1553 \
    name in_buffer_2_V_V19258333 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258333 \
    op interface \
    ports { in_buffer_2_V_V19258333_dout { I 8 vector } in_buffer_2_V_V19258333_empty_n { I 1 bit } in_buffer_2_V_V19258333_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1554 \
    name in_buffer_2_V_V19258334 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258334 \
    op interface \
    ports { in_buffer_2_V_V19258334_dout { I 8 vector } in_buffer_2_V_V19258334_empty_n { I 1 bit } in_buffer_2_V_V19258334_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1555 \
    name in_buffer_2_V_V19258335 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258335 \
    op interface \
    ports { in_buffer_2_V_V19258335_dout { I 8 vector } in_buffer_2_V_V19258335_empty_n { I 1 bit } in_buffer_2_V_V19258335_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1556 \
    name in_buffer_2_V_V19258336 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258336 \
    op interface \
    ports { in_buffer_2_V_V19258336_dout { I 8 vector } in_buffer_2_V_V19258336_empty_n { I 1 bit } in_buffer_2_V_V19258336_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1557 \
    name in_buffer_2_V_V19258337 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258337 \
    op interface \
    ports { in_buffer_2_V_V19258337_dout { I 8 vector } in_buffer_2_V_V19258337_empty_n { I 1 bit } in_buffer_2_V_V19258337_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1558 \
    name in_buffer_2_V_V19258338 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258338 \
    op interface \
    ports { in_buffer_2_V_V19258338_dout { I 8 vector } in_buffer_2_V_V19258338_empty_n { I 1 bit } in_buffer_2_V_V19258338_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1559 \
    name in_buffer_2_V_V19258339 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258339 \
    op interface \
    ports { in_buffer_2_V_V19258339_dout { I 8 vector } in_buffer_2_V_V19258339_empty_n { I 1 bit } in_buffer_2_V_V19258339_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1560 \
    name in_buffer_2_V_V19258340 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258340 \
    op interface \
    ports { in_buffer_2_V_V19258340_dout { I 8 vector } in_buffer_2_V_V19258340_empty_n { I 1 bit } in_buffer_2_V_V19258340_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1561 \
    name in_buffer_2_V_V19258341 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258341 \
    op interface \
    ports { in_buffer_2_V_V19258341_dout { I 8 vector } in_buffer_2_V_V19258341_empty_n { I 1 bit } in_buffer_2_V_V19258341_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1562 \
    name in_buffer_2_V_V19258342 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258342 \
    op interface \
    ports { in_buffer_2_V_V19258342_dout { I 8 vector } in_buffer_2_V_V19258342_empty_n { I 1 bit } in_buffer_2_V_V19258342_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1563 \
    name in_buffer_2_V_V19258343 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258343 \
    op interface \
    ports { in_buffer_2_V_V19258343_dout { I 8 vector } in_buffer_2_V_V19258343_empty_n { I 1 bit } in_buffer_2_V_V19258343_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1564 \
    name in_buffer_2_V_V19258344 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258344 \
    op interface \
    ports { in_buffer_2_V_V19258344_dout { I 8 vector } in_buffer_2_V_V19258344_empty_n { I 1 bit } in_buffer_2_V_V19258344_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1565 \
    name in_buffer_2_V_V19258345 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258345 \
    op interface \
    ports { in_buffer_2_V_V19258345_dout { I 8 vector } in_buffer_2_V_V19258345_empty_n { I 1 bit } in_buffer_2_V_V19258345_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1566 \
    name in_buffer_2_V_V19258346 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258346 \
    op interface \
    ports { in_buffer_2_V_V19258346_dout { I 8 vector } in_buffer_2_V_V19258346_empty_n { I 1 bit } in_buffer_2_V_V19258346_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1567 \
    name in_buffer_2_V_V19258347 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258347 \
    op interface \
    ports { in_buffer_2_V_V19258347_dout { I 8 vector } in_buffer_2_V_V19258347_empty_n { I 1 bit } in_buffer_2_V_V19258347_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1568 \
    name in_buffer_2_V_V19258348 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258348 \
    op interface \
    ports { in_buffer_2_V_V19258348_dout { I 8 vector } in_buffer_2_V_V19258348_empty_n { I 1 bit } in_buffer_2_V_V19258348_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1569 \
    name in_buffer_2_V_V19258349 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258349 \
    op interface \
    ports { in_buffer_2_V_V19258349_dout { I 8 vector } in_buffer_2_V_V19258349_empty_n { I 1 bit } in_buffer_2_V_V19258349_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1570 \
    name in_buffer_2_V_V19258350 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258350 \
    op interface \
    ports { in_buffer_2_V_V19258350_dout { I 8 vector } in_buffer_2_V_V19258350_empty_n { I 1 bit } in_buffer_2_V_V19258350_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1571 \
    name in_buffer_2_V_V19258351 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258351 \
    op interface \
    ports { in_buffer_2_V_V19258351_dout { I 8 vector } in_buffer_2_V_V19258351_empty_n { I 1 bit } in_buffer_2_V_V19258351_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1572 \
    name in_buffer_2_V_V19258352 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258352 \
    op interface \
    ports { in_buffer_2_V_V19258352_dout { I 8 vector } in_buffer_2_V_V19258352_empty_n { I 1 bit } in_buffer_2_V_V19258352_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1573 \
    name in_buffer_2_V_V19258353 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258353 \
    op interface \
    ports { in_buffer_2_V_V19258353_dout { I 8 vector } in_buffer_2_V_V19258353_empty_n { I 1 bit } in_buffer_2_V_V19258353_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1574 \
    name in_buffer_2_V_V19258354 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258354 \
    op interface \
    ports { in_buffer_2_V_V19258354_dout { I 8 vector } in_buffer_2_V_V19258354_empty_n { I 1 bit } in_buffer_2_V_V19258354_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1575 \
    name in_buffer_2_V_V19258355 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258355 \
    op interface \
    ports { in_buffer_2_V_V19258355_dout { I 8 vector } in_buffer_2_V_V19258355_empty_n { I 1 bit } in_buffer_2_V_V19258355_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1576 \
    name in_buffer_2_V_V19258356 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258356 \
    op interface \
    ports { in_buffer_2_V_V19258356_dout { I 8 vector } in_buffer_2_V_V19258356_empty_n { I 1 bit } in_buffer_2_V_V19258356_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1577 \
    name in_buffer_2_V_V19258357 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258357 \
    op interface \
    ports { in_buffer_2_V_V19258357_dout { I 8 vector } in_buffer_2_V_V19258357_empty_n { I 1 bit } in_buffer_2_V_V19258357_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1578 \
    name in_buffer_2_V_V19258358 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258358 \
    op interface \
    ports { in_buffer_2_V_V19258358_dout { I 8 vector } in_buffer_2_V_V19258358_empty_n { I 1 bit } in_buffer_2_V_V19258358_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1579 \
    name in_buffer_2_V_V19258359 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258359 \
    op interface \
    ports { in_buffer_2_V_V19258359_dout { I 8 vector } in_buffer_2_V_V19258359_empty_n { I 1 bit } in_buffer_2_V_V19258359_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1580 \
    name in_buffer_2_V_V19258360 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258360 \
    op interface \
    ports { in_buffer_2_V_V19258360_dout { I 8 vector } in_buffer_2_V_V19258360_empty_n { I 1 bit } in_buffer_2_V_V19258360_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1581 \
    name in_buffer_2_V_V19258361 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258361 \
    op interface \
    ports { in_buffer_2_V_V19258361_dout { I 8 vector } in_buffer_2_V_V19258361_empty_n { I 1 bit } in_buffer_2_V_V19258361_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1582 \
    name in_buffer_2_V_V19258362 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258362 \
    op interface \
    ports { in_buffer_2_V_V19258362_dout { I 8 vector } in_buffer_2_V_V19258362_empty_n { I 1 bit } in_buffer_2_V_V19258362_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1583 \
    name in_buffer_2_V_V19258363 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258363 \
    op interface \
    ports { in_buffer_2_V_V19258363_dout { I 8 vector } in_buffer_2_V_V19258363_empty_n { I 1 bit } in_buffer_2_V_V19258363_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1584 \
    name in_buffer_2_V_V19258364 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258364 \
    op interface \
    ports { in_buffer_2_V_V19258364_dout { I 8 vector } in_buffer_2_V_V19258364_empty_n { I 1 bit } in_buffer_2_V_V19258364_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1585 \
    name in_buffer_2_V_V19258365 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258365 \
    op interface \
    ports { in_buffer_2_V_V19258365_dout { I 8 vector } in_buffer_2_V_V19258365_empty_n { I 1 bit } in_buffer_2_V_V19258365_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1586 \
    name in_buffer_2_V_V19258366 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258366 \
    op interface \
    ports { in_buffer_2_V_V19258366_dout { I 8 vector } in_buffer_2_V_V19258366_empty_n { I 1 bit } in_buffer_2_V_V19258366_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1587 \
    name in_buffer_2_V_V19258367 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258367 \
    op interface \
    ports { in_buffer_2_V_V19258367_dout { I 8 vector } in_buffer_2_V_V19258367_empty_n { I 1 bit } in_buffer_2_V_V19258367_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1588 \
    name in_buffer_2_V_V19258368 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258368 \
    op interface \
    ports { in_buffer_2_V_V19258368_dout { I 8 vector } in_buffer_2_V_V19258368_empty_n { I 1 bit } in_buffer_2_V_V19258368_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1589 \
    name in_buffer_2_V_V19258369 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258369 \
    op interface \
    ports { in_buffer_2_V_V19258369_dout { I 8 vector } in_buffer_2_V_V19258369_empty_n { I 1 bit } in_buffer_2_V_V19258369_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1590 \
    name in_buffer_2_V_V19258370 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258370 \
    op interface \
    ports { in_buffer_2_V_V19258370_dout { I 8 vector } in_buffer_2_V_V19258370_empty_n { I 1 bit } in_buffer_2_V_V19258370_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1591 \
    name in_buffer_2_V_V19258371 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258371 \
    op interface \
    ports { in_buffer_2_V_V19258371_dout { I 8 vector } in_buffer_2_V_V19258371_empty_n { I 1 bit } in_buffer_2_V_V19258371_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1592 \
    name in_buffer_2_V_V19258372 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258372 \
    op interface \
    ports { in_buffer_2_V_V19258372_dout { I 8 vector } in_buffer_2_V_V19258372_empty_n { I 1 bit } in_buffer_2_V_V19258372_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1593 \
    name in_buffer_2_V_V19258373 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258373 \
    op interface \
    ports { in_buffer_2_V_V19258373_dout { I 8 vector } in_buffer_2_V_V19258373_empty_n { I 1 bit } in_buffer_2_V_V19258373_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1594 \
    name in_buffer_2_V_V19258374 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258374 \
    op interface \
    ports { in_buffer_2_V_V19258374_dout { I 8 vector } in_buffer_2_V_V19258374_empty_n { I 1 bit } in_buffer_2_V_V19258374_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1595 \
    name in_buffer_2_V_V19258375 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258375 \
    op interface \
    ports { in_buffer_2_V_V19258375_dout { I 8 vector } in_buffer_2_V_V19258375_empty_n { I 1 bit } in_buffer_2_V_V19258375_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1596 \
    name in_buffer_2_V_V19258376 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258376 \
    op interface \
    ports { in_buffer_2_V_V19258376_dout { I 8 vector } in_buffer_2_V_V19258376_empty_n { I 1 bit } in_buffer_2_V_V19258376_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1597 \
    name in_buffer_2_V_V19258377 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258377 \
    op interface \
    ports { in_buffer_2_V_V19258377_dout { I 8 vector } in_buffer_2_V_V19258377_empty_n { I 1 bit } in_buffer_2_V_V19258377_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1598 \
    name in_buffer_2_V_V19258378 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258378 \
    op interface \
    ports { in_buffer_2_V_V19258378_dout { I 8 vector } in_buffer_2_V_V19258378_empty_n { I 1 bit } in_buffer_2_V_V19258378_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1599 \
    name in_buffer_2_V_V19258379 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258379 \
    op interface \
    ports { in_buffer_2_V_V19258379_dout { I 8 vector } in_buffer_2_V_V19258379_empty_n { I 1 bit } in_buffer_2_V_V19258379_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1600 \
    name in_buffer_2_V_V19258380 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258380 \
    op interface \
    ports { in_buffer_2_V_V19258380_dout { I 8 vector } in_buffer_2_V_V19258380_empty_n { I 1 bit } in_buffer_2_V_V19258380_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1601 \
    name in_buffer_2_V_V19258381 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V19258381 \
    op interface \
    ports { in_buffer_2_V_V19258381_dout { I 8 vector } in_buffer_2_V_V19258381_empty_n { I 1 bit } in_buffer_2_V_V19258381_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1602 \
    name out_V_V22 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V22 \
    op interface \
    ports { out_V_V22_din { O 32 vector } out_V_V22_full_n { I 1 bit } out_V_V22_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1603 \
    name out_V_V22262 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V22262 \
    op interface \
    ports { out_V_V22262_din { O 32 vector } out_V_V22262_full_n { I 1 bit } out_V_V22262_write { O 1 bit } } \
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


