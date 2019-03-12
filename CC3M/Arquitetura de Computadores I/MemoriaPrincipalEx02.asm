.data
	v1: .word 55
	v2: .word 66
	v3: .word 0
.text
	# Load Address
	la $s1, v1
	la $s2, v2
	la $s3, v3
	
	# Load Word
	lw $t1, 0($s1)
	lw $t2, 0($s2)
	
	# Soma
	add $t3, $t1, $t2
	
	# Save Word
	sw $t3, 0($s3)