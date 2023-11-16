csrr x1, mngr2proc < 0x2000
csrr x3, mngr2proc < 0x2040

addi x2, x0, 0
addi x4, x0, 200

loop: 
lw x5, 0(x1)
addi x5, x5, 1
addi x3, x3, 40
sw x5, 0(x3)
addi x2, x2, 1
bne x2, x4, loop

csrw proc2mngr, x4 > 200





