set proj_name kern_4

		open_project $proj_name
		set_top kernel_[string range $proj_name 5 end]
		add_files [glob src/*]
		open_solution "solution1"
		set_part {xczu19eg-ffvc1760-2-i} -tool vivado
		create_clock -period 5 -name default
		csynth_design
		export_design -rtl verilog -format ip_catalog
		exec cp -r $proj_name/solution1/impl/ip ../RESULT/ip_$proj_name
