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

entity QuantAct_m_4_rom is 
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


architecture rtl of QuantAct_m_4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011111101010100011110010100101", 
    1 => "1010001100010101010100010100100", 
    2 => "1011011110011010000110001111001", 
    3 => "1010011110101001101010101100000", 
    4 => "1010001110110010001111101101001", 
    5 => "1011000010000010001010000011010", 
    6 => "1011111111110111010111110101100", 
    7 => "1010101010010101111100100000011", 
    8 => "1010001011000000001111000100110", 
    9 => "1011010010100110111100010100101", 
    10 => "1001011001111110110000110101010", 
    11 => "1011110100011011101101100011001", 
    12 => "1010011111110110010000100000110", 
    13 => "1011000101010011011101101001000", 
    14 => "1011010001100110000100111001001", 
    15 => "1010100111010110100000110001111", 
    16 => "1010001100010100110001111110111", 
    17 => "1001010011111011001011011011001", 
    18 => "1010110011101001110100001000110", 
    19 => "1010101111111010100000110001010", 
    20 => "1011111111111111001101111111011", 
    21 => "1011110100111111100000011011011", 
    22 => "1010100100101101111010001001101", 
    23 => "1001011101010000000110110010010", 
    24 => "1010010011011101111011110101000", 
    25 => "1010010001110001101100011000001", 
    26 => "1011011011110111110100011010101", 
    27 => "1001011110000110100011111011101", 
    28 => "1011110000011011101010110001100", 
    29 => "1011011110001000000100111011000", 
    30 => "1010101011101011110101000110101", 
    31 => "1100011110001100010101000101011", 
    32 => "1011001011101000100010001011101", 
    33 => "1010011001001010001111010100000", 
    34 => "1010100010011000111111111100011", 
    35 => "1011111010000110010101100111000", 
    36 => "1010101110000010101010110011001", 
    37 => "1011000001010010011101110000000", 
    38 => "1001000001011011000101101110000", 
    39 => "1010111000010001110100111011110", 
    40 => "1010101100100100110110011000010", 
    41 => "1011001000011101000001101100011", 
    42 => "1100100110011100011101100111111", 
    43 => "1011000101110110101110001011101", 
    44 => "1010100111001101101100100100010", 
    45 => "1011011011100110100001101110011", 
    46 => "1010110010110101011101001100010", 
    47 => "1011100010010111100000110010011" );


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

entity QuantAct_m_4 is
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

architecture arch of QuantAct_m_4 is
    component QuantAct_m_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_4_rom_U :  component QuantAct_m_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


