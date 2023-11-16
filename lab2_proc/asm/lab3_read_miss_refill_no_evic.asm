csrr x1, mngr2proc < 0x2000
csrr x2, mngr2proc < 0x2040
addi x3, x0, 7
sw x3 0(x1) 
lw x4, 0(x2) 
csrw proc2mngr, x4 > 7