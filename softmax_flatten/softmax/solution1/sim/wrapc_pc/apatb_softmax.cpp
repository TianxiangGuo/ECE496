// ==============================================================
// File generated on Wed Dec 28 18:56:28 -0500 2022
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    typedef struct dataword {
        ap_uint<512> data;
        ap_uint<8> id;
        ap_uint<8> dest;
        ap_uint<16> user;
        ap_uint<1> last;
       } dataword;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "in_V_data_V"
#define AUTOTB_TVIN_in_V_data_V  "../tv/cdatafile/c.softmax.autotvin_in_V_data_V.dat"
#define WRAPC_STREAM_SIZE_IN_in_V_data_V  "../tv/stream_size/stream_size_in_in_V_data_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_in_V_data_V  "../tv/stream_size/stream_ingress_status_in_V_data_V.dat"
// wrapc file define: "in_V_id_V"
#define AUTOTB_TVIN_in_V_id_V  "../tv/cdatafile/c.softmax.autotvin_in_V_id_V.dat"
#define WRAPC_STREAM_SIZE_IN_in_V_id_V  "../tv/stream_size/stream_size_in_in_V_id_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_in_V_id_V  "../tv/stream_size/stream_ingress_status_in_V_id_V.dat"
// wrapc file define: "in_V_dest_V"
#define AUTOTB_TVIN_in_V_dest_V  "../tv/cdatafile/c.softmax.autotvin_in_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_IN_in_V_dest_V  "../tv/stream_size/stream_size_in_in_V_dest_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V  "../tv/stream_size/stream_ingress_status_in_V_dest_V.dat"
// wrapc file define: "in_V_user_V"
#define AUTOTB_TVIN_in_V_user_V  "../tv/cdatafile/c.softmax.autotvin_in_V_user_V.dat"
#define WRAPC_STREAM_SIZE_IN_in_V_user_V  "../tv/stream_size/stream_size_in_in_V_user_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_in_V_user_V  "../tv/stream_size/stream_ingress_status_in_V_user_V.dat"
// wrapc file define: "in_V_last_V"
#define AUTOTB_TVIN_in_V_last_V  "../tv/cdatafile/c.softmax.autotvin_in_V_last_V.dat"
#define WRAPC_STREAM_SIZE_IN_in_V_last_V  "../tv/stream_size/stream_size_in_in_V_last_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_in_V_last_V  "../tv/stream_size/stream_ingress_status_in_V_last_V.dat"
// wrapc file define: "out_V_data_V"
#define AUTOTB_TVOUT_out_V_data_V  "../tv/cdatafile/c.softmax.autotvout_out_V_data_V.dat"
#define AUTOTB_TVIN_out_V_data_V  "../tv/cdatafile/c.softmax.autotvin_out_V_data_V.dat"
#define WRAPC_STREAM_SIZE_OUT_out_V_data_V  "../tv/stream_size/stream_size_out_out_V_data_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_out_V_data_V  "../tv/stream_size/stream_egress_status_out_V_data_V.dat"
// wrapc file define: "out_V_id_V"
#define AUTOTB_TVOUT_out_V_id_V  "../tv/cdatafile/c.softmax.autotvout_out_V_id_V.dat"
#define AUTOTB_TVIN_out_V_id_V  "../tv/cdatafile/c.softmax.autotvin_out_V_id_V.dat"
#define WRAPC_STREAM_SIZE_OUT_out_V_id_V  "../tv/stream_size/stream_size_out_out_V_id_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_out_V_id_V  "../tv/stream_size/stream_egress_status_out_V_id_V.dat"
// wrapc file define: "out_V_dest_V"
#define AUTOTB_TVOUT_out_V_dest_V  "../tv/cdatafile/c.softmax.autotvout_out_V_dest_V.dat"
#define AUTOTB_TVIN_out_V_dest_V  "../tv/cdatafile/c.softmax.autotvin_out_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_OUT_out_V_dest_V  "../tv/stream_size/stream_size_out_out_V_dest_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_out_V_dest_V  "../tv/stream_size/stream_egress_status_out_V_dest_V.dat"
// wrapc file define: "out_V_user_V"
#define AUTOTB_TVOUT_out_V_user_V  "../tv/cdatafile/c.softmax.autotvout_out_V_user_V.dat"
#define AUTOTB_TVIN_out_V_user_V  "../tv/cdatafile/c.softmax.autotvin_out_V_user_V.dat"
#define WRAPC_STREAM_SIZE_OUT_out_V_user_V  "../tv/stream_size/stream_size_out_out_V_user_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_out_V_user_V  "../tv/stream_size/stream_egress_status_out_V_user_V.dat"
// wrapc file define: "out_V_last_V"
#define AUTOTB_TVOUT_out_V_last_V  "../tv/cdatafile/c.softmax.autotvout_out_V_last_V.dat"
#define AUTOTB_TVIN_out_V_last_V  "../tv/cdatafile/c.softmax.autotvin_out_V_last_V.dat"
#define WRAPC_STREAM_SIZE_OUT_out_V_last_V  "../tv/stream_size/stream_size_out_out_V_last_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_out_V_last_V  "../tv/stream_size/stream_egress_status_out_V_last_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "out_V_data_V"
#define AUTOTB_TVOUT_PC_out_V_data_V  "../tv/rtldatafile/rtl.softmax.autotvout_out_V_data_V.dat"
// tvout file define: "out_V_id_V"
#define AUTOTB_TVOUT_PC_out_V_id_V  "../tv/rtldatafile/rtl.softmax.autotvout_out_V_id_V.dat"
// tvout file define: "out_V_dest_V"
#define AUTOTB_TVOUT_PC_out_V_dest_V  "../tv/rtldatafile/rtl.softmax.autotvout_out_V_dest_V.dat"
// tvout file define: "out_V_user_V"
#define AUTOTB_TVOUT_PC_out_V_user_V  "../tv/rtldatafile/rtl.softmax.autotvout_out_V_user_V.dat"
// tvout file define: "out_V_last_V"
#define AUTOTB_TVOUT_PC_out_V_last_V  "../tv/rtldatafile/rtl.softmax.autotvout_out_V_last_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			in_V_data_V_depth = 0;
			in_V_id_V_depth = 0;
			in_V_dest_V_depth = 0;
			in_V_user_V_depth = 0;
			in_V_last_V_depth = 0;
			out_V_data_V_depth = 0;
			out_V_id_V_depth = 0;
			out_V_dest_V_depth = 0;
			out_V_user_V_depth = 0;
			out_V_last_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{in_V_data_V " << in_V_data_V_depth << "}\n";
			total_list << "{in_V_id_V " << in_V_id_V_depth << "}\n";
			total_list << "{in_V_dest_V " << in_V_dest_V_depth << "}\n";
			total_list << "{in_V_user_V " << in_V_user_V_depth << "}\n";
			total_list << "{in_V_last_V " << in_V_last_V_depth << "}\n";
			total_list << "{out_V_data_V " << out_V_data_V_depth << "}\n";
			total_list << "{out_V_id_V " << out_V_id_V_depth << "}\n";
			total_list << "{out_V_dest_V " << out_V_dest_V_depth << "}\n";
			total_list << "{out_V_user_V " << out_V_user_V_depth << "}\n";
			total_list << "{out_V_last_V " << out_V_last_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int in_V_data_V_depth;
		int in_V_id_V_depth;
		int in_V_dest_V_depth;
		int in_V_user_V_depth;
		int in_V_last_V_depth;
		int out_V_data_V_depth;
		int out_V_id_V_depth;
		int out_V_dest_V_depth;
		int out_V_user_V_depth;
		int out_V_last_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void softmax (
hls::stream<dataword > (&in),
hls::stream<dataword > (&out));

