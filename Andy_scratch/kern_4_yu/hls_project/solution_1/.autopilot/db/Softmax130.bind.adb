<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>Softmax130</name>
		<ret_bitwidth>0</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>10</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>in_V_data_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>in.V.data.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO_SRL</coreName>
					</Obj>
					<bitwidth>512</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_2">
				<Value>
					<Obj>
						<type>1</type>
						<id>2</id>
						<name>in_V_id_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>in.V.id.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO_SRL</coreName>
					</Obj>
					<bitwidth>8</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_3">
				<Value>
					<Obj>
						<type>1</type>
						<id>3</id>
						<name>in_V_dest_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>in.V.dest.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO_SRL</coreName>
					</Obj>
					<bitwidth>8</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_4">
				<Value>
					<Obj>
						<type>1</type>
						<id>4</id>
						<name>in_V_user_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>in.V.user.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO_SRL</coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_5">
				<Value>
					<Obj>
						<type>1</type>
						<id>5</id>
						<name>in_V_last_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>in.V.last.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO_SRL</coreName>
					</Obj>
					<bitwidth>1</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_6">
				<Value>
					<Obj>
						<type>1</type>
						<id>6</id>
						<name>out_V_data_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>out.V.data.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>512</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_7">
				<Value>
					<Obj>
						<type>1</type>
						<id>7</id>
						<name>out_V_id_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>out.V.id.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>8</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_8">
				<Value>
					<Obj>
						<type>1</type>
						<id>8</id>
						<name>out_V_dest_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>out.V.dest.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>8</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_9">
				<Value>
					<Obj>
						<type>1</type>
						<id>9</id>
						<name>out_V_user_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>out.V.user.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_10">
				<Value>
					<Obj>
						<type>1</type>
						<id>10</id>
						<name>out_V_last_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>out.V.last.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>1</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>18</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_11">
				<Value>
					<Obj>
						<type>0</type>
						<id>18</id>
						<name>in_write_n_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2032</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="10" tracking_level="0" version="0">
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second class_id="11" tracking_level="0" version="0">
									<count>1</count>
									<item_version>0</item_version>
									<item class_id="12" tracking_level="0" version="0">
										<first class_id="13" tracking_level="0" version="0">
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2032</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_write_n.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>96</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>62</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>1</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_12">
				<Value>
					<Obj>
						<type>0</type>
						<id>21</id>
						<name>in_proc_1_iter_r_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2033</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2033</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_proc_1_iter_r.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>63</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>2</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_13">
				<Value>
					<Obj>
						<type>0</type>
						<id>24</id>
						<name>in_proc_1_iter_c_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2034</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2034</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_proc_1_iter_c.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>64</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>3</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_14">
				<Value>
					<Obj>
						<type>0</type>
						<id>27</id>
						<name>in_proc_1_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2035</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2035</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_proc_1.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>64</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>65</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>4</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_15">
				<Value>
					<Obj>
						<type>0</type>
						<id>30</id>
						<name>in_quant_iter_r_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2036</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2036</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_quant_iter_r.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>66</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>5</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_16">
				<Value>
					<Obj>
						<type>0</type>
						<id>33</id>
						<name>in_quant_iter_c_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2037</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2037</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_quant_iter_c.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>67</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>6</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_17">
				<Value>
					<Obj>
						<type>0</type>
						<id>36</id>
						<name>in_quant_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2038</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2038</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_quant.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>128</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>68</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>7</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_18">
				<Value>
					<Obj>
						<type>0</type>
						<id>39</id>
						<name>in_proc_2_iter_r_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2039</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2039</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_proc_2_iter_r.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>69</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>8</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_19">
				<Value>
					<Obj>
						<type>0</type>
						<id>42</id>
						<name>in_proc_2_iter_c_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2040</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2040</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_proc_2_iter_c.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>70</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>9</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_20">
				<Value>
					<Obj>
						<type>0</type>
						<id>45</id>
						<name>in_proc_2_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2041</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2041</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_proc_2.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>71</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>10</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_21">
				<Value>
					<Obj>
						<type>0</type>
						<id>48</id>
						<name>in_write_2_iter_c_V_s</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2042</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2042</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_write_2_iter_c.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>72</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>11</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_22">
				<Value>
					<Obj>
						<type>0</type>
						<id>51</id>
						<name>in_write_V_V</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2043</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2043</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>in_write.V.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>73</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>12</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_23">
				<Value>
					<Obj>
						<type>0</type>
						<id>54</id>
						<name>_ln2046</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2046</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2046</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>10</count>
					<item_version>0</item_version>
					<item>75</item>
					<item>76</item>
					<item>77</item>
					<item>78</item>
					<item>79</item>
					<item>80</item>
					<item>81</item>
					<item>82</item>
					<item>83</item>
					<item>84</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>13</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_24">
				<Value>
					<Obj>
						<type>0</type>
						<id>55</id>
						<name>_ln2049</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2049</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2049</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>9</count>
					<item_version>0</item_version>
					<item>86</item>
					<item>87</item>
					<item>88</item>
					<item>89</item>
					<item>90</item>
					<item>91</item>
					<item>92</item>
					<item>681</item>
					<item>682</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>14</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_25">
				<Value>
					<Obj>
						<type>0</type>
						<id>56</id>
						<name>_ln2052</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2052</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2052</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>9</count>
					<item_version>0</item_version>
					<item>94</item>
					<item>95</item>
					<item>96</item>
					<item>97</item>
					<item>98</item>
					<item>99</item>
					<item>100</item>
					<item>680</item>
					<item>683</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>15</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_26">
				<Value>
					<Obj>
						<type>0</type>
						<id>57</id>
						<name>_ln2055</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2055</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2055</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>8</count>
					<item_version>0</item_version>
					<item>102</item>
					<item>103</item>
					<item>104</item>
					<item>105</item>
					<item>106</item>
					<item>107</item>
					<item>679</item>
					<item>684</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>16</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_27">
				<Value>
					<Obj>
						<type>0</type>
						<id>58</id>
						<name>_ln2058</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2058</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2058</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>11</count>
					<item_version>0</item_version>
					<item>109</item>
					<item>110</item>
					<item>111</item>
					<item>112</item>
					<item>113</item>
					<item>114</item>
					<item>115</item>
					<item>116</item>
					<item>117</item>
					<item>678</item>
					<item>685</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>17</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_28">
				<Value>
					<Obj>
						<type>0</type>
						<id>59</id>
						<name>_ln2059</name>
						<fileName>src/modules.hpp</fileName>
						<fileDirectory>/home/yugao/Research/Kern/kern/layer_0/kern_4</fileDirectory>
						<lineNumber>2059</lineNumber>
						<contextFuncName>Softmax&amp;lt;config_t_softmax_4&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/yugao/Research/Kern/kern/layer_0/kern_4</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>src/modules.hpp</first>
											<second>Softmax&amp;lt;config_t_softmax_4&amp;gt;</second>
										</first>
										<second>2059</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>0</count>
					<item_version>0</item_version>
				</oprand_edges>
				<opcode>ret</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>18</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
		</nodes>
		<consts class_id="15" tracking_level="0" version="0">
			<count>6</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_29">
				<Value>
					<Obj>
						<type>2</type>
						<id>61</id>
						<name>empty</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>64</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>1</content>
			</item>
			<item class_id_reference="16" object_id="_30">
				<Value>
					<Obj>
						<type>2</type>
						<id>74</id>
						<name>softmax_save_data131</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:softmax_save_data131&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_31">
				<Value>
					<Obj>
						<type>2</type>
						<id>85</id>
						<name>softmax_process_1132</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:softmax_process_1132&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_32">
				<Value>
					<Obj>
						<type>2</type>
						<id>93</id>
						<name>softmax_QuantAct_1_c</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:softmax_QuantAct_1_c&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_33">
				<Value>
					<Obj>
						<type>2</type>
						<id>101</id>
						<name>softmax_process_2134</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:softmax_process_2134&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_34">
				<Value>
					<Obj>
						<type>2</type>
						<id>108</id>
						<name>softmax_write_out135</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:softmax_write_out135&gt;</content>
			</item>
		</consts>
		<blocks class_id="17" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="18" tracking_level="1" version="0" object_id="_35">
				<Obj>
					<type>3</type>
					<id>60</id>
					<name>Softmax130</name>
					<fileName></fileName>
					<fileDirectory></fileDirectory>
					<lineNumber>0</lineNumber>
					<contextFuncName></contextFuncName>
					<inlineStackInfo>
						<count>0</count>
						<item_version>0</item_version>
					</inlineStackInfo>
					<originalName></originalName>
					<rtlName></rtlName>
					<coreName></coreName>
				</Obj>
				<node_objs>
					<count>18</count>
					<item_version>0</item_version>
					<item>18</item>
					<item>21</item>
					<item>24</item>
					<item>27</item>
					<item>30</item>
					<item>33</item>
					<item>36</item>
					<item>39</item>
					<item>42</item>
					<item>45</item>
					<item>48</item>
					<item>51</item>
					<item>54</item>
					<item>55</item>
					<item>56</item>
					<item>57</item>
					<item>58</item>
					<item>59</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>59</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_36">
				<id>62</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>18</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_37">
				<id>63</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>21</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_38">
				<id>64</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>24</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_39">
				<id>65</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>27</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_40">
				<id>66</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>30</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_41">
				<id>67</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>33</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_42">
				<id>68</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>36</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_43">
				<id>69</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_44">
				<id>70</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_45">
				<id>71</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>45</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_46">
				<id>72</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>48</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_47">
				<id>73</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>51</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_48">
				<id>75</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_49">
				<id>76</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_50">
				<id>77</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_51">
				<id>78</id>
				<edge_type>1</edge_type>
				<source_obj>3</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_52">
				<id>79</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_53">
				<id>80</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_54">
				<id>81</id>
				<edge_type>1</edge_type>
				<source_obj>18</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_55">
				<id>82</id>
				<edge_type>1</edge_type>
				<source_obj>21</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_56">
				<id>83</id>
				<edge_type>1</edge_type>
				<source_obj>24</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_57">
				<id>84</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>54</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_58">
				<id>86</id>
				<edge_type>1</edge_type>
				<source_obj>85</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_59">
				<id>87</id>
				<edge_type>1</edge_type>
				<source_obj>21</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_60">
				<id>88</id>
				<edge_type>1</edge_type>
				<source_obj>24</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_61">
				<id>89</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_62">
				<id>90</id>
				<edge_type>1</edge_type>
				<source_obj>30</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_63">
				<id>91</id>
				<edge_type>1</edge_type>
				<source_obj>33</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_64">
				<id>92</id>
				<edge_type>1</edge_type>
				<source_obj>36</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_65">
				<id>94</id>
				<edge_type>1</edge_type>
				<source_obj>93</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_66">
				<id>95</id>
				<edge_type>1</edge_type>
				<source_obj>30</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_67">
				<id>96</id>
				<edge_type>1</edge_type>
				<source_obj>33</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_68">
				<id>97</id>
				<edge_type>1</edge_type>
				<source_obj>36</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_69">
				<id>98</id>
				<edge_type>1</edge_type>
				<source_obj>39</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_70">
				<id>99</id>
				<edge_type>1</edge_type>
				<source_obj>42</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_71">
				<id>100</id>
				<edge_type>1</edge_type>
				<source_obj>45</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_72">
				<id>102</id>
				<edge_type>1</edge_type>
				<source_obj>101</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_73">
				<id>103</id>
				<edge_type>1</edge_type>
				<source_obj>39</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_74">
				<id>104</id>
				<edge_type>1</edge_type>
				<source_obj>42</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_75">
				<id>105</id>
				<edge_type>1</edge_type>
				<source_obj>45</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_76">
				<id>106</id>
				<edge_type>1</edge_type>
				<source_obj>48</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_77">
				<id>107</id>
				<edge_type>1</edge_type>
				<source_obj>51</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_78">
				<id>109</id>
				<edge_type>1</edge_type>
				<source_obj>108</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_79">
				<id>110</id>
				<edge_type>1</edge_type>
				<source_obj>18</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_80">
				<id>111</id>
				<edge_type>1</edge_type>
				<source_obj>48</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_81">
				<id>112</id>
				<edge_type>1</edge_type>
				<source_obj>51</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_82">
				<id>113</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_83">
				<id>114</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_84">
				<id>115</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_85">
				<id>116</id>
				<edge_type>1</edge_type>
				<source_obj>9</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_86">
				<id>117</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_87">
				<id>678</id>
				<edge_type>4</edge_type>
				<source_obj>57</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_88">
				<id>679</id>
				<edge_type>4</edge_type>
				<source_obj>56</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_89">
				<id>680</id>
				<edge_type>4</edge_type>
				<source_obj>55</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_90">
				<id>681</id>
				<edge_type>4</edge_type>
				<source_obj>54</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_91">
				<id>682</id>
				<edge_type>4</edge_type>
				<source_obj>54</source_obj>
				<sink_obj>55</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_92">
				<id>683</id>
				<edge_type>4</edge_type>
				<source_obj>55</source_obj>
				<sink_obj>56</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_93">
				<id>684</id>
				<edge_type>4</edge_type>
				<source_obj>56</source_obj>
				<sink_obj>57</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_94">
				<id>685</id>
				<edge_type>4</edge_type>
				<source_obj>57</source_obj>
				<sink_obj>58</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_95">
			<mId>1</mId>
			<mTag>Softmax130</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>60</item>
			</basic_blocks>
			<mII>-1</mII>
			<mDepth>-1</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>73</mMinLatency>
			<mMaxLatency>16776763</mMaxLatency>
			<mIsDfPipe>1</mIsDfPipe>
			<mDfPipe class_id="23" tracking_level="1" version="0" object_id="_96">
				<port_list class_id="24" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</port_list>
				<process_list class_id="25" tracking_level="0" version="0">
					<count>5</count>
					<item_version>0</item_version>
					<item class_id="26" tracking_level="1" version="0" object_id="_97">
						<type>0</type>
						<name>softmax_save_data131_U0</name>
						<ssdmobj_id>54</ssdmobj_id>
						<pins class_id="27" tracking_level="0" version="0">
							<count>9</count>
							<item_version>0</item_version>
							<item class_id="28" tracking_level="1" version="0" object_id="_98">
								<port class_id="29" tracking_level="1" version="0" object_id="_99">
									<name>in_V_data_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id="30" tracking_level="1" version="0" object_id="_100">
									<type>0</type>
									<name>softmax_save_data131_U0</name>
									<ssdmobj_id>54</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_101">
								<port class_id_reference="29" object_id="_102">
									<name>in_V_id_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
							<item class_id_reference="28" object_id="_103">
								<port class_id_reference="29" object_id="_104">
									<name>in_V_dest_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
							<item class_id_reference="28" object_id="_105">
								<port class_id_reference="29" object_id="_106">
									<name>in_V_user_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
							<item class_id_reference="28" object_id="_107">
								<port class_id_reference="29" object_id="_108">
									<name>in_V_last_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
							<item class_id_reference="28" object_id="_109">
								<port class_id_reference="29" object_id="_110">
									<name>out_n_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
							<item class_id_reference="28" object_id="_111">
								<port class_id_reference="29" object_id="_112">
									<name>out_iter_r_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
							<item class_id_reference="28" object_id="_113">
								<port class_id_reference="29" object_id="_114">
									<name>out_iter_c_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
							<item class_id_reference="28" object_id="_115">
								<port class_id_reference="29" object_id="_116">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_100"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_117">
						<type>0</type>
						<name>softmax_process_1132_U0</name>
						<ssdmobj_id>55</ssdmobj_id>
						<pins>
							<count>6</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_118">
								<port class_id_reference="29" object_id="_119">
									<name>in_iter_r_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_120">
									<type>0</type>
									<name>softmax_process_1132_U0</name>
									<ssdmobj_id>55</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_121">
								<port class_id_reference="29" object_id="_122">
									<name>in_iter_c_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_120"></inst>
							</item>
							<item class_id_reference="28" object_id="_123">
								<port class_id_reference="29" object_id="_124">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_120"></inst>
							</item>
							<item class_id_reference="28" object_id="_125">
								<port class_id_reference="29" object_id="_126">
									<name>out_iter_r_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_120"></inst>
							</item>
							<item class_id_reference="28" object_id="_127">
								<port class_id_reference="29" object_id="_128">
									<name>out_iter_c_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_120"></inst>
							</item>
							<item class_id_reference="28" object_id="_129">
								<port class_id_reference="29" object_id="_130">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_120"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_131">
						<type>0</type>
						<name>softmax_QuantAct_1_c_U0</name>
						<ssdmobj_id>56</ssdmobj_id>
						<pins>
							<count>6</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_132">
								<port class_id_reference="29" object_id="_133">
									<name>in_iter_r_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_134">
									<type>0</type>
									<name>softmax_QuantAct_1_c_U0</name>
									<ssdmobj_id>56</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_135">
								<port class_id_reference="29" object_id="_136">
									<name>in_iter_c_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_137">
								<port class_id_reference="29" object_id="_138">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_139">
								<port class_id_reference="29" object_id="_140">
									<name>out_iter_r_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_141">
								<port class_id_reference="29" object_id="_142">
									<name>out_iter_c_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_143">
								<port class_id_reference="29" object_id="_144">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_145">
						<type>0</type>
						<name>softmax_process_2134_U0</name>
						<ssdmobj_id>57</ssdmobj_id>
						<pins>
							<count>5</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_146">
								<port class_id_reference="29" object_id="_147">
									<name>in_iter_r_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_148">
									<type>0</type>
									<name>softmax_process_2134_U0</name>
									<ssdmobj_id>57</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_149">
								<port class_id_reference="29" object_id="_150">
									<name>in_iter_c_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_148"></inst>
							</item>
							<item class_id_reference="28" object_id="_151">
								<port class_id_reference="29" object_id="_152">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_148"></inst>
							</item>
							<item class_id_reference="28" object_id="_153">
								<port class_id_reference="29" object_id="_154">
									<name>out_iter_c_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_148"></inst>
							</item>
							<item class_id_reference="28" object_id="_155">
								<port class_id_reference="29" object_id="_156">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_148"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_157">
						<type>0</type>
						<name>softmax_write_out135_U0</name>
						<ssdmobj_id>58</ssdmobj_id>
						<pins>
							<count>8</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_158">
								<port class_id_reference="29" object_id="_159">
									<name>in_n_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_160">
									<type>0</type>
									<name>softmax_write_out135_U0</name>
									<ssdmobj_id>58</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_161">
								<port class_id_reference="29" object_id="_162">
									<name>in_iter_c_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_160"></inst>
							</item>
							<item class_id_reference="28" object_id="_163">
								<port class_id_reference="29" object_id="_164">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_160"></inst>
							</item>
							<item class_id_reference="28" object_id="_165">
								<port class_id_reference="29" object_id="_166">
									<name>out_V_data_V</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_160"></inst>
							</item>
							<item class_id_reference="28" object_id="_167">
								<port class_id_reference="29" object_id="_168">
									<name>out_V_id_V</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_160"></inst>
							</item>
							<item class_id_reference="28" object_id="_169">
								<port class_id_reference="29" object_id="_170">
									<name>out_V_dest_V</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_160"></inst>
							</item>
							<item class_id_reference="28" object_id="_171">
								<port class_id_reference="29" object_id="_172">
									<name>out_V_user_V</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_160"></inst>
							</item>
							<item class_id_reference="28" object_id="_173">
								<port class_id_reference="29" object_id="_174">
									<name>out_V_last_V</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_160"></inst>
							</item>
						</pins>
					</item>
				</process_list>
				<channel_list class_id="31" tracking_level="0" version="0">
					<count>12</count>
					<item_version>0</item_version>
					<item class_id="32" tracking_level="1" version="0" object_id="_175">
						<type>1</type>
						<name>in_write_n_V_V</name>
						<ssdmobj_id>18</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>96</bitwidth>
						<source class_id_reference="28" object_id="_176">
							<port class_id_reference="29" object_id="_177">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_100"></inst>
						</source>
						<sink class_id_reference="28" object_id="_178">
							<port class_id_reference="29" object_id="_179">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_160"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_180">
						<type>1</type>
						<name>in_proc_1_iter_r_V_V</name>
						<ssdmobj_id>21</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_181">
							<port class_id_reference="29" object_id="_182">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_100"></inst>
						</source>
						<sink class_id_reference="28" object_id="_183">
							<port class_id_reference="29" object_id="_184">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_120"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_185">
						<type>1</type>
						<name>in_proc_1_iter_c_V_V</name>
						<ssdmobj_id>24</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_186">
							<port class_id_reference="29" object_id="_187">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_100"></inst>
						</source>
						<sink class_id_reference="28" object_id="_188">
							<port class_id_reference="29" object_id="_189">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_120"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_190">
						<type>1</type>
						<name>in_proc_1_V_V</name>
						<ssdmobj_id>27</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>64</bitwidth>
						<source class_id_reference="28" object_id="_191">
							<port class_id_reference="29" object_id="_192">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_100"></inst>
						</source>
						<sink class_id_reference="28" object_id="_193">
							<port class_id_reference="29" object_id="_194">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_120"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_195">
						<type>1</type>
						<name>in_quant_iter_r_V_V</name>
						<ssdmobj_id>30</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_196">
							<port class_id_reference="29" object_id="_197">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_120"></inst>
						</source>
						<sink class_id_reference="28" object_id="_198">
							<port class_id_reference="29" object_id="_199">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_200">
						<type>1</type>
						<name>in_quant_iter_c_V_V</name>
						<ssdmobj_id>33</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_201">
							<port class_id_reference="29" object_id="_202">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_120"></inst>
						</source>
						<sink class_id_reference="28" object_id="_203">
							<port class_id_reference="29" object_id="_204">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_205">
						<type>1</type>
						<name>in_quant_V_V</name>
						<ssdmobj_id>36</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>128</bitwidth>
						<source class_id_reference="28" object_id="_206">
							<port class_id_reference="29" object_id="_207">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_120"></inst>
						</source>
						<sink class_id_reference="28" object_id="_208">
							<port class_id_reference="29" object_id="_209">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_210">
						<type>1</type>
						<name>in_proc_2_iter_r_V_V</name>
						<ssdmobj_id>39</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_211">
							<port class_id_reference="29" object_id="_212">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</source>
						<sink class_id_reference="28" object_id="_213">
							<port class_id_reference="29" object_id="_214">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_148"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_215">
						<type>1</type>
						<name>in_proc_2_iter_c_V_V</name>
						<ssdmobj_id>42</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_216">
							<port class_id_reference="29" object_id="_217">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</source>
						<sink class_id_reference="28" object_id="_218">
							<port class_id_reference="29" object_id="_219">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_148"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_220">
						<type>1</type>
						<name>in_proc_2_V_V</name>
						<ssdmobj_id>45</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_221">
							<port class_id_reference="29" object_id="_222">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</source>
						<sink class_id_reference="28" object_id="_223">
							<port class_id_reference="29" object_id="_224">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_148"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_225">
						<type>1</type>
						<name>in_write_2_iter_c_V_s</name>
						<ssdmobj_id>48</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_226">
							<port class_id_reference="29" object_id="_227">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_148"></inst>
						</source>
						<sink class_id_reference="28" object_id="_228">
							<port class_id_reference="29" object_id="_229">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_160"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_230">
						<type>1</type>
						<name>in_write_V_V</name>
						<ssdmobj_id>51</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_231">
							<port class_id_reference="29" object_id="_232">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_148"></inst>
						</source>
						<sink class_id_reference="28" object_id="_233">
							<port class_id_reference="29" object_id="_234">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_160"></inst>
						</sink>
					</item>
				</channel_list>
				<net_list class_id="33" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</net_list>
			</mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="34" tracking_level="1" version="0" object_id="_235">
		<states class_id="35" tracking_level="0" version="0">
			<count>11</count>
			<item_version>0</item_version>
			<item class_id="36" tracking_level="1" version="0" object_id="_236">
				<id>1</id>
				<operations class_id="37" tracking_level="0" version="0">
					<count>13</count>
					<item_version>0</item_version>
					<item class_id="38" tracking_level="1" version="0" object_id="_237">
						<id>18</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_238">
						<id>21</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_239">
						<id>24</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_240">
						<id>27</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_241">
						<id>30</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_242">
						<id>33</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_243">
						<id>36</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_244">
						<id>39</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_245">
						<id>42</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_246">
						<id>45</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_247">
						<id>48</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_248">
						<id>51</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_249">
						<id>54</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_250">
				<id>2</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_251">
						<id>54</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_252">
				<id>3</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_253">
						<id>55</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_254">
				<id>4</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_255">
						<id>55</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_256">
				<id>5</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_257">
						<id>56</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_258">
				<id>6</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_259">
						<id>56</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_260">
				<id>7</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_261">
						<id>57</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_262">
				<id>8</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_263">
						<id>57</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_264">
				<id>9</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_265">
						<id>58</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_266">
				<id>10</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_267">
						<id>58</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_268">
				<id>11</id>
				<operations>
					<count>32</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_269">
						<id>11</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_270">
						<id>12</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_271">
						<id>13</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_272">
						<id>14</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_273">
						<id>15</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_274">
						<id>16</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_275">
						<id>17</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_276">
						<id>19</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_277">
						<id>20</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_278">
						<id>22</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_279">
						<id>23</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_280">
						<id>25</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_281">
						<id>26</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_282">
						<id>28</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_283">
						<id>29</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_284">
						<id>31</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_285">
						<id>32</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_286">
						<id>34</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_287">
						<id>35</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_288">
						<id>37</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_289">
						<id>38</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_290">
						<id>40</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_291">
						<id>41</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_292">
						<id>43</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_293">
						<id>44</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_294">
						<id>46</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_295">
						<id>47</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_296">
						<id>49</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_297">
						<id>50</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_298">
						<id>52</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_299">
						<id>53</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_300">
						<id>59</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
		</states>
		<transitions class_id="39" tracking_level="0" version="0">
			<count>10</count>
			<item_version>0</item_version>
			<item class_id="40" tracking_level="1" version="0" object_id="_301">
				<inState>1</inState>
				<outState>2</outState>
				<condition class_id="41" tracking_level="0" version="0">
					<id>-1</id>
					<sop class_id="42" tracking_level="0" version="0">
						<count>1</count>
						<item_version>0</item_version>
						<item class_id="43" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_302">
				<inState>2</inState>
				<outState>3</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_303">
				<inState>3</inState>
				<outState>4</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_304">
				<inState>4</inState>
				<outState>5</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_305">
				<inState>5</inState>
				<outState>6</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_306">
				<inState>6</inState>
				<outState>7</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_307">
				<inState>7</inState>
				<outState>8</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_308">
				<inState>8</inState>
				<outState>9</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_309">
				<inState>9</inState>
				<outState>10</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_310">
				<inState>10</inState>
				<outState>11</outState>
				<condition>
					<id>-1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
		</transitions>
	</fsm>
	<res class_id="-1"></res>
	<node_label_latency class_id="45" tracking_level="0" version="0">
		<count>18</count>
		<item_version>0</item_version>
		<item class_id="46" tracking_level="0" version="0">
			<first>18</first>
			<second class_id="47" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>21</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>24</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>27</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>30</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>33</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>36</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>39</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>42</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>45</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>48</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>51</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>54</first>
			<second>
				<first>0</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>55</first>
			<second>
				<first>2</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>56</first>
			<second>
				<first>4</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>57</first>
			<second>
				<first>6</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>58</first>
			<second>
				<first>8</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>59</first>
			<second>
				<first>10</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="48" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="49" tracking_level="0" version="0">
			<first>60</first>
			<second class_id="50" tracking_level="0" version="0">
				<first>0</first>
				<second>10</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="51" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="52" tracking_level="1" version="0" object_id="_311">
			<region_name>Softmax130</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>60</item>
			</basic_blocks>
			<nodes>
				<count>49</count>
				<item_version>0</item_version>
				<item>11</item>
				<item>12</item>
				<item>13</item>
				<item>14</item>
				<item>15</item>
				<item>16</item>
				<item>17</item>
				<item>18</item>
				<item>19</item>
				<item>20</item>
				<item>21</item>
				<item>22</item>
				<item>23</item>
				<item>24</item>
				<item>25</item>
				<item>26</item>
				<item>27</item>
				<item>28</item>
				<item>29</item>
				<item>30</item>
				<item>31</item>
				<item>32</item>
				<item>33</item>
				<item>34</item>
				<item>35</item>
				<item>36</item>
				<item>37</item>
				<item>38</item>
				<item>39</item>
				<item>40</item>
				<item>41</item>
				<item>42</item>
				<item>43</item>
				<item>44</item>
				<item>45</item>
				<item>46</item>
				<item>47</item>
				<item>48</item>
				<item>49</item>
				<item>50</item>
				<item>51</item>
				<item>52</item>
				<item>53</item>
				<item>54</item>
				<item>55</item>
				<item>56</item>
				<item>57</item>
				<item>58</item>
				<item>59</item>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>16</region_type>
			<interval>0</interval>
			<pipe_depth>0</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="53" tracking_level="0" version="0">
		<count>17</count>
		<item_version>0</item_version>
		<item class_id="54" tracking_level="0" version="0">
			<first>308</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>18</item>
			</second>
		</item>
		<item>
			<first>312</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>21</item>
			</second>
		</item>
		<item>
			<first>316</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>24</item>
			</second>
		</item>
		<item>
			<first>320</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>324</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>328</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>332</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>336</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>340</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
		<item>
			<first>344</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>45</item>
			</second>
		</item>
		<item>
			<first>348</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>48</item>
			</second>
		</item>
		<item>
			<first>352</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>51</item>
			</second>
		</item>
		<item>
			<first>356</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>57</item>
				<item>57</item>
			</second>
		</item>
		<item>
			<first>365</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>54</item>
				<item>54</item>
			</second>
		</item>
		<item>
			<first>383</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>58</item>
				<item>58</item>
			</second>
		</item>
		<item>
			<first>400</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>55</item>
				<item>55</item>
			</second>
		</item>
		<item>
			<first>410</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>56</item>
				<item>56</item>
			</second>
		</item>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="56" tracking_level="0" version="0">
		<count>12</count>
		<item_version>0</item_version>
		<item class_id="57" tracking_level="0" version="0">
			<first>in_proc_1_V_V_fu_320</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>in_proc_1_iter_c_V_V_fu_316</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>24</item>
			</second>
		</item>
		<item>
			<first>in_proc_1_iter_r_V_V_fu_312</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>21</item>
			</second>
		</item>
		<item>
			<first>in_proc_2_V_V_fu_344</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>45</item>
			</second>
		</item>
		<item>
			<first>in_proc_2_iter_c_V_V_fu_340</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
		<item>
			<first>in_proc_2_iter_r_V_V_fu_336</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>in_quant_V_V_fu_332</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>in_quant_iter_c_V_V_fu_328</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>in_quant_iter_r_V_V_fu_324</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>in_write_2_iter_c_V_s_fu_348</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>48</item>
			</second>
		</item>
		<item>
			<first>in_write_V_V_fu_352</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>51</item>
			</second>
		</item>
		<item>
			<first>in_write_n_V_V_fu_308</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>18</item>
			</second>
		</item>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>5</count>
		<item_version>0</item_version>
		<item>
			<first>grp_softmax_QuantAct_1_c_fu_410</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>56</item>
				<item>56</item>
			</second>
		</item>
		<item>
			<first>grp_softmax_process_1132_fu_400</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>55</item>
				<item>55</item>
			</second>
		</item>
		<item>
			<first>grp_softmax_process_2134_fu_356</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>57</item>
				<item>57</item>
			</second>
		</item>
		<item>
			<first>grp_softmax_save_data131_fu_365</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>54</item>
				<item>54</item>
			</second>
		</item>
		<item>
			<first>grp_softmax_write_out135_fu_383</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>58</item>
				<item>58</item>
			</second>
		</item>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="58" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>12</count>
		<item_version>0</item_version>
		<item>
			<first>420</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>18</item>
			</second>
		</item>
		<item>
			<first>426</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>21</item>
			</second>
		</item>
		<item>
			<first>432</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>24</item>
			</second>
		</item>
		<item>
			<first>438</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>444</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>450</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>456</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>462</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>468</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
		<item>
			<first>474</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>45</item>
			</second>
		</item>
		<item>
			<first>480</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>48</item>
			</second>
		</item>
		<item>
			<first>486</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>51</item>
			</second>
		</item>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>12</count>
		<item_version>0</item_version>
		<item>
			<first>in_proc_1_V_V_reg_438</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>in_proc_1_iter_c_V_V_reg_432</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>24</item>
			</second>
		</item>
		<item>
			<first>in_proc_1_iter_r_V_V_reg_426</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>21</item>
			</second>
		</item>
		<item>
			<first>in_proc_2_V_V_reg_474</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>45</item>
			</second>
		</item>
		<item>
			<first>in_proc_2_iter_c_V_V_reg_468</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>42</item>
			</second>
		</item>
		<item>
			<first>in_proc_2_iter_r_V_V_reg_462</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>in_quant_V_V_reg_456</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>36</item>
			</second>
		</item>
		<item>
			<first>in_quant_iter_c_V_V_reg_450</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>in_quant_iter_r_V_V_reg_444</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>in_write_2_iter_c_V_s_reg_480</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>48</item>
			</second>
		</item>
		<item>
			<first>in_write_V_V_reg_486</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>51</item>
			</second>
		</item>
		<item>
			<first>in_write_n_V_V_reg_420</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>18</item>
			</second>
		</item>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="59" tracking_level="0" version="0">
		<count>10</count>
		<item_version>0</item_version>
		<item class_id="60" tracking_level="0" version="0">
			<first>in_V_data_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>54</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>in_V_dest_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>54</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>in_V_id_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>54</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>in_V_last_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>54</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>in_V_user_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>54</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>out_V_data_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>58</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>out_V_dest_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>58</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>out_V_id_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>58</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>out_V_last_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>58</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>out_V_user_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>58</item>
					</second>
				</item>
			</second>
		</item>
	</dp_port_io_nodes>
	<port2core class_id="61" tracking_level="0" version="0">
		<count>5</count>
		<item_version>0</item_version>
		<item class_id="62" tracking_level="0" version="0">
			<first>1</first>
			<second>FIFO_SRL</second>
		</item>
		<item>
			<first>2</first>
			<second>FIFO_SRL</second>
		</item>
		<item>
			<first>3</first>
			<second>FIFO_SRL</second>
		</item>
		<item>
			<first>4</first>
			<second>FIFO_SRL</second>
		</item>
		<item>
			<first>5</first>
			<second>FIFO_SRL</second>
		</item>
	</port2core>
	<node2core>
		<count>12</count>
		<item_version>0</item_version>
		<item>
			<first>18</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>21</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>24</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>27</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>30</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>33</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>36</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>39</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>42</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>45</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>48</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>51</first>
			<second>FIFO</second>
		</item>
	</node2core>
</syndb>
</boost_serialization>

