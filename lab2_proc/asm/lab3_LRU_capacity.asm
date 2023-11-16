csrr x1, mngr2proc < 0x2000
csrr x3, mngr2proc < 7
csrr x4, mngr2proc < 0x3000

loop: 
lw x3, 0(x1)
addi x1, x1, 16
addi x3, x3, 1
bne x1, x4, loop

csrw proc2mngr, x1 > 0x3000





