csrr x1, mngr2proc < 0x2000
addi x2, x0, 7
sw x2, 0(x1) 
addi x2, x2, 1
sw x2, 0(x1) 
csrw proc2mngr, x2 > 8

.data
.word 0x000000007