############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project kern_4
set_top kernel_4
add_files src/top.hpp
add_files src/common.hpp
add_files src/top.cpp
add_files src/weights.hpp
add_files src/modules.hpp
add_files src/parameters.hpp
open_solution "solution1"
set_part {xczu19eg-ffvc1760-2-i} -tool vivado
create_clock -period 5 -name default
config_export -format ip_catalog -rtl verilog
#source "./kern_4/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
