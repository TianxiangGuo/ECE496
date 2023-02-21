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

entity QuantAct_m_11_rom is 
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


architecture rtl of QuantAct_m_11_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1100000011111111111001011001110", 
    1 => "1001100101110101110000011101110", 
    2 => "1010000001000011100100110100000", 
    3 => "1100000001100010001011100111010", 
    4 => "1011110001100110011100010110101", 
    5 => "1010011100010001101010101001010", 
    6 => "1011101101010001101010101011110", 
    7 => "1011011111111111101111100011001", 
    8 => "1010010100011000101010000110101", 
    9 => "1011111001011001010011101111011", 
    10 => "1010110001101110101000100101000", 
    11 => "1001000100101000110001001000100", 
    12 => "1001010110000000001010000010111", 
    13 => "1100110111001011011100101000100", 
    14 => "1011101001001001110101100010010", 
    15 => "1011101000011001000101001100001", 
    16 => "1010000100100100100010111110101", 
    17 => "1010000001011000000100010001011", 
    18 => "1010111011001100100110101001010", 
    19 => "1010011100011011000100101010011", 
    20 => "1001110000110110010101010100010", 
    21 => "1010010110111011000000101001100", 
    22 => "1011001111011011000110000110010", 
    23 => "1011000011100110111001011001100", 
    24 => "1010110110110111000111111011010", 
    25 => "1011001000010001110011101111110", 
    26 => "1010101010001010010001010000110", 
    27 => "1010110010011001011000111001111", 
    28 => "1010110001111111111011010001010", 
    29 => "1010100001101011111001010110011", 
    30 => "1011000100010010011000000010010", 
    31 => "1001101010000001101011000101100", 
    32 => "1001110110101110111010010100101", 
    33 => "1010100000000100010110000111101", 
    34 => "1001111011011011110101110101001", 
    35 => "1010010001010000000000000001000", 
    36 => "1101101000111000010010000110111", 
    37 => "1010100011010010011100111100011", 
    38 => "1011100111001100011111010111011", 
    39 => "1011000100011011100011001111110", 
    40 => "1011000001110011010001000101111", 
    41 => "1010110000100001011110001101100", 
    42 => "1010111001111000110101001100011", 
    43 => "1011011101011111110011111111111", 
    44 => "1010111000011010010000111001000", 
    45 => "1101101010101000001100100100011", 
    46 => "1010000010100000111010101011010", 
    47 => "1010111010111010011110101101101" );


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

entity QuantAct_m_11 is
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

architecture arch of QuantAct_m_11 is
    component QuantAct_m_11_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_11_rom_U :  component QuantAct_m_11_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


