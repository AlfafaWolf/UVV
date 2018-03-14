//Gabriel Alejandro L. M. - CC1M
/*
Escreva um programa para aprovar o empr�stimo banc�rio para a compra de uma casa.
Pergunte o valor da casa, o sal�rio do comprador e em quantos anos ele vai pagar.
A presta��o mensal n�o pode exceder 30% do sal�rio ou ent�o o empr�stimo ser� negado.
*/

#include <stdio.h>

int main (){

    float casa, salario, anos, prestacao, salario30;

    printf("Valor da Casa: R$");
    scanf("%f", &casa);
    printf("Salario do comprador: R$");
    scanf("%f", &salario);
    printf("Quantos anos de financiamento? ");
    scanf("%f", &anos);

    prestacao = casa / (anos * 12);
    salario30 = (salario * 30) / 100;

    printf("Para pagar uma casa de R$%.2f em %.f anos a prestacao sera de R$%.2f\n", casa, anos, prestacao);

    if (prestacao > salario){
        printf("Emprestimo NEGADO");
    }
    else{
        printf("Emprestimo CONCEDIDO");
    }

    return 0;
}
