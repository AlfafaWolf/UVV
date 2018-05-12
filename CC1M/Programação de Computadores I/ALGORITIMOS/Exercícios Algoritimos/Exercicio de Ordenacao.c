//Gabriel Alejandro L. M. - CC1M
/*EXERCÍCIO DE ALGORITIMO DE ORDENAÇÃO*/
#include <stdio.h>
#define TAM 4 //Quantidade de  Alunos

int main(){

    //Variáveis
    float nota[TAM], soma_das_notas = 0, media_da_turma, maiorNota, menorNota, AUX;
    int i , j, abaixo_da_media = 0;

    //Armazenar as notas dos alunos e somar todas as notas para poder fazer a média da turma
    for(i=0; i<TAM; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);
        soma_das_notas += nota[i];

    }
    //Ordenar notas
    for(i=0; i < TAM; i++){
        for(j=i+1 ; j < TAM; j++){
            if(nota[i] > nota[j]){
                AUX = nota[i];
                nota[i] = nota[j];
                nota[j] = AUX;
            }
        }
    }

    //Armazenar maior e menor nota da turma
    maiorNota = nota[TAM - 1];
    menorNota = nota[0];

    //Imprimir a maior e menor nota
    printf("\n===== RESULTADOS =====");
    printf("\nA maior nota da turma foi %.2f e a menor nota foi %.2f\n", maiorNota, menorNota);

    //Calcular média da turma
    media_da_turma = soma_das_notas / TAM;

    //Identificar quantos alunos ficaram abaixo da média da turma
    for(i=0; i<TAM; i++){
        if(nota[i] < media_da_turma){
            abaixo_da_media++;
        }
    }

    //Imprimir média e alunos abaixo da média
    printf("A media da turma foi %.2f\n", media_da_turma);
    printf("A quantidade de alunos abaixo da media foi %d\n", abaixo_da_media);

    return 0;
}
