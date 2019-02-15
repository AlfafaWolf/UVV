#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void incr_vetor(int *v, int n);
int main()
{
    int *vet = NULL;
    vet = (int *) malloc(TAM * sizeof(int));

    if(vet == NULL)
    {
        printf("Erro de alocacao");
        exit(1);
    }

    int i;
    for(i = 0; i < TAM; i++)
    {
        *(vet + i) = 10*i;
        //vet[i] = 10*i;
        printf("%d | ", vet[i]);
    }
    printf("\n");

    incr_vetor(vet, TAM);

    for(i = 0; i < TAM; i++)
    {
        printf("%d | ", vet[i]);
    }
    printf("\n");

    printf("Endereco do vetor = %p\n", vet);
    free(vet);

    return 0;
}

void incr_vetor(int *v, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        //*(v + i) = *(v + i) + 1;
        v[i]++;
    }
}
