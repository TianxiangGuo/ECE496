-- ==============================================================
-- File generated on Mon Feb 20 12:11:19 EST 2023
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity QuantAct_m_7_rom is 
    generic(
             DWIDTH     : integer := 31; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 48
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of QuantAct_m_7_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011001001111100100011011011011", 
    1 => "1010110011111010100110000100001", 
    2 => "1010101111110101001111101100001", 
    3 => "1001101000010001100000001111101", 
    4 => "1010101001100101100111111000100", 
    5 => "1011001011100110100010100110001", 
    6 => "1011001110111000011001011110001", 
    7 => "1010110000001111001110000101110", 
    8 => "1010001100101111011010010001111", 
    9 => "1010101001110011010110001011100", 
    10 => "1010101100101010110001010110111", 
    11 => "1010000101001101111011010000011", 
    12 => "1000111111111011011101001101100", 
    13 => "1011100000110110001011110000001", 
    14 => "1011101001001001100100110101101", 
    15 => "1100010110111000111100010011001", 
    16 => "1010001111110110100101100010111", 
    17 => "1010100010110111110101010001101", 
    18 => "1011001111000001111111011101011", 
    19 => "1001110100011100100111100011011", 
    20 => "1011011101100101010001000011001", 
    21 => "1001100110010100100000010010001", 
    22 => "1011001011001001111110001011011", 
    23 => "1001111100001100110010110001110", 
    24 => "1010010001110110101001100111000", 
    25 => "1010001100010000101001000010111", 
    26 => "1001111001000001110001110010101", 
    27 => "1010101000101011110111000010100", 
    28 => "1001010101101100010001110011101", 
    29 => "1001111001101101001101010001110", 
    30 => "1000111101110111110010100010111", 
    31 => "1001100111000110101100100111100", 
    32 => "1010110100100010010101111010010", 
    33 => "1100100101110010010110100100001", 
    34 => "1110110111110010110111010101010", 
    35 => "1010011011101111100111111010101", 
    36 => "1100010010100110010010011001111", 
    37 => "1001101011000110011110110110101", 
    38 => "1001111010100011111101001010110", 
    39 => "1000011000111010100101010000000", 
    40 => "1011100100100111111011000011101", 
    41 => "1011101011000111001100000001010", 
    42 => "1100000000110100100101001100111", 
    43 => "1011001111100110111101101000010", 
    44 => "1111110001100010011100011110010", 
    45 => "1010110110001000110000010111100", 
    46 => "1010010001110110010011100011110", 
    47 => "1010100011100000101011101100000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity QuantAct_m_7 is
    generic (
        DataWidth : INTEGER := 31;
        AddressRange : INTEGER := 48;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of QuantAct_m_7 is
    component QuantAct_m_7_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_7_rom_U :  component QuantAct_m_7_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


