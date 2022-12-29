############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project softmax
set_top softmax
add_files common.hpp
add_files exponents.hpp
add_files parameters.hpp
add_files top_incremental.cpp
add_files -tb main.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu19eg-ffvc1760-2-i}
create_clock -period 5 -name default
config_compile -no_signed_zeros=0 -unsafe_math_optimizations=0
config_schedule -effort medium -enable_dsp_full_reg=0 -relax_ii_for_timing=0 -verbose=0
config_bind -effort medium
config_sdx -optimization_level none -target none
set_clock_uncertainty 12.5%
#source "./softmax/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
