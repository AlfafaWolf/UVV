//Gabriel Alejandro L. M. - CC1M
/*ALGORITIMO DE ORDENAÇÃO*/
#include <stdio.h>
#define TAM 4

int main(){

    //Variáveis
    int v[TAM], AUX, i, j;

    //Obter números do usuário
    printf("===== ALGORITIMO DE ORDENACAO =====\n");
    for(i=0; i<TAM; i++){
        printf("Digite um numero : ");
        scanf("%d", &v[i]);
    }

    //Algoritimo de Ordenação de Números (Ordem crescente)
    for(i=0; i<TAM; i++){
        for(j=i+1; j<TAM; j++){
            if(v[i] > v[j]){
                AUX = v[i];
                v[i] = v[j];
                v[j] = AUX;
            }
        }
    }

    //Imprimir resultado
    printf("\nOrdenando os numeros em ordem crescente fica: \n|");
    for(i=0;i<4;i++){
        printf(" %d |", v[i]);
    }
    return 0;
}
