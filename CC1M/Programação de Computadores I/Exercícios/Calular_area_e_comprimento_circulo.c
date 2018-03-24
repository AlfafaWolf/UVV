//Gabriel Alejandro L. M. - CC1M
//Calcular Área e Comprimento de um círculo
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main(){

    float area,comprimento, raio;

    printf("Digite o raio do circulo em centimetros: ");
    scanf("%f", &raio);

    area = PI * (raio*raio);
    comprimento = 2 * PI * raio;

    printf("Area = %.2fcm quadrados\nComprimento = %.2fcm", area, comprimento);

    return 0;
}
