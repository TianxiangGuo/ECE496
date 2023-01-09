# ==============================================================
# File generated on Mon Jan 09 18:22:22 -0500 2023
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../main.cpp -cflags { -Wno-unknown-pragmas}
add_files top.hpp
add_files top.cpp
add_files parameters.hpp
add_files common.hpp
set_part xczu19eg-ffvc1760-2-i
create_clock -name default -period 5
