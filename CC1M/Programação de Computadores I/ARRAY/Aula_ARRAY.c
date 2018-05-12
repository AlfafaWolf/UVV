//Gabriel Alejandro L. M. - CC1M
/*VETORES / ARRAY*/
#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 12

int main(){

    //Variáveis
    float nota[ALUNOS], somaNotas = 0, media, maiorNota = 0;
    int i, NAM = 0; //NAM = Notas Abaixo da Média(7)

    for (i = 0; i < ALUNOS; i++){

        //Solicitar nota de cada aluno
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);

        //Verificar maior nota
        if(nota[i] > maiorNota){
            maiorNota = nota[i];
        }

        //Soma de todas as notas
        somaNotas += nota[i];

        //Somar quantos alunos tiraram notas abaixo de 7
        if (nota[i] < 7){
            NAM++;
        }

    }

    //Calcular média da turma
    media = somaNotas / i;

    //Imprimir todos os resultados
    printf("\n===== O RESULTADO FOI =====\n");
    printf("A media da turma foi %.2f\n", media);
    printf("Foram %i alunos que tiraram notas abaixo de 7\n", NAM);
    printf("E maior nota da turma foi %.2f\n", maiorNota);

    return 0;
}
