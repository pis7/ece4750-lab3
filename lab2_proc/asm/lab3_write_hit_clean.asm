csrr x1, mngr2proc < 0x2000
csrr x3, mngr2proc < 7
sw x3, 0(x1) 
lw x4, 0(x1) 
csrw proc2mngr, x4 > 7

.data
.offset 0x2000
.word 0x000000007