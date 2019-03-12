.data
	v1: .word 6666
	v2: .word 22
	v3: .word 43
	v4: .word 1
.text
	la $s0, v1
	la $s1, v4
	
	lw $t0, 0($s0)
	lw $t1, 0($s1)
	
	sw $t0, 0($v1)
	sw $t1, 0($v0)
	
	la $s0, v2
	la $s1, v3
	
	lw $t0, 0($s0)
	lw $t1, 0($s1)
	
	sw $t0, 0($s1)
	sw $t1, 0($s0)
	