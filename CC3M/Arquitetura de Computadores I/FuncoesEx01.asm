# Crie um procedimento que receba dois inteiros e retorne a média entre eles;
.text
main:
	# Registradores com valores
	li $t0, 4
	li $t1, 6
	
	# Parametros da Funcao
	add $a0, $0, $t0
	add $a1, $0, $t1
	jal media
	
	# Exibir o numero e finalizar
	add $a0, $0, $v0
	
	# Print Integer
	li $v0, 1
	syscall
	
	# Exit
	li $v0, 10
	syscall
media:
	addi $sp, $sp, -4  # alocando o espcaco backup
	sw $t0, 0($sp)     # salvo o registro
	
	add $t0, $a0, $a1  # a + b
	srl $t0, $t0, 1    # (a + b) / 2
	add $v0, $0, $t0   # return
	
	lw $t0, 0($sp)    # restore
	addi $sp, $sp, 4  # libera a pilha
	
	jr $ra            # jump to last Function Call
