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

entity QuantAct_m_6_rom is 
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


architecture rtl of QuantAct_m_6_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010010010101000010000110001010", 
    1 => "1010110001100000011110100011111", 
    2 => "1011011000001010110011110110100", 
    3 => "1010010110010110001010111111000", 
    4 => "1011000101011010110110110100000", 
    5 => "1001011100010001111101000110000", 
    6 => "1011000011111110111000100001110", 
    7 => "1010011000110101001100111000110", 
    8 => "1010011011110101000100000001010", 
    9 => "1010000101000100111010011100001", 
    10 => "1010110001011000001000111001111", 
    11 => "1010111101010110111010100110001", 
    12 => "1011101111001000011010000101100", 
    13 => "1011001111000001000000011101000", 
    14 => "1001111110110111101111101011010", 
    15 => "1010111101111010001100101101100", 
    16 => "1011100001000001101111110000000", 
    17 => "1000001101100101011000011011111", 
    18 => "1010001001001110001100100001011", 
    19 => "1010011100001001100000010101000", 
    20 => "1011110001011011011010101100010", 
    21 => "1011011111000101011001110110001", 
    22 => "1001110101011101111000110100001", 
    23 => "1010100100110111100110110000010", 
    24 => "1011011011011011101100000010010", 
    25 => "1010111010010100001011001010111", 
    26 => "1001110111010111011010000011010", 
    27 => "1010000011000110000111111101111", 
    28 => "1010101101101101111011100101110", 
    29 => "1011000111100100111100010001100", 
    30 => "1011000101011001000110010110010", 
    31 => "1011001110011101100001011011000", 
    32 => "1010111011010100101110110000010", 
    33 => "1010110000011011101100111111111", 
    34 => "1010011110001111001111100111110", 
    35 => "1001111011110111101000101000100", 
    36 => "1010100111000101110011100101000", 
    37 => "1001110010101011100010011011100", 
    38 => "1001110001111111011100111000111", 
    39 => "1110001001100000001011110111100", 
    40 => "1000110000001101010100001101101", 
    41 => "1010110011111010100000000101000", 
    42 => "1011011011011001001110001101010", 
    43 => "1011001101111000101000111011000", 
    44 => "1001111100000100110000101001110", 
    45 => "1011001110010100111100000000111", 
    46 => "1010110001000001010101000100010", 
    47 => "1011001110110000011011001000000" );


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

entity QuantAct_m_6 is
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

architecture arch of QuantAct_m_6 is
    component QuantAct_m_6_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_6_rom_U :  component QuantAct_m_6_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


