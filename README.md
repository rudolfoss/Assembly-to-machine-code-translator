# Assembly-to-machine-code-translator

Name	Opcode  <br>
add	0 + 0x20 <br>
addi	0x08 <br>
sub	0 + 0x22 <br>
and	0 + 0x24 <br> 
andi	0 + 0x25 <br>
lw	0 x23 <br>
sw	0x2b <br>
sll	0+ 0x00 <br>
srl	0 + 0x02 <br>
 

- R-format instructions are inputted as follow: <br>
add s0 t1 gp   =>  s0 <- t1 + gp <br>
sub s4 s1 zero  => s4 <- s1 + zero <br> 
sll s0 s2 3   =>  s0 <- s2 << 3 <br>

- I-format instructions are the similar <br>
  addi s1 s2 0x16 => s1 <- s2 + 0x16; Immediate values and address offset come to the last <br>
  lw t0 s1 32  =>  Load t0 with a word at s1 + 32  <br>


zero	0 <br>
at	1 <br>
v0,v1	2-3 <br>
A0-a3	4-7 <br>
t0-t7	8-15 <br>
S0-s7	16-23 <br>
T8-t9	24-25 <br>
K1-k2	26-27 <br>
gp	28 <br>
sp	29 <br>
fp	30 <br>
ra	31 <br>

