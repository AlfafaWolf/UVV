//Gabriel Alejandro L. M. - CC1M
/*ALGORITIMO PESQUISA EM VETORES*/
#include <stdio.h>
#define TAM 4

int main(){

    //Variáveis
    int v[TAM], pos = 0, x;

    //Valores para demonstrar a pesquisa do algoritimo
    v[0] = 201800;
    v[1] = 201801;
    v[2] = 201802;
    v[3] = 201803;

    //Pesquisar valor em um vetor
    printf("===== ALGORITIMO PESQUISA DE VETORES =====\n");
    printf("Digite a matricula que deseja buscar: ");
    scanf("%d", &x);

    //Realizar uma busca exaustiva, elemento por elemento
    //OBS.: Este código não é muito eficiênte quando o vetor possui muitos elementos

    //Enquanto o valor do vetor for diferente do valor do usuário *E* o index do vetor for menor que o tamanho do vetor, continuar executando
    while((v[pos] != x )&(pos < TAM)){
        pos++; //Somar 1 a variável "pos" e continuar a buscar no próximo index do vetor
    }

    //Imprimir resultado//
    if(pos < TAM){
        printf("Matricula encontrada!, esta na posicao %d", pos);
    }
    else {
        printf("Matricula nao encontrada");
    }

    return 0;
}
