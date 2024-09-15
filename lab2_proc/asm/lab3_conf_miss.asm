csrr x1, mngr2proc < 0x2000
csrr x2, mngr2proc < 0x3000
csrr x3, mngr2proc < 0x4000

addi x4, x0, 7
sw x4 0(x1)
sw x4 0(x2)
lw x4 0(x1)

csrw proc2mngr, x4 > 7