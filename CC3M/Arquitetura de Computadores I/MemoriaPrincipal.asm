.data
	v1: .word 6666
.text
	la $s0, v1
	lw $t0, 0($s0)
	
	add $t0, $t0, $t0
	
	sw $t0, 0($s0)