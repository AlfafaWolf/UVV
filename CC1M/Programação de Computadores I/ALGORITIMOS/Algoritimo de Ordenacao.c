//Gabriel Alejandro L. M. - CC1M
/*ALGORITIMO DE ORDENA��O*/
#include <stdio.h>
#define TAM 4

int main(){

    //Vari�veis
    int v[TAM], AUX, i, j;

    //Obter n�meros do usu�rio
    printf("===== ALGORITIMO DE ORDENACAO =====\n");
    for(i=0; i<TAM; i++){
        printf("Digite um numero : ");
        scanf("%d", &v[i]);
    }

    //Algoritimo de Ordena��o de N�meros (Ordem crescente)
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
