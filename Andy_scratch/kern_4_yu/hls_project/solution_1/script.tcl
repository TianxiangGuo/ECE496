############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_project
set_top kernel_4
add_files src/parameters.hpp
add_files src/common.hpp
add_files src/top.cpp
open_solution "solution_1"
set_part {xczu19eg-ffvc1760-2-i} -tool vivado
create_clock -period 5.0 -name default
config_export -format ip_catalog -rtl verilog
#source "./hls_project/solution_1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
