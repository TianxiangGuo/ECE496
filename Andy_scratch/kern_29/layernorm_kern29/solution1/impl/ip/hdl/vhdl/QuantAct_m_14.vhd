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

entity QuantAct_m_14_rom is 
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


architecture rtl of QuantAct_m_14_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011100111110110010001010100010", 
    1 => "1001110001110100000001110111100", 
    2 => "1100001100100100001011101010100", 
    3 => "1100001000001000011010000001101", 
    4 => "1010110010000111101101000000110", 
    5 => "1010001111010110111101110011110", 
    6 => "1000101111011100110000011110000", 
    7 => "1010110000111100010110010000101", 
    8 => "1010000100001000011010100110010", 
    9 => "1010110101100001000011010110111", 
    10 => "1010011111100100001111100000110", 
    11 => "1010101001101111001110001100000", 
    12 => "1011101110011111000100011111010", 
    13 => "1011100110000001011101011001111", 
    14 => "1010001111010011011110011101001", 
    15 => "1100011111010010101011011101001", 
    16 => "1010111000101110000100111000000", 
    17 => "1001100000101101111111011011011", 
    18 => "1011010101011100011101100101011", 
    19 => "1010001110011000000010100000000", 
    20 => "1111100110011111100011101101111", 
    21 => "1111111111001011101100110101100", 
    22 => "1011110010110101100011001010000", 
    23 => "1010100110100011000101011000000", 
    24 => "1011010000100000100001100011110", 
    25 => "1011001101010011110010111100010", 
    26 => "1010110100000110111010111001001", 
    27 => "1011101001100111010100110111010", 
    28 => "1010010001010101001011000111000", 
    29 => "1100111101101010100000101011100", 
    30 => "1101001110101101101011100111100", 
    31 => "1010000011100010101000100110110", 
    32 => "1011011111001001001011011110010", 
    33 => "1010101111101110100010010011110", 
    34 => "1010110011111110010101011111000", 
    35 => "1010101011001110001111110010100", 
    36 => "1000010100111100111000111001101", 
    37 => "1011110011100010000110001001111", 
    38 => "1001000110100001111001101001000", 
    39 => "1011000000001101111100010000011", 
    40 => "1001111111001111111001101011000", 
    41 => "1001010100011011111000110010000", 
    42 => "1101101101100100100111001011110", 
    43 => "1011011001101100010000001000100", 
    44 => "1011011000101100100100111100001", 
    45 => "1011000101011101110110111110101", 
    46 => "1011101001001010101100010110011", 
    47 => "1010110001110011010101000111010" );


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

entity QuantAct_m_14 is
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

architecture arch of QuantAct_m_14 is
    component QuantAct_m_14_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_14_rom_U :  component QuantAct_m_14_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


