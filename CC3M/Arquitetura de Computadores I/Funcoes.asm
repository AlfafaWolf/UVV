# Comparar dois numeros e retornar o maior
# maior(a,b) e retorna c
.text
main:
	li $t0, 5   #t0 -> a
	li $t1, 17  #t1 -> b
	
	# Parametros da funcao
	add $a0, $0, $t0
	add $a1, $0, $t1
	jal soma
	
	# Exibir o maior numero e finalizar
	add $a0, $0, $v0
	
	# Imprimir inteiro
	li $v0, 1  
	syscall
	
	# Exit
	li $v0, 10
	syscall
# Inicio da Funcao Soma	
soma:
	addi $sp, $sp, -4 # alocando o espcaco backup
	sw $t0, 0($sp)    # salvo o registro
	
	add $t0, $a0, $a1 # a + b
	add $v0, $0, $t0  # return
	
	lw $t0, 0($sp)    # restore
	addi $sp, $sp, 4  # libera a pilha
	jr $ra            # jump to last Function Call
# Fim da Funcao
# Inicio da Funcao Maior
maior:
	bge $a0 , $a1 , op1 # a0 > a1 ?
	add $v0, $0, $a1  #a1 maior
	j return_maior
	op1:
		add $v0, $0, $a0 #a0 maior
	return_maior: 
		jr $ra   # jump to last Function Call
# Fim da Funcao
