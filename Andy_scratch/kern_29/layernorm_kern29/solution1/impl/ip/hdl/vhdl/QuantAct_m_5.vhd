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

entity QuantAct_m_5_rom is 
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


architecture rtl of QuantAct_m_5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011001001011110111111011000000", 
    1 => "1010000001110110011011001101000", 
    2 => "1010101010000100111100011001110", 
    3 => "1010000011101010000001001001011", 
    4 => "1010110110011011110100110010001", 
    5 => "1011011011010110111110100011100", 
    6 => "1010111001000100110011010110110", 
    7 => "1011001110110101001010001011101", 
    8 => "1011110101001011001010000110001", 
    9 => "1010110101000011001000111100000", 
    10 => "1010111000000110010111001111000", 
    11 => "1010100000000110011010011011101", 
    12 => "1001100001001011100100111001101", 
    13 => "1001101111001100001010010101011", 
    14 => "1011110100100011011000000010111", 
    15 => "1100011011001110100111010011011", 
    16 => "1011100101000110110111111100110", 
    17 => "1010011000001101000001000000010", 
    18 => "1011001000101100011010011110000", 
    19 => "1011001111001110100011011010001", 
    20 => "1001110011000101110000000111000", 
    21 => "1011100000101011111100001011100", 
    22 => "1010110100000101010100001100011", 
    23 => "1100001010100100000101011001001", 
    24 => "1011011001010011111111111111100", 
    25 => "1010100100110000010001010111010", 
    26 => "1011100100100101111000111100111", 
    27 => "1011010000010010110010000000001", 
    28 => "1001001001110001011010001111110", 
    29 => "1010100010000100011011110000101", 
    30 => "1010010111111011001011000001111", 
    31 => "1001110100111110100001111011110", 
    32 => "1011011100100001100000011000100", 
    33 => "1000111011001010100000101000111", 
    34 => "1011001010111001110101110101011", 
    35 => "1010101101010100001011010111100", 
    36 => "1111100010100001011110010100101", 
    37 => "1010011011000100101110110001001", 
    38 => "1011000111111001111101110000010", 
    39 => "1001100101000111001110010110110", 
    40 => "1010000001010110000000101111111", 
    41 => "1011110111011001010100000101011", 
    42 => "1011100110000001010000011111010", 
    43 => "1011100010111111111101101011101", 
    44 => "1011001010000001110111010110000", 
    45 => "1011010010111111100100000101110", 
    46 => "1011110100001101000111011111100", 
    47 => "1010001000100110010001000001010" );


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

entity QuantAct_m_5 is
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

architecture arch of QuantAct_m_5 is
    component QuantAct_m_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_5_rom_U :  component QuantAct_m_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


