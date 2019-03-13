# Crie um procedimento que receba o endereço base de um vetor, o
# número de elementos do vetor e retorne o somatório deste vetor;
.data
	vetor: .word 0, 1, 2, 3
	size:  .word 4
.text
main:
	# Registradores com valores
	li $t0, 1
	li $t1, 2
	li $t2, 3
	li $t3, 4
	
	# Parametros da Funcao
	la $a0, vetor
	lw $a1, size
	jal soma_vetor
	
	# Exibir o numero e finalizar
	add $a0, $0, $v0
	
	# Imprimir inteiro
	li $v0, 1  
	syscall
	
	# Exit
	li $v0, 10
	syscall
soma_vetor:
	# Salvar Registradores 
	addi $sp, $sp, -4  # alocando o espaco backup
	sw $t0, 0($sp)     # salvo o registro
	addi $sp, $sp, -4  # alocando o espaco backup
	sw $t1, 0($sp)     # salvo o registro
	addi $sp, $sp, -4  # alocando o espaco backup
	sw $t2, 0($sp)     # salvo o registro
	addi $sp, $sp, -4  # alocando o espaco backup
	sw $t3, 0($sp)     # salvo o registro
	
	li $t0, 0 # i = 0
	li $t1, 0 # somaTotal = 0
	while: 
	bge $t0, $a1, exit         # while (i < size) --> if (i >= size) go to exit
		sll  $t3, $t0, 2   # $t3 = 4*i
		addu $t3, $t3, $a0 # 4*i = 4*i + memory location of the array --> 1000 + 4 = 1004
		lw   $t2, 0($t3)   # load value from memory location of the array
		add  $t1, $t1, $t2 # somaTotal += vetor[i]
		addi $t0, $t0, 1   # i++
		j while		   # go back to while
	exit:
	add $v0, $0, $t1 # return somaTotal
	
	# Recarregar Registradores
	lw $t3, 0($sp)    # restore
	addi $sp, $sp, 4  # libera a pilha
	lw $t2, 0($sp)    # restore
	addi $sp, $sp, 4  # libera a pilha
	lw $t1, 0($sp)    # restore
	addi $sp, $sp, 4  # libera a pilha
	lw $t0, 0($sp)    # restore
	addi $sp, $sp, 4  # libera a pilha
	
	jr $ra           # jump to last Function Call
