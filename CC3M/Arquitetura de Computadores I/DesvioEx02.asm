.data
	string: .asciiz "Digite suas 2 notas\n"
	deFinal: .asciiz "Voce esta de final\nDigite a nota da final\n"
	passou: .asciiz "Voce conseguiu passar\n"
	naoPassou: .asciiz "Voce NAO conseguiu passar\n"
	nota1: .word 0
	nota2: .word 0
.text
	# Carregar Endereço
	la $s1, nota1
	la $s2, nota2
	
	# Carregar Valor
	lw $t1, 0($s1)
	lw $t2, 0($s2)
	
	# Imprimir String
 	li $v0, 4
 	la $a0, string
 	syscall
 	
	# Ler nota 1 e atribuir
 	li $v0, 5
 	syscall
 	add $t1, $0, $v0
 	
	# Ler nota 2 e atribuir
 	li $v0, 5
 	syscall
 	add $t2, $0, $v0
 	
 	add $t3, $t1, $t2
 	# Dividir
 	srl $t4, $t3, 1
 	
 	#IF 
 	bge $t4, 7, FIM 
 		# Imprimir de final
 		li $v0, 4
 		la $a0, deFinal
 		syscall
 		
 		# Ler nota da final
 		li $v0, 5
 		syscall
 		add $t5, $0, $v0
 		
 		# Somar 2 notas
 		add $t3, $t5, $t4
 		
 		# Media da Final
 		srl $t4, $t3, 1
 		
 		# IF
 		bge $t4, 5, FIM2
 			# Imprimir String
 			li $v0, 4
 			la $a0, naoPassou
 			syscall
 			j FIMPROG
 		FIM2:
 			# Imprimir String
 			li $v0, 4
 			la $a0, passou
 			syscall
 			j FIMPROG
 	FIM:
 		# Imprimir String
 		li $v0, 4
 		la $a0, passou
 		syscall
 FIMPROG: