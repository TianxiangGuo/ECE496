
open_project softmax
set_top softmax
add_files top_incremental.cpp
add_files top.hpp
add_files parameters.hpp
add_files exponents.hpp
add_files common.hpp
add_files -tb main.cpp
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



quit