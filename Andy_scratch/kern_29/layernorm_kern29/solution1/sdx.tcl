# ==============================================================
# File generated on Mon Feb 20 12:11:21 EST 2023
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files src/weights.hpp
add_files src/top.hpp
add_files src/top.cpp
add_files src/parameters.hpp
add_files src/modules.hpp
add_files src/common.hpp
set_part xczu19eg-ffvc1760-2-i
create_clock -name default -period 5
config_export -format=ip_catalog
config_export -rtl=verilog
