csrr x1, mngr2proc < 0x2000

loop: 
lw x3, 0(x1)
addi x1, x1, 0x0040

.data
.word 0x000000007