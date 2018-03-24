//Gabriel Alejandro L. M. - CC1M
//Simples calculador de hipôtenusa
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float A,B,C;

    printf("Digite o valor dos dois catetos: ");
    scanf("%f%f", &B, &C);

    A = sqrt(B*B + C*C);

    printf("A hipotenusa dos catetos %.2f e %.2f eh %.2f", B,C,A);

    return 0;
}
