csrr x1, mngr2proc < 0x3000
csrr x7, mngr2proc < 200
csrr x3, mngr2proc < 0x2000
csrr x4, mngr2proc < 0x3000

big_loop:
lw x7, 0(x1)
sw x7, 0(x1)
addi x1, x1, -32
bne x1, x3, big_loop

big_loop1:
lw x7, 0(x1)
sw x7, 0(x1)
addi x1, x1, 32
bne x1, x4, big_loop


csrw proc2mngr, x1 > 0x3000