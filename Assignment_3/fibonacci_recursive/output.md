output

```
[mvu@mercury1 fibonacci_recursive]$ make
./masm < rfib.asm > rfib.obj
./mic1 prom.dat rfib.obj 0 2048

Read in 81 micro instructions
Read in 115 machine instructions
Starting PC is : 0000000000000000  base 10:       0
Starting SP is : 0000100000000000  base 10:    2048


ProgramCounter : 0000000000100100  base 10:      36
Accumulator    : 0000000000000000  base 10:       0
InstructionReg : 1111111100000000  base 10:   65280
TempInstr      : 1000000000000000  base 10:   32768
StackPointer   : 0000100000000000  base 10:    2048
ARegister      : 0000000000000001  base 10:       1
BRegister      : 0000000000000000  base 10:       0
CRegister      : 0000000000000000  base 10:       0
DRegister      : 0000000000000000  base 10:       0
ERegister      : 0000000000000000  base 10:       0
FRegister      : 0000000000000000  base 10:       0

Total cycles   : 35109454

Type decimal address to view memory,  q  to quit or  c  to continue: 99
     the location   99 has value 1111111111111111 , or 65535  or signed     -1
Type  <Enter>  to continue debugging
Type        q  to quit
Type        f for forward range
Type        b for backward range: f
Type the number of forward locations to dump: 10
     the location  100 has value 0000000000000011 , or     3  or signed      3
     the location  101 has value 0000000000001001 , or     9  or signed      9
     the location  102 has value 0000000000010010 , or    18  or signed     18
     the location  103 has value 0000000000010111 , or    23  or signed     23
     the location  104 has value 0000000000011001 , or    25  or signed     25
     the location  105 has value 0000000000000010 , or     2  or signed      2
     the location  106 has value 0000000000100010 , or    34  or signed     34
     the location  107 has value 0000101000011000 , or  2584  or signed   2584
     the location  108 has value 0110111111110001 , or 28657  or signed  28657
     the location  109 has value 0010010100010001 , or  9489  or signed   9489
Type decimal address to view memory,  q  to quit or  c  to continue: q
MIC-1 emulator finishing, goodbye

[mvu@mercury1 fibonacci_recursive]$ make clean
rm *.obj 
```