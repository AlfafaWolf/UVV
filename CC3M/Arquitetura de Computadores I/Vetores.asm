.data 
	v: .word 0,1,2,3,4,5,6,7,8,9,10
	#v2: .spcae 2000 	# 2000 bytes
.text
	# Load Address
	la $s0, v #s0 = endereço base do vetor
	
	# Load  Word
	lw $t1, 8($s0)  #v[2]
	lw $t2, 36($s0) #v[9]
	
	# Sub
	sub $t3, $t1, $t2 #v[5] = v[2] - v[9]
	
	# Save World
	sw $t3, 20($s0)
	
	# Print
	li $v0, 1
	add $a0, $0, $t3
	syscall