void AESL_WRAP_softmax (
hls::stream<dataword > (&in),
hls::stream<dataword > (&out))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		// pop stream input: "in"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_in_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_in_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_in_V_data_V, AESL_token); // pop_size
			int aesl_tmp_1 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_1; i++)
			{
				in.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_in_V_data_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "out"
		std::vector<dataword > aesl_tmp_3;
		int aesl_tmp_4;
		int aesl_tmp_5 = 0;

		// read output stream size: "out"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_out_V_data_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_out_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_out_V_data_V, AESL_token); // pop_size
			aesl_tmp_4 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_out_V_data_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "out_V_data_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_data_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_data_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_V_data_V, AESL_token); // data

			std::vector<sc_bv<512> > out_V_data_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_data_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_V_data_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_V_data_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_V_data_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					dataword tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_V_data_V
				{
					// bitslice(511, 0)
					// {
						// celement: out.V.data.V(511, 0)
						// {
							sc_lv<512>* out_V_data_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<512>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(511, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.data.V(511, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										out_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(511, 0) = sc_bv<512>(out_V_data_V_pc_buffer[hls_map_index].range(511, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(511, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.data.V(511, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data
									// output_left_conversion : aesl_tmp_3[i_0].data
									// output_type_conversion : (out_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].data = (out_V_data_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "out_V_id_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_id_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_id_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_V_id_V, AESL_token); // data

			std::vector<sc_bv<8> > out_V_id_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_V_id_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_V_id_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_V_id_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					dataword tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_V_id_V
				{
					// bitslice(7, 0)
					// {
						// celement: out.V.id.V(7, 0)
						// {
							sc_lv<8>* out_V_id_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<8>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.id.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										out_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(7, 0) = sc_bv<8>(out_V_id_V_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.id.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].id
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].id
									// output_left_conversion : aesl_tmp_3[i_0].id
									// output_type_conversion : (out_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].id = (out_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "out_V_dest_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_dest_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_dest_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_V_dest_V, AESL_token); // data

			std::vector<sc_bv<8> > out_V_dest_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_V_dest_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_V_dest_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_V_dest_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					dataword tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_V_dest_V
				{
					// bitslice(7, 0)
					// {
						// celement: out.V.dest.V(7, 0)
						// {
							sc_lv<8>* out_V_dest_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<8>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.dest.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										out_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(7, 0) = sc_bv<8>(out_V_dest_V_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.dest.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].dest
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].dest
									// output_left_conversion : aesl_tmp_3[i_0].dest
									// output_type_conversion : (out_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].dest = (out_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "out_V_user_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_user_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_user_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_V_user_V, AESL_token); // data

			std::vector<sc_bv<16> > out_V_user_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_V_user_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_V_user_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_V_user_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					dataword tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_V_user_V
				{
					// bitslice(15, 0)
					// {
						// celement: out.V.user.V(15, 0)
						// {
							sc_lv<16>* out_V_user_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<16>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.user.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										out_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(out_V_user_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.user.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].user
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].user
									// output_left_conversion : aesl_tmp_3[i_0].user
									// output_type_conversion : (out_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].user = (out_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "out_V_last_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_last_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V_last_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_V_last_V, AESL_token); // data

			std::vector<sc_bv<1> > out_V_last_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_V_last_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_V_last_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_V_last_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					dataword tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_V_last_V
				{
					// bitslice(0, 0)
					// {
						// celement: out.V.last.V(0, 0)
						// {
							sc_lv<1>* out_V_last_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										out_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(out_V_last_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: out.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].last
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].last
									// output_left_conversion : aesl_tmp_3[i_0].last
									// output_type_conversion : (out_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].last = (out_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// push back output stream: "out"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			out.write(aesl_tmp_3[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "in_V_data_V"
		char* tvin_in_V_data_V = new char[133];
		aesl_fh.touch(AUTOTB_TVIN_in_V_data_V);
		char* wrapc_stream_size_in_in_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_in_V_data_V);
		char* wrapc_stream_ingress_status_in_V_data_V = new char[133];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V);

		// "in_V_id_V"
		char* tvin_in_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_V_id_V);
		char* wrapc_stream_size_in_in_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_in_V_id_V);
		char* wrapc_stream_ingress_status_in_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V);

		// "in_V_dest_V"
		char* tvin_in_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_V_dest_V);
		char* wrapc_stream_size_in_in_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_in_V_dest_V);
		char* wrapc_stream_ingress_status_in_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V);

		// "in_V_user_V"
		char* tvin_in_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_V_user_V);
		char* wrapc_stream_size_in_in_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_in_V_user_V);
		char* wrapc_stream_ingress_status_in_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V);

		// "in_V_last_V"
		char* tvin_in_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_V_last_V);
		char* wrapc_stream_size_in_in_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_in_V_last_V);
		char* wrapc_stream_ingress_status_in_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V);

		// "out_V_data_V"
		char* tvin_out_V_data_V = new char[133];
		aesl_fh.touch(AUTOTB_TVIN_out_V_data_V);
		char* tvout_out_V_data_V = new char[133];
		aesl_fh.touch(AUTOTB_TVOUT_out_V_data_V);
		char* wrapc_stream_size_out_out_V_data_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_out_V_data_V);
		char* wrapc_stream_egress_status_out_V_data_V = new char[133];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_out_V_data_V);

		// "out_V_id_V"
		char* tvin_out_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_V_id_V);
		char* tvout_out_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_V_id_V);
		char* wrapc_stream_size_out_out_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_out_V_id_V);
		char* wrapc_stream_egress_status_out_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_out_V_id_V);

		// "out_V_dest_V"
		char* tvin_out_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_V_dest_V);
		char* tvout_out_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_V_dest_V);
		char* wrapc_stream_size_out_out_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_out_V_dest_V);
		char* wrapc_stream_egress_status_out_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_out_V_dest_V);

		// "out_V_user_V"
		char* tvin_out_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_V_user_V);
		char* tvout_out_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_V_user_V);
		char* wrapc_stream_size_out_out_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_out_V_user_V);
		char* wrapc_stream_egress_status_out_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_out_V_user_V);

		// "out_V_last_V"
		char* tvin_out_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_V_last_V);
		char* tvout_out_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_V_last_V);
		char* wrapc_stream_size_out_out_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_out_V_last_V);
		char* wrapc_stream_egress_status_out_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_out_V_last_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "in"
		std::vector<dataword > aesl_tmp_0;
		int aesl_tmp_1 = 0;
		while (!in.empty())
		{
			aesl_tmp_0.push_back(in.read());
			aesl_tmp_1++;
		}

		// dump stream tvin: "out"
		std::vector<dataword > aesl_tmp_3;
		int aesl_tmp_4 = 0;
		while (!out.empty())
		{
			aesl_tmp_3.push_back(out.read());
			aesl_tmp_4++;
		}

		// push back input stream: "in"
		for (int i = 0; i < aesl_tmp_1; i++)
		{
			in.write(aesl_tmp_0[i]);
		}

		// push back input stream: "out"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			out.write(aesl_tmp_3[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		softmax(in, out);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "in"
		int aesl_tmp_2 = in.size();

		// pop output stream: "out"
		int aesl_tmp_5 = aesl_tmp_4;
		aesl_tmp_4 = 0;
     aesl_tmp_3.clear();
		while (!out.empty())
		{
			aesl_tmp_3.push_back(out.read());
			aesl_tmp_4++;
		}

		// [[transaction]]
		sprintf(tvin_in_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_V_data_V, tvin_in_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, tvin_in_V_data_V);

		sc_bv<512>* in_V_data_V_tvin_wrapc_buffer = new sc_bv<512>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: in_V_data_V
		{
			// bitslice(511, 0)
			{
				int hls_map_index = 0;
				// celement: in.V.data.V(511, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data
							// regulate_c_name       : in_V_data_V
							// input_type_conversion : (aesl_tmp_0[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_0[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<512> in_V_data_V_tmp_mem;
								in_V_data_V_tmp_mem = (aesl_tmp_0[i_0].data).to_string(2).c_str();
								in_V_data_V_tvin_wrapc_buffer[hls_map_index].range(511, 0) = in_V_data_V_tmp_mem.range(511, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_in_V_data_V, "%s\n", (in_V_data_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_V_data_V, tvin_in_V_data_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_in_V_data_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, stream_ingress_size_in_V_data_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_in_V_data_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, stream_ingress_size_in_V_data_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_in_V_data_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, stream_ingress_size_in_V_data_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.in_V_data_V_depth);
		sprintf(tvin_in_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_V_data_V, tvin_in_V_data_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_data_V, tvin_in_V_data_V);

		// release memory allocation
		delete [] in_V_data_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_in_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_data_V, wrapc_stream_size_in_in_V_data_V);
		sprintf(wrapc_stream_size_in_in_V_data_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_data_V, wrapc_stream_size_in_in_V_data_V);
		sprintf(wrapc_stream_size_in_in_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_data_V, wrapc_stream_size_in_in_V_data_V);

		// [[transaction]]
		sprintf(tvin_in_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_V_id_V, tvin_in_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, tvin_in_V_id_V);

		sc_bv<8>* in_V_id_V_tvin_wrapc_buffer = new sc_bv<8>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: in_V_id_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in.V.id.V(7, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].id
							// regulate_c_name       : in_V_id_V
							// input_type_conversion : (aesl_tmp_0[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_0[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_V_id_V_tmp_mem;
								in_V_id_V_tmp_mem = (aesl_tmp_0[i_0].id).to_string(2).c_str();
								in_V_id_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_V_id_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_in_V_id_V, "%s\n", (in_V_id_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_V_id_V, tvin_in_V_id_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_in_V_id_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, stream_ingress_size_in_V_id_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_in_V_id_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, stream_ingress_size_in_V_id_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_in_V_id_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, stream_ingress_size_in_V_id_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.in_V_id_V_depth);
		sprintf(tvin_in_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_V_id_V, tvin_in_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_id_V, tvin_in_V_id_V);

		// release memory allocation
		delete [] in_V_id_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_in_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_id_V, wrapc_stream_size_in_in_V_id_V);
		sprintf(wrapc_stream_size_in_in_V_id_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_id_V, wrapc_stream_size_in_in_V_id_V);
		sprintf(wrapc_stream_size_in_in_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_id_V, wrapc_stream_size_in_in_V_id_V);

		// [[transaction]]
		sprintf(tvin_in_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_V_dest_V, tvin_in_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, tvin_in_V_dest_V);

		sc_bv<8>* in_V_dest_V_tvin_wrapc_buffer = new sc_bv<8>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: in_V_dest_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: in.V.dest.V(7, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].dest
							// regulate_c_name       : in_V_dest_V
							// input_type_conversion : (aesl_tmp_0[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_0[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> in_V_dest_V_tmp_mem;
								in_V_dest_V_tmp_mem = (aesl_tmp_0[i_0].dest).to_string(2).c_str();
								in_V_dest_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = in_V_dest_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_in_V_dest_V, "%s\n", (in_V_dest_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_V_dest_V, tvin_in_V_dest_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_in_V_dest_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, stream_ingress_size_in_V_dest_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_in_V_dest_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, stream_ingress_size_in_V_dest_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_in_V_dest_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, stream_ingress_size_in_V_dest_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.in_V_dest_V_depth);
		sprintf(tvin_in_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_V_dest_V, tvin_in_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_dest_V, tvin_in_V_dest_V);

		// release memory allocation
		delete [] in_V_dest_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_in_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_dest_V, wrapc_stream_size_in_in_V_dest_V);
		sprintf(wrapc_stream_size_in_in_V_dest_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_dest_V, wrapc_stream_size_in_in_V_dest_V);
		sprintf(wrapc_stream_size_in_in_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_dest_V, wrapc_stream_size_in_in_V_dest_V);

		// [[transaction]]
		sprintf(tvin_in_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_V_user_V, tvin_in_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, tvin_in_V_user_V);

		sc_bv<16>* in_V_user_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: in_V_user_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: in.V.user.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].user
							// regulate_c_name       : in_V_user_V
							// input_type_conversion : (aesl_tmp_0[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_0[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> in_V_user_V_tmp_mem;
								in_V_user_V_tmp_mem = (aesl_tmp_0[i_0].user).to_string(2).c_str();
								in_V_user_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = in_V_user_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_in_V_user_V, "%s\n", (in_V_user_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_V_user_V, tvin_in_V_user_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_in_V_user_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, stream_ingress_size_in_V_user_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_in_V_user_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, stream_ingress_size_in_V_user_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_in_V_user_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, stream_ingress_size_in_V_user_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.in_V_user_V_depth);
		sprintf(tvin_in_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_V_user_V, tvin_in_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_user_V, tvin_in_V_user_V);

		// release memory allocation
		delete [] in_V_user_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_in_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_user_V, wrapc_stream_size_in_in_V_user_V);
		sprintf(wrapc_stream_size_in_in_V_user_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_user_V, wrapc_stream_size_in_in_V_user_V);
		sprintf(wrapc_stream_size_in_in_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_user_V, wrapc_stream_size_in_in_V_user_V);

		// [[transaction]]
		sprintf(tvin_in_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_V_last_V, tvin_in_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, tvin_in_V_last_V);

		sc_bv<1>* in_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: in_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: in.V.last.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].last
							// regulate_c_name       : in_V_last_V
							// input_type_conversion : (aesl_tmp_0[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_0[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> in_V_last_V_tmp_mem;
								in_V_last_V_tmp_mem = (aesl_tmp_0[i_0].last).to_string(2).c_str();
								in_V_last_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = in_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_in_V_last_V, "%s\n", (in_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_V_last_V, tvin_in_V_last_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_in_V_last_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, stream_ingress_size_in_V_last_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_in_V_last_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, stream_ingress_size_in_V_last_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_in_V_last_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, stream_ingress_size_in_V_last_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.in_V_last_V_depth);
		sprintf(tvin_in_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_V_last_V, tvin_in_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_in_V_last_V, tvin_in_V_last_V);

		// release memory allocation
		delete [] in_V_last_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_in_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_last_V, wrapc_stream_size_in_in_V_last_V);
		sprintf(wrapc_stream_size_in_in_V_last_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_last_V, wrapc_stream_size_in_in_V_last_V);
		sprintf(wrapc_stream_size_in_in_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_in_V_last_V, wrapc_stream_size_in_in_V_last_V);

		// [[transaction]]
		sprintf(tvout_out_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_V_data_V, tvout_out_V_data_V);

		sc_bv<512>* out_V_data_V_tvout_wrapc_buffer = new sc_bv<512>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: out_V_data_V
		{
			// bitslice(511, 0)
			{
				int hls_map_index = 0;
				// celement: out.V.data.V(511, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data
							// regulate_c_name       : out_V_data_V
							// input_type_conversion : (aesl_tmp_3[i_0].data).to_string(2).c_str()
							if (&(aesl_tmp_3[0].data) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<512> out_V_data_V_tmp_mem;
								out_V_data_V_tmp_mem = (aesl_tmp_3[i_0].data).to_string(2).c_str();
								out_V_data_V_tvout_wrapc_buffer[hls_map_index].range(511, 0) = out_V_data_V_tmp_mem.range(511, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_out_V_data_V, "%s\n", (out_V_data_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_V_data_V, tvout_out_V_data_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.out_V_data_V_depth);
		sprintf(tvout_out_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_V_data_V, tvout_out_V_data_V);

		// release memory allocation
		delete [] out_V_data_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_out_V_data_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_data_V, wrapc_stream_size_out_out_V_data_V);
		sprintf(wrapc_stream_size_out_out_V_data_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_data_V, wrapc_stream_size_out_out_V_data_V);
		sprintf(wrapc_stream_size_out_out_V_data_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_data_V, wrapc_stream_size_out_out_V_data_V);

		// [[transaction]]
		sprintf(tvout_out_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_V_id_V, tvout_out_V_id_V);

		sc_bv<8>* out_V_id_V_tvout_wrapc_buffer = new sc_bv<8>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: out_V_id_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: out.V.id.V(7, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].id
							// regulate_c_name       : out_V_id_V
							// input_type_conversion : (aesl_tmp_3[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> out_V_id_V_tmp_mem;
								out_V_id_V_tmp_mem = (aesl_tmp_3[i_0].id).to_string(2).c_str();
								out_V_id_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = out_V_id_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_out_V_id_V, "%s\n", (out_V_id_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_V_id_V, tvout_out_V_id_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.out_V_id_V_depth);
		sprintf(tvout_out_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_V_id_V, tvout_out_V_id_V);

		// release memory allocation
		delete [] out_V_id_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_out_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_id_V, wrapc_stream_size_out_out_V_id_V);
		sprintf(wrapc_stream_size_out_out_V_id_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_id_V, wrapc_stream_size_out_out_V_id_V);
		sprintf(wrapc_stream_size_out_out_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_id_V, wrapc_stream_size_out_out_V_id_V);

		// [[transaction]]
		sprintf(tvout_out_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_V_dest_V, tvout_out_V_dest_V);

		sc_bv<8>* out_V_dest_V_tvout_wrapc_buffer = new sc_bv<8>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: out_V_dest_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: out.V.dest.V(7, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].dest
							// regulate_c_name       : out_V_dest_V
							// input_type_conversion : (aesl_tmp_3[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> out_V_dest_V_tmp_mem;
								out_V_dest_V_tmp_mem = (aesl_tmp_3[i_0].dest).to_string(2).c_str();
								out_V_dest_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = out_V_dest_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_out_V_dest_V, "%s\n", (out_V_dest_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_V_dest_V, tvout_out_V_dest_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.out_V_dest_V_depth);
		sprintf(tvout_out_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_V_dest_V, tvout_out_V_dest_V);

		// release memory allocation
		delete [] out_V_dest_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_out_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_dest_V, wrapc_stream_size_out_out_V_dest_V);
		sprintf(wrapc_stream_size_out_out_V_dest_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_dest_V, wrapc_stream_size_out_out_V_dest_V);
		sprintf(wrapc_stream_size_out_out_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_dest_V, wrapc_stream_size_out_out_V_dest_V);

		// [[transaction]]
		sprintf(tvout_out_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_V_user_V, tvout_out_V_user_V);

		sc_bv<16>* out_V_user_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: out_V_user_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: out.V.user.V(15, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].user
							// regulate_c_name       : out_V_user_V
							// input_type_conversion : (aesl_tmp_3[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> out_V_user_V_tmp_mem;
								out_V_user_V_tmp_mem = (aesl_tmp_3[i_0].user).to_string(2).c_str();
								out_V_user_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = out_V_user_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_out_V_user_V, "%s\n", (out_V_user_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_V_user_V, tvout_out_V_user_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.out_V_user_V_depth);
		sprintf(tvout_out_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_V_user_V, tvout_out_V_user_V);

		// release memory allocation
		delete [] out_V_user_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_out_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_user_V, wrapc_stream_size_out_out_V_user_V);
		sprintf(wrapc_stream_size_out_out_V_user_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_user_V, wrapc_stream_size_out_out_V_user_V);
		sprintf(wrapc_stream_size_out_out_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_user_V, wrapc_stream_size_out_out_V_user_V);

		// [[transaction]]
		sprintf(tvout_out_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_V_last_V, tvout_out_V_last_V);

		sc_bv<1>* out_V_last_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: out_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: out.V.last.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].last
							// regulate_c_name       : out_V_last_V
							// input_type_conversion : (aesl_tmp_3[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> out_V_last_V_tmp_mem;
								out_V_last_V_tmp_mem = (aesl_tmp_3[i_0].last).to_string(2).c_str();
								out_V_last_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = out_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_out_V_last_V, "%s\n", (out_V_last_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_V_last_V, tvout_out_V_last_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.out_V_last_V_depth);
		sprintf(tvout_out_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_V_last_V, tvout_out_V_last_V);

		// release memory allocation
		delete [] out_V_last_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_out_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_last_V, wrapc_stream_size_out_out_V_last_V);
		sprintf(wrapc_stream_size_out_out_V_last_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_last_V, wrapc_stream_size_out_out_V_last_V);
		sprintf(wrapc_stream_size_out_out_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_out_V_last_V, wrapc_stream_size_out_out_V_last_V);

		// push back output stream: "out"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			out.write(aesl_tmp_3[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "in_V_data_V"
		delete [] tvin_in_V_data_V;
		delete [] wrapc_stream_size_in_in_V_data_V;
		// release memory allocation: "in_V_id_V"
		delete [] tvin_in_V_id_V;
		delete [] wrapc_stream_size_in_in_V_id_V;
		// release memory allocation: "in_V_dest_V"
		delete [] tvin_in_V_dest_V;
		delete [] wrapc_stream_size_in_in_V_dest_V;
		// release memory allocation: "in_V_user_V"
		delete [] tvin_in_V_user_V;
		delete [] wrapc_stream_size_in_in_V_user_V;
		// release memory allocation: "in_V_last_V"
		delete [] tvin_in_V_last_V;
		delete [] wrapc_stream_size_in_in_V_last_V;
		// release memory allocation: "out_V_data_V"
		delete [] tvout_out_V_data_V;
		delete [] tvin_out_V_data_V;
		delete [] wrapc_stream_size_out_out_V_data_V;
		// release memory allocation: "out_V_id_V"
		delete [] tvout_out_V_id_V;
		delete [] tvin_out_V_id_V;
		delete [] wrapc_stream_size_out_out_V_id_V;
		// release memory allocation: "out_V_dest_V"
		delete [] tvout_out_V_dest_V;
		delete [] tvin_out_V_dest_V;
		delete [] wrapc_stream_size_out_out_V_dest_V;
		// release memory allocation: "out_V_user_V"
		delete [] tvout_out_V_user_V;
		delete [] tvin_out_V_user_V;
		delete [] wrapc_stream_size_out_out_V_user_V;
		// release memory allocation: "out_V_last_V"
		delete [] tvout_out_V_last_V;
		delete [] tvin_out_V_last_V;
		delete [] wrapc_stream_size_out_out_V_last_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

