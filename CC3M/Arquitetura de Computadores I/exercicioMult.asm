.data
msg: .asciiz "Calculando . . .\n"

.text
#ler input do tipo integer
addi $v0, $0, 5
syscall

#calculo multiplicação por 3x
add $t0, $0, $v0
add $t1, $t0, $t0
add $t2, $t0, $t1

#imprimir string
li $v0, 4
la $a0, msg
syscall

#tocar audio
li $v0, 33
li $a0, 63
li $a1, 3000
li $a2, 50
li $a3, 100
syscall

#imprimir valor da multiplicação
li $v0, 1
add $a0, $zero, $t2
syscall
