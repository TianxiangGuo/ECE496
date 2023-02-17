############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project softmax
set_top softmax
add_files common.hpp
add_files parameters.hpp
add_files top.cpp
add_files top.hpp
add_files -tb main.cpp
open_solution "solution1"
set_part {xczu19eg-ffvc1760-2-i} -tool vivado
create_clock -period 5 -name default
#source "./softmax/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
