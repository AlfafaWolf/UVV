#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
void Fisher_Yates(int vetor[TAM]);
int main()
{
    srand(time(NULL));

    int vetor[5] = {1, 2, 3, 4, 5};
    int i;

    Fisher_Yates(vetor);

    // Exibir Vetor
    for(i = 0; i < TAM; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

void Fisher_Yates(int vetor[TAM])
{
    int i, aux;
    for(i = 0; i < TAM; i++)
    {
        int randInt = rand()%(TAM - i) + i;
        printf("%d\n", randInt);
        aux = vetor[i];
        vetor[i] = vetor[randInt];
        vetor[randInt] = aux;
    }
    printf("\n\n");
}

// Observa��es //
// No algoritmo Fisher-Yates � possivel que o array n�o seja mistudado,
// pois existe a possibilidade de ele sortear o numero do pr�prio index, em cada um dos indexs.
