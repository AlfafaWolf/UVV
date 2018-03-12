//Gabriel Alejandro L. M. - CC1M
#include <stdio.h>

int main()
{
    //Calcular IMC
    float imc, peso, altura;

    printf("Digite seu peso em kilos: ");
    scanf("%f", &peso);
    printf("Agora digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("Seu IMC eh %.1f\n", imc);

     //Dizer a situação que seu IMC representa
     if (imc < 15){
            printf("Voce esta Extremamente abaixo do peso");
     }
     else if (imc > 15 && imc < 16){
            printf("Voce esta Gravemente abaixo do peso");
     }
     else if (imc > 16 && imc < 18.5){
            printf("Voce esta Abaixo do peso ideal");
     }
     else if (imc > 18.5 && imc < 25){
            printf("Voce esta no peso ideal");
     }
     else if (imc > 25 && imc < 30){
            printf("Voce esta com Sobrepeso");
     }
     else if (imc > 30 && imc < 35){
            printf("Voce esta com Obesidade Grau I");
     }
     else if (imc > 35 && imc < 40){
            printf("Voce esta com Obesidade Grau II(grave)");
     }
     else if (imc > 40){
            printf("Voce esta com Obesidade Grau III(morbita)");
     }

    return 0;
}
