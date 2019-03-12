.data
	A: .word 3
	B: .word 4
	M: .word
.text
	# Obter Endereços
	la $s1, A
	la $s2, B
	la $s3, M
	
	# Carregar Valores dos endereços
	lw $t1, 0($s1)
	lw $t2, 0($s2)
	lw $t3, 0($s3)
	
	# M = A
	add $t3, $0, $t1
	
	# INVERTER M < B para M >= B
	bge  $t2, $t3, FIM
		add $t3, $0, $t2
	
	FIM:
		sw $t3, 0($s3)