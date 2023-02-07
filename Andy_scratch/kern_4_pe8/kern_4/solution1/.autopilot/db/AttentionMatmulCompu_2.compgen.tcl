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
    id 1147 \
    name in_n_r_V_V1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_n_r_V_V1 \
    op interface \
    ports { in_n_r_V_V1_dout { I 32 vector } in_n_r_V_V1_empty_n { I 1 bit } in_n_r_V_V1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1148 \
    name in_n_c_V_V8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_n_c_V_V8 \
    op interface \
    ports { in_n_c_V_V8_dout { I 32 vector } in_n_c_V_V8_empty_n { I 1 bit } in_n_c_V_V8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1149 \
    name in_buffer_1_V_V1564 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1564 \
    op interface \
    ports { in_buffer_1_V_V1564_dout { I 8 vector } in_buffer_1_V_V1564_empty_n { I 1 bit } in_buffer_1_V_V1564_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1150 \
    name in_buffer_1_V_V1565 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1565 \
    op interface \
    ports { in_buffer_1_V_V1565_dout { I 8 vector } in_buffer_1_V_V1565_empty_n { I 1 bit } in_buffer_1_V_V1565_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1151 \
    name in_buffer_1_V_V1566 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1566 \
    op interface \
    ports { in_buffer_1_V_V1566_dout { I 8 vector } in_buffer_1_V_V1566_empty_n { I 1 bit } in_buffer_1_V_V1566_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1152 \
    name in_buffer_1_V_V1567 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1567 \
    op interface \
    ports { in_buffer_1_V_V1567_dout { I 8 vector } in_buffer_1_V_V1567_empty_n { I 1 bit } in_buffer_1_V_V1567_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1153 \
    name in_buffer_1_V_V1568 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1568 \
    op interface \
    ports { in_buffer_1_V_V1568_dout { I 8 vector } in_buffer_1_V_V1568_empty_n { I 1 bit } in_buffer_1_V_V1568_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1154 \
    name in_buffer_1_V_V1569 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1569 \
    op interface \
    ports { in_buffer_1_V_V1569_dout { I 8 vector } in_buffer_1_V_V1569_empty_n { I 1 bit } in_buffer_1_V_V1569_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1155 \
    name in_buffer_1_V_V1570 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1570 \
    op interface \
    ports { in_buffer_1_V_V1570_dout { I 8 vector } in_buffer_1_V_V1570_empty_n { I 1 bit } in_buffer_1_V_V1570_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1156 \
    name in_buffer_1_V_V1571 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1571 \
    op interface \
    ports { in_buffer_1_V_V1571_dout { I 8 vector } in_buffer_1_V_V1571_empty_n { I 1 bit } in_buffer_1_V_V1571_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1157 \
    name in_buffer_1_V_V1572 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1572 \
    op interface \
    ports { in_buffer_1_V_V1572_dout { I 8 vector } in_buffer_1_V_V1572_empty_n { I 1 bit } in_buffer_1_V_V1572_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1158 \
    name in_buffer_1_V_V1573 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1573 \
    op interface \
    ports { in_buffer_1_V_V1573_dout { I 8 vector } in_buffer_1_V_V1573_empty_n { I 1 bit } in_buffer_1_V_V1573_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1159 \
    name in_buffer_1_V_V1574 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1574 \
    op interface \
    ports { in_buffer_1_V_V1574_dout { I 8 vector } in_buffer_1_V_V1574_empty_n { I 1 bit } in_buffer_1_V_V1574_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1160 \
    name in_buffer_1_V_V1575 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1575 \
    op interface \
    ports { in_buffer_1_V_V1575_dout { I 8 vector } in_buffer_1_V_V1575_empty_n { I 1 bit } in_buffer_1_V_V1575_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1161 \
    name in_buffer_1_V_V1576 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1576 \
    op interface \
    ports { in_buffer_1_V_V1576_dout { I 8 vector } in_buffer_1_V_V1576_empty_n { I 1 bit } in_buffer_1_V_V1576_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1162 \
    name in_buffer_1_V_V1577 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1577 \
    op interface \
    ports { in_buffer_1_V_V1577_dout { I 8 vector } in_buffer_1_V_V1577_empty_n { I 1 bit } in_buffer_1_V_V1577_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1163 \
    name in_buffer_1_V_V1578 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1578 \
    op interface \
    ports { in_buffer_1_V_V1578_dout { I 8 vector } in_buffer_1_V_V1578_empty_n { I 1 bit } in_buffer_1_V_V1578_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1164 \
    name in_buffer_1_V_V1579 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1579 \
    op interface \
    ports { in_buffer_1_V_V1579_dout { I 8 vector } in_buffer_1_V_V1579_empty_n { I 1 bit } in_buffer_1_V_V1579_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1165 \
    name in_buffer_1_V_V1580 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1580 \
    op interface \
    ports { in_buffer_1_V_V1580_dout { I 8 vector } in_buffer_1_V_V1580_empty_n { I 1 bit } in_buffer_1_V_V1580_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1166 \
    name in_buffer_1_V_V1581 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1581 \
    op interface \
    ports { in_buffer_1_V_V1581_dout { I 8 vector } in_buffer_1_V_V1581_empty_n { I 1 bit } in_buffer_1_V_V1581_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1167 \
    name in_buffer_1_V_V1582 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1582 \
    op interface \
    ports { in_buffer_1_V_V1582_dout { I 8 vector } in_buffer_1_V_V1582_empty_n { I 1 bit } in_buffer_1_V_V1582_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1168 \
    name in_buffer_1_V_V1583 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1583 \
    op interface \
    ports { in_buffer_1_V_V1583_dout { I 8 vector } in_buffer_1_V_V1583_empty_n { I 1 bit } in_buffer_1_V_V1583_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1169 \
    name in_buffer_1_V_V1584 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1584 \
    op interface \
    ports { in_buffer_1_V_V1584_dout { I 8 vector } in_buffer_1_V_V1584_empty_n { I 1 bit } in_buffer_1_V_V1584_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1170 \
    name in_buffer_1_V_V1585 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1585 \
    op interface \
    ports { in_buffer_1_V_V1585_dout { I 8 vector } in_buffer_1_V_V1585_empty_n { I 1 bit } in_buffer_1_V_V1585_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1171 \
    name in_buffer_1_V_V1586 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1586 \
    op interface \
    ports { in_buffer_1_V_V1586_dout { I 8 vector } in_buffer_1_V_V1586_empty_n { I 1 bit } in_buffer_1_V_V1586_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1172 \
    name in_buffer_1_V_V1587 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1587 \
    op interface \
    ports { in_buffer_1_V_V1587_dout { I 8 vector } in_buffer_1_V_V1587_empty_n { I 1 bit } in_buffer_1_V_V1587_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1173 \
    name in_buffer_1_V_V1588 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1588 \
    op interface \
    ports { in_buffer_1_V_V1588_dout { I 8 vector } in_buffer_1_V_V1588_empty_n { I 1 bit } in_buffer_1_V_V1588_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1174 \
    name in_buffer_1_V_V1589 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1589 \
    op interface \
    ports { in_buffer_1_V_V1589_dout { I 8 vector } in_buffer_1_V_V1589_empty_n { I 1 bit } in_buffer_1_V_V1589_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1175 \
    name in_buffer_1_V_V1590 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1590 \
    op interface \
    ports { in_buffer_1_V_V1590_dout { I 8 vector } in_buffer_1_V_V1590_empty_n { I 1 bit } in_buffer_1_V_V1590_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1176 \
    name in_buffer_1_V_V1591 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1591 \
    op interface \
    ports { in_buffer_1_V_V1591_dout { I 8 vector } in_buffer_1_V_V1591_empty_n { I 1 bit } in_buffer_1_V_V1591_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1177 \
    name in_buffer_1_V_V1592 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1592 \
    op interface \
    ports { in_buffer_1_V_V1592_dout { I 8 vector } in_buffer_1_V_V1592_empty_n { I 1 bit } in_buffer_1_V_V1592_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1178 \
    name in_buffer_1_V_V1593 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1593 \
    op interface \
    ports { in_buffer_1_V_V1593_dout { I 8 vector } in_buffer_1_V_V1593_empty_n { I 1 bit } in_buffer_1_V_V1593_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1179 \
    name in_buffer_1_V_V1594 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1594 \
    op interface \
    ports { in_buffer_1_V_V1594_dout { I 8 vector } in_buffer_1_V_V1594_empty_n { I 1 bit } in_buffer_1_V_V1594_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1180 \
    name in_buffer_1_V_V1595 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1595 \
    op interface \
    ports { in_buffer_1_V_V1595_dout { I 8 vector } in_buffer_1_V_V1595_empty_n { I 1 bit } in_buffer_1_V_V1595_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1181 \
    name in_buffer_1_V_V1596 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1596 \
    op interface \
    ports { in_buffer_1_V_V1596_dout { I 8 vector } in_buffer_1_V_V1596_empty_n { I 1 bit } in_buffer_1_V_V1596_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1182 \
    name in_buffer_1_V_V1597 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1597 \
    op interface \
    ports { in_buffer_1_V_V1597_dout { I 8 vector } in_buffer_1_V_V1597_empty_n { I 1 bit } in_buffer_1_V_V1597_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1183 \
    name in_buffer_1_V_V1598 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1598 \
    op interface \
    ports { in_buffer_1_V_V1598_dout { I 8 vector } in_buffer_1_V_V1598_empty_n { I 1 bit } in_buffer_1_V_V1598_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1184 \
    name in_buffer_1_V_V1599 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V1599 \
    op interface \
    ports { in_buffer_1_V_V1599_dout { I 8 vector } in_buffer_1_V_V1599_empty_n { I 1 bit } in_buffer_1_V_V1599_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1185 \
    name in_buffer_1_V_V15100 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15100 \
    op interface \
    ports { in_buffer_1_V_V15100_dout { I 8 vector } in_buffer_1_V_V15100_empty_n { I 1 bit } in_buffer_1_V_V15100_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1186 \
    name in_buffer_1_V_V15101 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15101 \
    op interface \
    ports { in_buffer_1_V_V15101_dout { I 8 vector } in_buffer_1_V_V15101_empty_n { I 1 bit } in_buffer_1_V_V15101_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1187 \
    name in_buffer_1_V_V15102 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15102 \
    op interface \
    ports { in_buffer_1_V_V15102_dout { I 8 vector } in_buffer_1_V_V15102_empty_n { I 1 bit } in_buffer_1_V_V15102_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1188 \
    name in_buffer_1_V_V15103 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15103 \
    op interface \
    ports { in_buffer_1_V_V15103_dout { I 8 vector } in_buffer_1_V_V15103_empty_n { I 1 bit } in_buffer_1_V_V15103_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1189 \
    name in_buffer_1_V_V15104 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15104 \
    op interface \
    ports { in_buffer_1_V_V15104_dout { I 8 vector } in_buffer_1_V_V15104_empty_n { I 1 bit } in_buffer_1_V_V15104_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1190 \
    name in_buffer_1_V_V15105 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15105 \
    op interface \
    ports { in_buffer_1_V_V15105_dout { I 8 vector } in_buffer_1_V_V15105_empty_n { I 1 bit } in_buffer_1_V_V15105_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1191 \
    name in_buffer_1_V_V15106 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15106 \
    op interface \
    ports { in_buffer_1_V_V15106_dout { I 8 vector } in_buffer_1_V_V15106_empty_n { I 1 bit } in_buffer_1_V_V15106_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1192 \
    name in_buffer_1_V_V15107 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15107 \
    op interface \
    ports { in_buffer_1_V_V15107_dout { I 8 vector } in_buffer_1_V_V15107_empty_n { I 1 bit } in_buffer_1_V_V15107_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1193 \
    name in_buffer_1_V_V15108 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15108 \
    op interface \
    ports { in_buffer_1_V_V15108_dout { I 8 vector } in_buffer_1_V_V15108_empty_n { I 1 bit } in_buffer_1_V_V15108_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1194 \
    name in_buffer_1_V_V15109 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15109 \
    op interface \
    ports { in_buffer_1_V_V15109_dout { I 8 vector } in_buffer_1_V_V15109_empty_n { I 1 bit } in_buffer_1_V_V15109_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1195 \
    name in_buffer_1_V_V15110 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15110 \
    op interface \
    ports { in_buffer_1_V_V15110_dout { I 8 vector } in_buffer_1_V_V15110_empty_n { I 1 bit } in_buffer_1_V_V15110_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1196 \
    name in_buffer_1_V_V15111 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15111 \
    op interface \
    ports { in_buffer_1_V_V15111_dout { I 8 vector } in_buffer_1_V_V15111_empty_n { I 1 bit } in_buffer_1_V_V15111_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1197 \
    name in_buffer_1_V_V15112 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15112 \
    op interface \
    ports { in_buffer_1_V_V15112_dout { I 8 vector } in_buffer_1_V_V15112_empty_n { I 1 bit } in_buffer_1_V_V15112_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1198 \
    name in_buffer_1_V_V15113 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15113 \
    op interface \
    ports { in_buffer_1_V_V15113_dout { I 8 vector } in_buffer_1_V_V15113_empty_n { I 1 bit } in_buffer_1_V_V15113_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1199 \
    name in_buffer_1_V_V15114 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15114 \
    op interface \
    ports { in_buffer_1_V_V15114_dout { I 8 vector } in_buffer_1_V_V15114_empty_n { I 1 bit } in_buffer_1_V_V15114_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1200 \
    name in_buffer_1_V_V15115 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15115 \
    op interface \
    ports { in_buffer_1_V_V15115_dout { I 8 vector } in_buffer_1_V_V15115_empty_n { I 1 bit } in_buffer_1_V_V15115_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1201 \
    name in_buffer_1_V_V15116 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15116 \
    op interface \
    ports { in_buffer_1_V_V15116_dout { I 8 vector } in_buffer_1_V_V15116_empty_n { I 1 bit } in_buffer_1_V_V15116_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1202 \
    name in_buffer_1_V_V15117 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15117 \
    op interface \
    ports { in_buffer_1_V_V15117_dout { I 8 vector } in_buffer_1_V_V15117_empty_n { I 1 bit } in_buffer_1_V_V15117_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1203 \
    name in_buffer_1_V_V15118 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15118 \
    op interface \
    ports { in_buffer_1_V_V15118_dout { I 8 vector } in_buffer_1_V_V15118_empty_n { I 1 bit } in_buffer_1_V_V15118_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1204 \
    name in_buffer_1_V_V15119 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15119 \
    op interface \
    ports { in_buffer_1_V_V15119_dout { I 8 vector } in_buffer_1_V_V15119_empty_n { I 1 bit } in_buffer_1_V_V15119_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1205 \
    name in_buffer_1_V_V15120 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15120 \
    op interface \
    ports { in_buffer_1_V_V15120_dout { I 8 vector } in_buffer_1_V_V15120_empty_n { I 1 bit } in_buffer_1_V_V15120_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1206 \
    name in_buffer_1_V_V15121 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15121 \
    op interface \
    ports { in_buffer_1_V_V15121_dout { I 8 vector } in_buffer_1_V_V15121_empty_n { I 1 bit } in_buffer_1_V_V15121_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1207 \
    name in_buffer_1_V_V15122 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15122 \
    op interface \
    ports { in_buffer_1_V_V15122_dout { I 8 vector } in_buffer_1_V_V15122_empty_n { I 1 bit } in_buffer_1_V_V15122_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1208 \
    name in_buffer_1_V_V15123 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15123 \
    op interface \
    ports { in_buffer_1_V_V15123_dout { I 8 vector } in_buffer_1_V_V15123_empty_n { I 1 bit } in_buffer_1_V_V15123_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1209 \
    name in_buffer_1_V_V15124 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15124 \
    op interface \
    ports { in_buffer_1_V_V15124_dout { I 8 vector } in_buffer_1_V_V15124_empty_n { I 1 bit } in_buffer_1_V_V15124_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1210 \
    name in_buffer_1_V_V15125 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15125 \
    op interface \
    ports { in_buffer_1_V_V15125_dout { I 8 vector } in_buffer_1_V_V15125_empty_n { I 1 bit } in_buffer_1_V_V15125_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1211 \
    name in_buffer_1_V_V15126 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15126 \
    op interface \
    ports { in_buffer_1_V_V15126_dout { I 8 vector } in_buffer_1_V_V15126_empty_n { I 1 bit } in_buffer_1_V_V15126_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1212 \
    name in_buffer_1_V_V15127 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_1_V_V15127 \
    op interface \
    ports { in_buffer_1_V_V15127_dout { I 8 vector } in_buffer_1_V_V15127_empty_n { I 1 bit } in_buffer_1_V_V15127_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1213 \
    name in_buffer_2_V_V18127 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18127 \
    op interface \
    ports { in_buffer_2_V_V18127_dout { I 8 vector } in_buffer_2_V_V18127_empty_n { I 1 bit } in_buffer_2_V_V18127_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1214 \
    name in_buffer_2_V_V18128 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18128 \
    op interface \
    ports { in_buffer_2_V_V18128_dout { I 8 vector } in_buffer_2_V_V18128_empty_n { I 1 bit } in_buffer_2_V_V18128_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1215 \
    name in_buffer_2_V_V18129 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18129 \
    op interface \
    ports { in_buffer_2_V_V18129_dout { I 8 vector } in_buffer_2_V_V18129_empty_n { I 1 bit } in_buffer_2_V_V18129_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1216 \
    name in_buffer_2_V_V18130 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18130 \
    op interface \
    ports { in_buffer_2_V_V18130_dout { I 8 vector } in_buffer_2_V_V18130_empty_n { I 1 bit } in_buffer_2_V_V18130_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1217 \
    name in_buffer_2_V_V18131 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18131 \
    op interface \
    ports { in_buffer_2_V_V18131_dout { I 8 vector } in_buffer_2_V_V18131_empty_n { I 1 bit } in_buffer_2_V_V18131_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1218 \
    name in_buffer_2_V_V18132 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18132 \
    op interface \
    ports { in_buffer_2_V_V18132_dout { I 8 vector } in_buffer_2_V_V18132_empty_n { I 1 bit } in_buffer_2_V_V18132_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1219 \
    name in_buffer_2_V_V18133 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18133 \
    op interface \
    ports { in_buffer_2_V_V18133_dout { I 8 vector } in_buffer_2_V_V18133_empty_n { I 1 bit } in_buffer_2_V_V18133_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1220 \
    name in_buffer_2_V_V18134 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18134 \
    op interface \
    ports { in_buffer_2_V_V18134_dout { I 8 vector } in_buffer_2_V_V18134_empty_n { I 1 bit } in_buffer_2_V_V18134_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1221 \
    name in_buffer_2_V_V18135 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18135 \
    op interface \
    ports { in_buffer_2_V_V18135_dout { I 8 vector } in_buffer_2_V_V18135_empty_n { I 1 bit } in_buffer_2_V_V18135_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1222 \
    name in_buffer_2_V_V18136 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18136 \
    op interface \
    ports { in_buffer_2_V_V18136_dout { I 8 vector } in_buffer_2_V_V18136_empty_n { I 1 bit } in_buffer_2_V_V18136_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1223 \
    name in_buffer_2_V_V18137 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18137 \
    op interface \
    ports { in_buffer_2_V_V18137_dout { I 8 vector } in_buffer_2_V_V18137_empty_n { I 1 bit } in_buffer_2_V_V18137_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1224 \
    name in_buffer_2_V_V18138 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18138 \
    op interface \
    ports { in_buffer_2_V_V18138_dout { I 8 vector } in_buffer_2_V_V18138_empty_n { I 1 bit } in_buffer_2_V_V18138_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1225 \
    name in_buffer_2_V_V18139 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18139 \
    op interface \
    ports { in_buffer_2_V_V18139_dout { I 8 vector } in_buffer_2_V_V18139_empty_n { I 1 bit } in_buffer_2_V_V18139_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1226 \
    name in_buffer_2_V_V18140 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18140 \
    op interface \
    ports { in_buffer_2_V_V18140_dout { I 8 vector } in_buffer_2_V_V18140_empty_n { I 1 bit } in_buffer_2_V_V18140_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1227 \
    name in_buffer_2_V_V18141 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18141 \
    op interface \
    ports { in_buffer_2_V_V18141_dout { I 8 vector } in_buffer_2_V_V18141_empty_n { I 1 bit } in_buffer_2_V_V18141_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1228 \
    name in_buffer_2_V_V18142 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18142 \
    op interface \
    ports { in_buffer_2_V_V18142_dout { I 8 vector } in_buffer_2_V_V18142_empty_n { I 1 bit } in_buffer_2_V_V18142_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1229 \
    name in_buffer_2_V_V18143 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18143 \
    op interface \
    ports { in_buffer_2_V_V18143_dout { I 8 vector } in_buffer_2_V_V18143_empty_n { I 1 bit } in_buffer_2_V_V18143_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1230 \
    name in_buffer_2_V_V18144 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18144 \
    op interface \
    ports { in_buffer_2_V_V18144_dout { I 8 vector } in_buffer_2_V_V18144_empty_n { I 1 bit } in_buffer_2_V_V18144_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1231 \
    name in_buffer_2_V_V18145 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18145 \
    op interface \
    ports { in_buffer_2_V_V18145_dout { I 8 vector } in_buffer_2_V_V18145_empty_n { I 1 bit } in_buffer_2_V_V18145_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1232 \
    name in_buffer_2_V_V18146 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18146 \
    op interface \
    ports { in_buffer_2_V_V18146_dout { I 8 vector } in_buffer_2_V_V18146_empty_n { I 1 bit } in_buffer_2_V_V18146_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1233 \
    name in_buffer_2_V_V18147 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18147 \
    op interface \
    ports { in_buffer_2_V_V18147_dout { I 8 vector } in_buffer_2_V_V18147_empty_n { I 1 bit } in_buffer_2_V_V18147_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1234 \
    name in_buffer_2_V_V18148 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18148 \
    op interface \
    ports { in_buffer_2_V_V18148_dout { I 8 vector } in_buffer_2_V_V18148_empty_n { I 1 bit } in_buffer_2_V_V18148_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1235 \
    name in_buffer_2_V_V18149 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18149 \
    op interface \
    ports { in_buffer_2_V_V18149_dout { I 8 vector } in_buffer_2_V_V18149_empty_n { I 1 bit } in_buffer_2_V_V18149_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1236 \
    name in_buffer_2_V_V18150 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18150 \
    op interface \
    ports { in_buffer_2_V_V18150_dout { I 8 vector } in_buffer_2_V_V18150_empty_n { I 1 bit } in_buffer_2_V_V18150_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1237 \
    name in_buffer_2_V_V18151 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18151 \
    op interface \
    ports { in_buffer_2_V_V18151_dout { I 8 vector } in_buffer_2_V_V18151_empty_n { I 1 bit } in_buffer_2_V_V18151_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1238 \
    name in_buffer_2_V_V18152 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18152 \
    op interface \
    ports { in_buffer_2_V_V18152_dout { I 8 vector } in_buffer_2_V_V18152_empty_n { I 1 bit } in_buffer_2_V_V18152_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1239 \
    name in_buffer_2_V_V18153 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18153 \
    op interface \
    ports { in_buffer_2_V_V18153_dout { I 8 vector } in_buffer_2_V_V18153_empty_n { I 1 bit } in_buffer_2_V_V18153_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1240 \
    name in_buffer_2_V_V18154 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18154 \
    op interface \
    ports { in_buffer_2_V_V18154_dout { I 8 vector } in_buffer_2_V_V18154_empty_n { I 1 bit } in_buffer_2_V_V18154_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1241 \
    name in_buffer_2_V_V18155 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18155 \
    op interface \
    ports { in_buffer_2_V_V18155_dout { I 8 vector } in_buffer_2_V_V18155_empty_n { I 1 bit } in_buffer_2_V_V18155_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1242 \
    name in_buffer_2_V_V18156 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18156 \
    op interface \
    ports { in_buffer_2_V_V18156_dout { I 8 vector } in_buffer_2_V_V18156_empty_n { I 1 bit } in_buffer_2_V_V18156_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1243 \
    name in_buffer_2_V_V18157 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18157 \
    op interface \
    ports { in_buffer_2_V_V18157_dout { I 8 vector } in_buffer_2_V_V18157_empty_n { I 1 bit } in_buffer_2_V_V18157_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1244 \
    name in_buffer_2_V_V18158 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18158 \
    op interface \
    ports { in_buffer_2_V_V18158_dout { I 8 vector } in_buffer_2_V_V18158_empty_n { I 1 bit } in_buffer_2_V_V18158_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1245 \
    name in_buffer_2_V_V18159 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18159 \
    op interface \
    ports { in_buffer_2_V_V18159_dout { I 8 vector } in_buffer_2_V_V18159_empty_n { I 1 bit } in_buffer_2_V_V18159_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1246 \
    name in_buffer_2_V_V18160 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18160 \
    op interface \
    ports { in_buffer_2_V_V18160_dout { I 8 vector } in_buffer_2_V_V18160_empty_n { I 1 bit } in_buffer_2_V_V18160_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1247 \
    name in_buffer_2_V_V18161 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18161 \
    op interface \
    ports { in_buffer_2_V_V18161_dout { I 8 vector } in_buffer_2_V_V18161_empty_n { I 1 bit } in_buffer_2_V_V18161_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1248 \
    name in_buffer_2_V_V18162 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18162 \
    op interface \
    ports { in_buffer_2_V_V18162_dout { I 8 vector } in_buffer_2_V_V18162_empty_n { I 1 bit } in_buffer_2_V_V18162_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1249 \
    name in_buffer_2_V_V18163 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18163 \
    op interface \
    ports { in_buffer_2_V_V18163_dout { I 8 vector } in_buffer_2_V_V18163_empty_n { I 1 bit } in_buffer_2_V_V18163_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1250 \
    name in_buffer_2_V_V18164 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18164 \
    op interface \
    ports { in_buffer_2_V_V18164_dout { I 8 vector } in_buffer_2_V_V18164_empty_n { I 1 bit } in_buffer_2_V_V18164_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1251 \
    name in_buffer_2_V_V18165 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18165 \
    op interface \
    ports { in_buffer_2_V_V18165_dout { I 8 vector } in_buffer_2_V_V18165_empty_n { I 1 bit } in_buffer_2_V_V18165_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1252 \
    name in_buffer_2_V_V18166 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18166 \
    op interface \
    ports { in_buffer_2_V_V18166_dout { I 8 vector } in_buffer_2_V_V18166_empty_n { I 1 bit } in_buffer_2_V_V18166_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1253 \
    name in_buffer_2_V_V18167 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18167 \
    op interface \
    ports { in_buffer_2_V_V18167_dout { I 8 vector } in_buffer_2_V_V18167_empty_n { I 1 bit } in_buffer_2_V_V18167_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1254 \
    name in_buffer_2_V_V18168 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18168 \
    op interface \
    ports { in_buffer_2_V_V18168_dout { I 8 vector } in_buffer_2_V_V18168_empty_n { I 1 bit } in_buffer_2_V_V18168_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1255 \
    name in_buffer_2_V_V18169 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18169 \
    op interface \
    ports { in_buffer_2_V_V18169_dout { I 8 vector } in_buffer_2_V_V18169_empty_n { I 1 bit } in_buffer_2_V_V18169_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1256 \
    name in_buffer_2_V_V18170 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18170 \
    op interface \
    ports { in_buffer_2_V_V18170_dout { I 8 vector } in_buffer_2_V_V18170_empty_n { I 1 bit } in_buffer_2_V_V18170_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1257 \
    name in_buffer_2_V_V18171 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18171 \
    op interface \
    ports { in_buffer_2_V_V18171_dout { I 8 vector } in_buffer_2_V_V18171_empty_n { I 1 bit } in_buffer_2_V_V18171_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1258 \
    name in_buffer_2_V_V18172 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18172 \
    op interface \
    ports { in_buffer_2_V_V18172_dout { I 8 vector } in_buffer_2_V_V18172_empty_n { I 1 bit } in_buffer_2_V_V18172_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1259 \
    name in_buffer_2_V_V18173 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18173 \
    op interface \
    ports { in_buffer_2_V_V18173_dout { I 8 vector } in_buffer_2_V_V18173_empty_n { I 1 bit } in_buffer_2_V_V18173_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1260 \
    name in_buffer_2_V_V18174 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18174 \
    op interface \
    ports { in_buffer_2_V_V18174_dout { I 8 vector } in_buffer_2_V_V18174_empty_n { I 1 bit } in_buffer_2_V_V18174_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1261 \
    name in_buffer_2_V_V18175 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18175 \
    op interface \
    ports { in_buffer_2_V_V18175_dout { I 8 vector } in_buffer_2_V_V18175_empty_n { I 1 bit } in_buffer_2_V_V18175_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1262 \
    name in_buffer_2_V_V18176 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18176 \
    op interface \
    ports { in_buffer_2_V_V18176_dout { I 8 vector } in_buffer_2_V_V18176_empty_n { I 1 bit } in_buffer_2_V_V18176_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1263 \
    name in_buffer_2_V_V18177 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18177 \
    op interface \
    ports { in_buffer_2_V_V18177_dout { I 8 vector } in_buffer_2_V_V18177_empty_n { I 1 bit } in_buffer_2_V_V18177_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1264 \
    name in_buffer_2_V_V18178 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18178 \
    op interface \
    ports { in_buffer_2_V_V18178_dout { I 8 vector } in_buffer_2_V_V18178_empty_n { I 1 bit } in_buffer_2_V_V18178_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1265 \
    name in_buffer_2_V_V18179 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18179 \
    op interface \
    ports { in_buffer_2_V_V18179_dout { I 8 vector } in_buffer_2_V_V18179_empty_n { I 1 bit } in_buffer_2_V_V18179_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1266 \
    name in_buffer_2_V_V18180 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18180 \
    op interface \
    ports { in_buffer_2_V_V18180_dout { I 8 vector } in_buffer_2_V_V18180_empty_n { I 1 bit } in_buffer_2_V_V18180_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1267 \
    name in_buffer_2_V_V18181 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18181 \
    op interface \
    ports { in_buffer_2_V_V18181_dout { I 8 vector } in_buffer_2_V_V18181_empty_n { I 1 bit } in_buffer_2_V_V18181_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1268 \
    name in_buffer_2_V_V18182 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18182 \
    op interface \
    ports { in_buffer_2_V_V18182_dout { I 8 vector } in_buffer_2_V_V18182_empty_n { I 1 bit } in_buffer_2_V_V18182_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1269 \
    name in_buffer_2_V_V18183 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18183 \
    op interface \
    ports { in_buffer_2_V_V18183_dout { I 8 vector } in_buffer_2_V_V18183_empty_n { I 1 bit } in_buffer_2_V_V18183_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1270 \
    name in_buffer_2_V_V18184 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18184 \
    op interface \
    ports { in_buffer_2_V_V18184_dout { I 8 vector } in_buffer_2_V_V18184_empty_n { I 1 bit } in_buffer_2_V_V18184_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1271 \
    name in_buffer_2_V_V18185 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18185 \
    op interface \
    ports { in_buffer_2_V_V18185_dout { I 8 vector } in_buffer_2_V_V18185_empty_n { I 1 bit } in_buffer_2_V_V18185_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1272 \
    name in_buffer_2_V_V18186 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18186 \
    op interface \
    ports { in_buffer_2_V_V18186_dout { I 8 vector } in_buffer_2_V_V18186_empty_n { I 1 bit } in_buffer_2_V_V18186_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1273 \
    name in_buffer_2_V_V18187 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18187 \
    op interface \
    ports { in_buffer_2_V_V18187_dout { I 8 vector } in_buffer_2_V_V18187_empty_n { I 1 bit } in_buffer_2_V_V18187_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1274 \
    name in_buffer_2_V_V18188 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18188 \
    op interface \
    ports { in_buffer_2_V_V18188_dout { I 8 vector } in_buffer_2_V_V18188_empty_n { I 1 bit } in_buffer_2_V_V18188_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1275 \
    name in_buffer_2_V_V18189 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18189 \
    op interface \
    ports { in_buffer_2_V_V18189_dout { I 8 vector } in_buffer_2_V_V18189_empty_n { I 1 bit } in_buffer_2_V_V18189_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1276 \
    name in_buffer_2_V_V18190 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18190 \
    op interface \
    ports { in_buffer_2_V_V18190_dout { I 8 vector } in_buffer_2_V_V18190_empty_n { I 1 bit } in_buffer_2_V_V18190_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1277 \
    name in_buffer_2_V_V18257 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257 \
    op interface \
    ports { in_buffer_2_V_V18257_dout { I 8 vector } in_buffer_2_V_V18257_empty_n { I 1 bit } in_buffer_2_V_V18257_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1278 \
    name in_buffer_2_V_V18257191 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257191 \
    op interface \
    ports { in_buffer_2_V_V18257191_dout { I 8 vector } in_buffer_2_V_V18257191_empty_n { I 1 bit } in_buffer_2_V_V18257191_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1279 \
    name in_buffer_2_V_V18257192 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257192 \
    op interface \
    ports { in_buffer_2_V_V18257192_dout { I 8 vector } in_buffer_2_V_V18257192_empty_n { I 1 bit } in_buffer_2_V_V18257192_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1280 \
    name in_buffer_2_V_V18257193 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257193 \
    op interface \
    ports { in_buffer_2_V_V18257193_dout { I 8 vector } in_buffer_2_V_V18257193_empty_n { I 1 bit } in_buffer_2_V_V18257193_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1281 \
    name in_buffer_2_V_V18257194 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257194 \
    op interface \
    ports { in_buffer_2_V_V18257194_dout { I 8 vector } in_buffer_2_V_V18257194_empty_n { I 1 bit } in_buffer_2_V_V18257194_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1282 \
    name in_buffer_2_V_V18257195 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257195 \
    op interface \
    ports { in_buffer_2_V_V18257195_dout { I 8 vector } in_buffer_2_V_V18257195_empty_n { I 1 bit } in_buffer_2_V_V18257195_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1283 \
    name in_buffer_2_V_V18257196 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257196 \
    op interface \
    ports { in_buffer_2_V_V18257196_dout { I 8 vector } in_buffer_2_V_V18257196_empty_n { I 1 bit } in_buffer_2_V_V18257196_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1284 \
    name in_buffer_2_V_V18257197 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257197 \
    op interface \
    ports { in_buffer_2_V_V18257197_dout { I 8 vector } in_buffer_2_V_V18257197_empty_n { I 1 bit } in_buffer_2_V_V18257197_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1285 \
    name in_buffer_2_V_V18257198 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257198 \
    op interface \
    ports { in_buffer_2_V_V18257198_dout { I 8 vector } in_buffer_2_V_V18257198_empty_n { I 1 bit } in_buffer_2_V_V18257198_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1286 \
    name in_buffer_2_V_V18257199 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257199 \
    op interface \
    ports { in_buffer_2_V_V18257199_dout { I 8 vector } in_buffer_2_V_V18257199_empty_n { I 1 bit } in_buffer_2_V_V18257199_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1287 \
    name in_buffer_2_V_V18257200 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257200 \
    op interface \
    ports { in_buffer_2_V_V18257200_dout { I 8 vector } in_buffer_2_V_V18257200_empty_n { I 1 bit } in_buffer_2_V_V18257200_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1288 \
    name in_buffer_2_V_V18257201 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257201 \
    op interface \
    ports { in_buffer_2_V_V18257201_dout { I 8 vector } in_buffer_2_V_V18257201_empty_n { I 1 bit } in_buffer_2_V_V18257201_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1289 \
    name in_buffer_2_V_V18257202 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257202 \
    op interface \
    ports { in_buffer_2_V_V18257202_dout { I 8 vector } in_buffer_2_V_V18257202_empty_n { I 1 bit } in_buffer_2_V_V18257202_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1290 \
    name in_buffer_2_V_V18257203 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257203 \
    op interface \
    ports { in_buffer_2_V_V18257203_dout { I 8 vector } in_buffer_2_V_V18257203_empty_n { I 1 bit } in_buffer_2_V_V18257203_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1291 \
    name in_buffer_2_V_V18257204 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257204 \
    op interface \
    ports { in_buffer_2_V_V18257204_dout { I 8 vector } in_buffer_2_V_V18257204_empty_n { I 1 bit } in_buffer_2_V_V18257204_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1292 \
    name in_buffer_2_V_V18257205 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257205 \
    op interface \
    ports { in_buffer_2_V_V18257205_dout { I 8 vector } in_buffer_2_V_V18257205_empty_n { I 1 bit } in_buffer_2_V_V18257205_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1293 \
    name in_buffer_2_V_V18257206 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257206 \
    op interface \
    ports { in_buffer_2_V_V18257206_dout { I 8 vector } in_buffer_2_V_V18257206_empty_n { I 1 bit } in_buffer_2_V_V18257206_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1294 \
    name in_buffer_2_V_V18257207 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257207 \
    op interface \
    ports { in_buffer_2_V_V18257207_dout { I 8 vector } in_buffer_2_V_V18257207_empty_n { I 1 bit } in_buffer_2_V_V18257207_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1295 \
    name in_buffer_2_V_V18257208 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257208 \
    op interface \
    ports { in_buffer_2_V_V18257208_dout { I 8 vector } in_buffer_2_V_V18257208_empty_n { I 1 bit } in_buffer_2_V_V18257208_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1296 \
    name in_buffer_2_V_V18257209 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257209 \
    op interface \
    ports { in_buffer_2_V_V18257209_dout { I 8 vector } in_buffer_2_V_V18257209_empty_n { I 1 bit } in_buffer_2_V_V18257209_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1297 \
    name in_buffer_2_V_V18257210 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257210 \
    op interface \
    ports { in_buffer_2_V_V18257210_dout { I 8 vector } in_buffer_2_V_V18257210_empty_n { I 1 bit } in_buffer_2_V_V18257210_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1298 \
    name in_buffer_2_V_V18257211 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257211 \
    op interface \
    ports { in_buffer_2_V_V18257211_dout { I 8 vector } in_buffer_2_V_V18257211_empty_n { I 1 bit } in_buffer_2_V_V18257211_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1299 \
    name in_buffer_2_V_V18257212 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257212 \
    op interface \
    ports { in_buffer_2_V_V18257212_dout { I 8 vector } in_buffer_2_V_V18257212_empty_n { I 1 bit } in_buffer_2_V_V18257212_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1300 \
    name in_buffer_2_V_V18257213 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257213 \
    op interface \
    ports { in_buffer_2_V_V18257213_dout { I 8 vector } in_buffer_2_V_V18257213_empty_n { I 1 bit } in_buffer_2_V_V18257213_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1301 \
    name in_buffer_2_V_V18257214 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257214 \
    op interface \
    ports { in_buffer_2_V_V18257214_dout { I 8 vector } in_buffer_2_V_V18257214_empty_n { I 1 bit } in_buffer_2_V_V18257214_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1302 \
    name in_buffer_2_V_V18257215 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257215 \
    op interface \
    ports { in_buffer_2_V_V18257215_dout { I 8 vector } in_buffer_2_V_V18257215_empty_n { I 1 bit } in_buffer_2_V_V18257215_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1303 \
    name in_buffer_2_V_V18257216 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257216 \
    op interface \
    ports { in_buffer_2_V_V18257216_dout { I 8 vector } in_buffer_2_V_V18257216_empty_n { I 1 bit } in_buffer_2_V_V18257216_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1304 \
    name in_buffer_2_V_V18257217 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257217 \
    op interface \
    ports { in_buffer_2_V_V18257217_dout { I 8 vector } in_buffer_2_V_V18257217_empty_n { I 1 bit } in_buffer_2_V_V18257217_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1305 \
    name in_buffer_2_V_V18257218 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257218 \
    op interface \
    ports { in_buffer_2_V_V18257218_dout { I 8 vector } in_buffer_2_V_V18257218_empty_n { I 1 bit } in_buffer_2_V_V18257218_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1306 \
    name in_buffer_2_V_V18257219 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257219 \
    op interface \
    ports { in_buffer_2_V_V18257219_dout { I 8 vector } in_buffer_2_V_V18257219_empty_n { I 1 bit } in_buffer_2_V_V18257219_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1307 \
    name in_buffer_2_V_V18257220 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257220 \
    op interface \
    ports { in_buffer_2_V_V18257220_dout { I 8 vector } in_buffer_2_V_V18257220_empty_n { I 1 bit } in_buffer_2_V_V18257220_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1308 \
    name in_buffer_2_V_V18257221 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257221 \
    op interface \
    ports { in_buffer_2_V_V18257221_dout { I 8 vector } in_buffer_2_V_V18257221_empty_n { I 1 bit } in_buffer_2_V_V18257221_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1309 \
    name in_buffer_2_V_V18257222 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257222 \
    op interface \
    ports { in_buffer_2_V_V18257222_dout { I 8 vector } in_buffer_2_V_V18257222_empty_n { I 1 bit } in_buffer_2_V_V18257222_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1310 \
    name in_buffer_2_V_V18257223 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257223 \
    op interface \
    ports { in_buffer_2_V_V18257223_dout { I 8 vector } in_buffer_2_V_V18257223_empty_n { I 1 bit } in_buffer_2_V_V18257223_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1311 \
    name in_buffer_2_V_V18257224 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257224 \
    op interface \
    ports { in_buffer_2_V_V18257224_dout { I 8 vector } in_buffer_2_V_V18257224_empty_n { I 1 bit } in_buffer_2_V_V18257224_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1312 \
    name in_buffer_2_V_V18257225 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257225 \
    op interface \
    ports { in_buffer_2_V_V18257225_dout { I 8 vector } in_buffer_2_V_V18257225_empty_n { I 1 bit } in_buffer_2_V_V18257225_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1313 \
    name in_buffer_2_V_V18257226 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257226 \
    op interface \
    ports { in_buffer_2_V_V18257226_dout { I 8 vector } in_buffer_2_V_V18257226_empty_n { I 1 bit } in_buffer_2_V_V18257226_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1314 \
    name in_buffer_2_V_V18257227 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257227 \
    op interface \
    ports { in_buffer_2_V_V18257227_dout { I 8 vector } in_buffer_2_V_V18257227_empty_n { I 1 bit } in_buffer_2_V_V18257227_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1315 \
    name in_buffer_2_V_V18257228 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257228 \
    op interface \
    ports { in_buffer_2_V_V18257228_dout { I 8 vector } in_buffer_2_V_V18257228_empty_n { I 1 bit } in_buffer_2_V_V18257228_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1316 \
    name in_buffer_2_V_V18257229 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257229 \
    op interface \
    ports { in_buffer_2_V_V18257229_dout { I 8 vector } in_buffer_2_V_V18257229_empty_n { I 1 bit } in_buffer_2_V_V18257229_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1317 \
    name in_buffer_2_V_V18257230 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257230 \
    op interface \
    ports { in_buffer_2_V_V18257230_dout { I 8 vector } in_buffer_2_V_V18257230_empty_n { I 1 bit } in_buffer_2_V_V18257230_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1318 \
    name in_buffer_2_V_V18257231 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257231 \
    op interface \
    ports { in_buffer_2_V_V18257231_dout { I 8 vector } in_buffer_2_V_V18257231_empty_n { I 1 bit } in_buffer_2_V_V18257231_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1319 \
    name in_buffer_2_V_V18257232 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257232 \
    op interface \
    ports { in_buffer_2_V_V18257232_dout { I 8 vector } in_buffer_2_V_V18257232_empty_n { I 1 bit } in_buffer_2_V_V18257232_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1320 \
    name in_buffer_2_V_V18257233 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257233 \
    op interface \
    ports { in_buffer_2_V_V18257233_dout { I 8 vector } in_buffer_2_V_V18257233_empty_n { I 1 bit } in_buffer_2_V_V18257233_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1321 \
    name in_buffer_2_V_V18257234 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257234 \
    op interface \
    ports { in_buffer_2_V_V18257234_dout { I 8 vector } in_buffer_2_V_V18257234_empty_n { I 1 bit } in_buffer_2_V_V18257234_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1322 \
    name in_buffer_2_V_V18257235 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257235 \
    op interface \
    ports { in_buffer_2_V_V18257235_dout { I 8 vector } in_buffer_2_V_V18257235_empty_n { I 1 bit } in_buffer_2_V_V18257235_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1323 \
    name in_buffer_2_V_V18257236 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257236 \
    op interface \
    ports { in_buffer_2_V_V18257236_dout { I 8 vector } in_buffer_2_V_V18257236_empty_n { I 1 bit } in_buffer_2_V_V18257236_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1324 \
    name in_buffer_2_V_V18257237 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257237 \
    op interface \
    ports { in_buffer_2_V_V18257237_dout { I 8 vector } in_buffer_2_V_V18257237_empty_n { I 1 bit } in_buffer_2_V_V18257237_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1325 \
    name in_buffer_2_V_V18257238 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257238 \
    op interface \
    ports { in_buffer_2_V_V18257238_dout { I 8 vector } in_buffer_2_V_V18257238_empty_n { I 1 bit } in_buffer_2_V_V18257238_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1326 \
    name in_buffer_2_V_V18257239 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257239 \
    op interface \
    ports { in_buffer_2_V_V18257239_dout { I 8 vector } in_buffer_2_V_V18257239_empty_n { I 1 bit } in_buffer_2_V_V18257239_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1327 \
    name in_buffer_2_V_V18257240 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257240 \
    op interface \
    ports { in_buffer_2_V_V18257240_dout { I 8 vector } in_buffer_2_V_V18257240_empty_n { I 1 bit } in_buffer_2_V_V18257240_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1328 \
    name in_buffer_2_V_V18257241 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257241 \
    op interface \
    ports { in_buffer_2_V_V18257241_dout { I 8 vector } in_buffer_2_V_V18257241_empty_n { I 1 bit } in_buffer_2_V_V18257241_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1329 \
    name in_buffer_2_V_V18257242 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257242 \
    op interface \
    ports { in_buffer_2_V_V18257242_dout { I 8 vector } in_buffer_2_V_V18257242_empty_n { I 1 bit } in_buffer_2_V_V18257242_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1330 \
    name in_buffer_2_V_V18257243 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257243 \
    op interface \
    ports { in_buffer_2_V_V18257243_dout { I 8 vector } in_buffer_2_V_V18257243_empty_n { I 1 bit } in_buffer_2_V_V18257243_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1331 \
    name in_buffer_2_V_V18257244 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257244 \
    op interface \
    ports { in_buffer_2_V_V18257244_dout { I 8 vector } in_buffer_2_V_V18257244_empty_n { I 1 bit } in_buffer_2_V_V18257244_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1332 \
    name in_buffer_2_V_V18257245 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257245 \
    op interface \
    ports { in_buffer_2_V_V18257245_dout { I 8 vector } in_buffer_2_V_V18257245_empty_n { I 1 bit } in_buffer_2_V_V18257245_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1333 \
    name in_buffer_2_V_V18257246 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257246 \
    op interface \
    ports { in_buffer_2_V_V18257246_dout { I 8 vector } in_buffer_2_V_V18257246_empty_n { I 1 bit } in_buffer_2_V_V18257246_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1334 \
    name in_buffer_2_V_V18257247 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257247 \
    op interface \
    ports { in_buffer_2_V_V18257247_dout { I 8 vector } in_buffer_2_V_V18257247_empty_n { I 1 bit } in_buffer_2_V_V18257247_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1335 \
    name in_buffer_2_V_V18257248 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257248 \
    op interface \
    ports { in_buffer_2_V_V18257248_dout { I 8 vector } in_buffer_2_V_V18257248_empty_n { I 1 bit } in_buffer_2_V_V18257248_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1336 \
    name in_buffer_2_V_V18257249 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257249 \
    op interface \
    ports { in_buffer_2_V_V18257249_dout { I 8 vector } in_buffer_2_V_V18257249_empty_n { I 1 bit } in_buffer_2_V_V18257249_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1337 \
    name in_buffer_2_V_V18257250 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257250 \
    op interface \
    ports { in_buffer_2_V_V18257250_dout { I 8 vector } in_buffer_2_V_V18257250_empty_n { I 1 bit } in_buffer_2_V_V18257250_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1338 \
    name in_buffer_2_V_V18257251 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257251 \
    op interface \
    ports { in_buffer_2_V_V18257251_dout { I 8 vector } in_buffer_2_V_V18257251_empty_n { I 1 bit } in_buffer_2_V_V18257251_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1339 \
    name in_buffer_2_V_V18257252 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257252 \
    op interface \
    ports { in_buffer_2_V_V18257252_dout { I 8 vector } in_buffer_2_V_V18257252_empty_n { I 1 bit } in_buffer_2_V_V18257252_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1340 \
    name in_buffer_2_V_V18257253 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_buffer_2_V_V18257253 \
    op interface \
    ports { in_buffer_2_V_V18257253_dout { I 8 vector } in_buffer_2_V_V18257253_empty_n { I 1 bit } in_buffer_2_V_V18257253_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1341 \
    name out_V_V21 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V21 \
    op interface \
    ports { out_V_V21_din { O 32 vector } out_V_V21_full_n { I 1 bit } out_V_V21_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1342 \
    name out_V_V21261 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V21261 \
    op interface \
    ports { out_V_V21261_din { O 32 vector } out_V_V21261_full_n { I 1 bit } out_V_V21261_write { O 1 bit } } \
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


