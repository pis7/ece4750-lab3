csrr x1, mngr2proc < 0x2000
csrr x6, mngr2proc < 0
csrr x7, mngr2proc < 200
csrr x3, mngr2proc < 0

big_loop:
lw x7, 0(x1)
sw x7, 0(x1)
addi x6, x6, 1
bne x6, x7, big_loop

addi x6, x6, -200

big_loop1:
lw x3, 0(x1)
sw x3, 0(x1)
addi x6, x6, 1
bne x6, x7, big_loop1


csrw proc2mngr, x6 > 200