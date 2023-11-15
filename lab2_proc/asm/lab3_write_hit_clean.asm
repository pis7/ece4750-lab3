csrr x1, mngr2proc < 0x2000
csrr x3, mngr2proc < 7
lw x3, 0(x1) 
sw x4, 0(x1) 
csrw proc2mngr, x4 > 7

.data
.word 0x000000007