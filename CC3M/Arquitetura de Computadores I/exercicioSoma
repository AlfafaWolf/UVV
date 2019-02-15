#ler o primeiro valor
addi $v0, $zero, 5
syscall
add $t0, $0, $v0 #t0 = v0 + 0

#ler o segundo valor
addi $v0, $zero, 5
syscall
add $t1, $0, $v0 #t1 = v0 + 0

#somar 2 valores
add $t2, $t0, $t1

#imprimir valor da soma
li $v0, 1
add $a0, $0, $t2 #ao = t2 + 0
syscall
