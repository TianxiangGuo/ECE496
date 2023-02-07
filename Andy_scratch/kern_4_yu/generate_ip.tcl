open_project hls_project
set_top kernel_4
open_solution solution_1
add_files src/top.cpp
add_files src/common.hpp
add_files src/parameters.hpp
set_part {xczu19eg-ffvc1760-2-i} -tool vivado
create_clock  -period 5.0 -name default
csynth_design
export_design -rtl verilog -format ip_catalog
