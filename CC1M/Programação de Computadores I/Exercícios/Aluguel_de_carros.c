//Gabriel Alejandro L. M. - CC1M
#include <stdio.h>

int main (){

    float km, dias, preco;

    printf("=====Aluguel de carros=====\n");

    printf("Digite a quantidade de dias que o carro foi alugado: ");
    scanf("%f", &dias);

    if (dias > 0 ){
        printf("Digite quantos quilometros rodados: ");
        scanf("%f", &km);

        if (km > 0){
            preco = 60*dias + 0.15*km;

            printf("O valor a ser pago pelo aluguel eh R$%.2f", preco);
        }
        else {
            printf("Valor invalido, Tente novamente");
        }

    }
    else{
        printf("Valor invalido, Tente novamente.");
    }

    return 0;
}
