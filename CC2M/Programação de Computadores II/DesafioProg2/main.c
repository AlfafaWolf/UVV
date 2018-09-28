////Gabriel Alejandro L. M. CC2M
//DESAFIO DE MODULARIZAÇÃO E MATRIZ
//GERAR UMA MATRIZ 3X3 SEM ELEMENTOS REPETIDOS, COM NÚMEROS ALEATÓRIOS, NO INTERVALO DE [1,9]
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 3
#define MAX 9
#define MIN 1

void ImprimirMatriz(int matriz[TAM][TAM]);
void PreencherMatriz(int matriz[TAM][TAM]);

int main()
{
    int matriz[TAM][TAM];

    srand(time(NULL));
    PreencherMatriz(matriz);
    printf("\nMatriz gerada sem numeros repetidos: \n\n");
    ImprimirMatriz(matriz);

    return 0;
}

void PreencherMatriz(int matriz[TAM][TAM])
{
    //VARIÁVEIS
    int vetorMatriz[TAM * TAM]; // Vetor com todos os números já preenchidos da Matriz
    int index = 0, pos = 0; // index = comprimento Vetor | pos = contador posicao Vetor
    int repetir = 0; // Bool
    int i, j; // Contadores Linha e Coluna

    printf("    >>>>> LOG <<<<<\n");
    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            do
            {
                matriz[i][j] = rand()%(MAX - MIN + 1) + MIN; //RAND
                printf("\n> RAND Matriz[%d][%d] = %d\n", i ,j, matriz[i][j]);
                if(index > 0)
                {
                    pos = 0;
                    while((vetorMatriz[pos] != matriz[i][j]) && (pos < index)) //ALGORITO DE PESQUISA
                    {
                        printf("Posicao Vetor[%d] %d != %d \n", pos, vetorMatriz[pos], matriz[i][j]);
                        pos++;
                    }
                    if(pos < index)
                    {
                        repetir = 1;
                        printf("Posicao Vetor[%d] %d == %d !  New Rand...\n", pos, vetorMatriz[pos], matriz[i][j]);
                    }
                    else
                    {
                        repetir = 0;
                        vetorMatriz[index] = matriz[i][j];
                        index++;
                        printf("Vetor[%d] = %d  Add Value\n", pos, vetorMatriz[pos]);
                    }
                }
                else
                {
                    vetorMatriz[index] = matriz[i][j];
                    index++;
                    printf("Vetor[%d] = %d  Add Value\n", pos, vetorMatriz[pos]);
                }
            }while(repetir == 1);
        }
    }
}

void ImprimirMatriz(int matriz[TAM][TAM])
{
    int i, j;

    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
}
