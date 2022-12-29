# ==============================================================
# File generated on Wed Dec 28 18:55:57 -0500 2022
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../main.cpp -cflags { -Wno-unknown-pragmas}
add_files top_incremental.cpp
add_files parameters.hpp
add_files exponents.hpp
add_files common.hpp
set_part xczu19eg-ffvc1760-2-i
create_clock -name default -period 5
set_clock_uncertainty 12.5% default
config_compile -no_signed_zeros=0
config_compile -unsafe_math_optimizations=0
config_schedule -effort=medium
config_schedule -enable_dsp_full_reg=0
config_schedule -relax_ii_for_timing=0
config_schedule -verbose=0
config_bind -effort=medium
config_sdx -optimization_level=none
config_sdx -target=none
