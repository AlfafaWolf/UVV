//Gabriel Alejandro L. M. - CC1M
#include <stdio.h>

int main(){

    float v[10], S=0;
    int i;

    //Pegar todos os valores para ARRAY
    for (i=0;i<10;i++){
       printf("Digite um valor: ");
       scanf("%f", &v[i]);
    }

    //Imprimir todos os valores do ARRAY
    printf("===== TABELA DE VALORES =====\n");
    for(i=0;i<10;i++){
        printf("A posicao %d tem o valor %f\n", i, v[i]);
    }

    //Somar todos os valores do ARRAY e imprimir
    for(i=0;i<10;i++){
        S = S + v[i];
    }
    printf("O soma de todos os valores eh %f", S);

    return 0;
}
