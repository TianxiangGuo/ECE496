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

entity QuantAct_m_3_rom is 
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


architecture rtl of QuantAct_m_3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010110001100001001111000100110", 
    1 => "1100010100010111011000001010000", 
    2 => "1101001000010101010011000100000", 
    3 => "1001011011000110111010000001111", 
    4 => "1100000101100011101000011111001", 
    5 => "1011101101110000010100010110111", 
    6 => "1011010100101111101101010110111", 
    7 => "1011100111011011011011001010001", 
    8 => "1100001011011000001000001011010", 
    9 => "1010000110100101011011001011100", 
    10 => "1010111110001111110000001101111", 
    11 => "1010000011111000010101100011111", 
    12 => "1011010010101000011011110001101", 
    13 => "1010110101000000100110011000100", 
    14 => "1001010011001111000010100100110", 
    15 => "1100001110101110001001001111111", 
    16 => "1011010111001101110111110100001", 
    17 => "1000111011101111101111110100100", 
    18 => "1011010000110111001101100001001", 
    19 => "1010000110101000101111100000100", 
    20 => "1110100000000101010011011110001", 
    21 => "1011010001100100000011000110100", 
    22 => "1011100001001111110100000110011", 
    23 => "1010000010111110111101111010110", 
    24 => "1100000010111001000101000110110", 
    25 => "1011001110010000010001101011110", 
    26 => "1100000111000011001011001010101", 
    27 => "1001111100001101101110001010010", 
    28 => "1100000011110011111110101110010", 
    29 => "1110011000000100111101001110011", 
    30 => "1001101001110010011011001000100", 
    31 => "1001111011100100111100101000011", 
    32 => "1010101011111000010000110111001", 
    33 => "1000010011000110111101010100100", 
    34 => "1001111010101110001011011110110", 
    35 => "1001111100010000111000011010000", 
    36 => "1010101101100011101011000100101", 
    37 => "1010000011011010000000101011011", 
    38 => "1100001110011110001110011100111", 
    39 => "1010111110111111101010011000001", 
    40 => "1011000001011110010001110100010", 
    41 => "1010011101110100111001100110000", 
    42 => "1011100111010100011100001000101", 
    43 => "1100001011001001101101110001110", 
    44 => "1011010110111011001100111010101", 
    45 => "1010101101101010010100101011001", 
    46 => "1001101110110010100110001111011", 
    47 => "1010010011111011010010000001010" );


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

entity QuantAct_m_3 is
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

architecture arch of QuantAct_m_3 is
    component QuantAct_m_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_3_rom_U :  component QuantAct_m_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


