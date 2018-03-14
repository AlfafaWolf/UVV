//Gabriel Alejandro L. M. - CC1M
//Ler a velocidade do carro, se passar de 80km/h terá que pagar uma multa de R$7,00 por km excedido
#include <stdio.h>

int main(){

    int km, multa;

    printf("Qual a velocidade atual do carro? ");
    scanf("%d", &km);

    if (km > 80){
        multa = (km - 80) * 7;
        printf("MULTADO! Voce excedeu o limite de velocidade que eh 80km/h\n");
        printf("Voce deve pagar uma multa de R$%d", multa);
    }
    else{
        printf("Tenha um bom dia, dirija com seguranca!");
    }

    return 0;
}
