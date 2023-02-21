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

entity QuantAct_m_8_rom is 
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


architecture rtl of QuantAct_m_8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010110110111101111011100110111", 
    1 => "1011101001100111111010101010101", 
    2 => "1011000000010000100011110110011", 
    3 => "1111011010100110000000100101011", 
    4 => "1101100111111110110011001110000", 
    5 => "1001100101000100001010011010001", 
    6 => "1010100010010101110101000100010", 
    7 => "1010001101111011001100110000011", 
    8 => "1011010010001000101001010101001", 
    9 => "1010110100101100010100110010010", 
    10 => "1010101001100010110010011011011", 
    11 => "1001111010110010110010010110001", 
    12 => "1001111010010010101101101000001", 
    13 => "1001101111000000111100001110110", 
    14 => "1011101111101000011000100000010", 
    15 => "1010000010110010111011010111001", 
    16 => "1010100110000011101101011001000", 
    17 => "1010000011100100001110010111000", 
    18 => "1010110101111001101010110011110", 
    19 => "1010101010001101011111010010100", 
    20 => "1011010011111101110000001001010", 
    21 => "1010111111100110101010101001110", 
    22 => "1011001010010101000010011000000", 
    23 => "1001010110010111000111110011100", 
    24 => "1011010101100000111111011010010", 
    25 => "1011101101001000101100000100110", 
    26 => "1011000111110110011111101010010", 
    27 => "1100001111001101110011001100001", 
    28 => "1010111111101100111010000110111", 
    29 => "1001110100100101011111110111001", 
    30 => "1010100100110101111101100010010", 
    31 => "1001100011100100110100110011011", 
    32 => "1010110101101110011101011111100", 
    33 => "1010011111000111001110000111001", 
    34 => "1010111110110011000111000011101", 
    35 => "1000110100001101101001010000101", 
    36 => "1010100010110101101111011000111", 
    37 => "1010110001101111110010111011001", 
    38 => "1001111111000000010100111011010", 
    39 => "1010101011100010100100100010011", 
    40 => "1010010100101110000111100111111", 
    41 => "1110011110011101111100001101101", 
    42 => "1010010101010011011001111101001", 
    43 => "1011000010000001000110101000101", 
    44 => "1011001010011001011101100101011", 
    45 => "1011001011010010110011000001011", 
    46 => "1010101011110011100100111101001", 
    47 => "1001101000011100101000000011001" );


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

entity QuantAct_m_8 is
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

architecture arch of QuantAct_m_8 is
    component QuantAct_m_8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_8_rom_U :  component QuantAct_m_8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


