csrr x1, mngr2proc < 0x2000
csrr x3, mngr2proc < 0x2800
csrr x8, mngr2proc < 0x2000
csrr x6, mngr2proc < 0
csrr x7, mngr2proc < 3

big_loop:

addi x2, x0, 0
addi x4, x0, 200

loop: 
lw x5, 0(x1)
addi x5, x5, 1
lw x5, 0(x1)
addi x2, x2, 1
sw x6, 0(x8)
addi x8, x8, 0x040
bne x2, x4, loop

addi x2, x2, -200

addi x6, x6, 1
bne x6, x7, big_loop

csrw proc2mngr, x6 > 3