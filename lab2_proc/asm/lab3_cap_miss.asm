csrr x1, mngr2proc < 0x2000
csrr x2, mngr2proc < 0x3000
csrr x3, mngr2proc < 10
csrr x4, mngr2proc < 20

loop: 
lw x3, 0(x1)
lw x3, 0(x1)
lw x4, 0(x2)
lw x3, 0(x1)

.data
.word 0x000000007