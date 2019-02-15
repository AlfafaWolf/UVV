#include <stdio.h>
#include <stdlib.h>
#define TAM 3

float *prod_vetorial(float *u, float *v);
int main()
{
    int i;
    float *V1 = NULL, *V2 = NULL, *prodVet = NULL;
    V1 = (float*) malloc(TAM * sizeof(float));
    V2 = (float*) malloc(TAM * sizeof(float));

    if(V1 == NULL || V2 == NULL)
    {
        printf("Erro. Nao foi possivel alocar\n");
        exit(1);
    }
    V1[0] = 1;
    V1[1] = 1;
    V1[2] = 1;
    V2[0] = 1;
    V2[1] = 1;
    V2[2] = 1;

    prodVet = prod_vetorial(V1, V2);

    printf("Produto Vetorial:\n   X   |   Y   |   Z   |\n");
    for(i = 0; i < TAM; i++)
    {
        printf("%7.2f|", prodVet[i]);
    }
    printf("\nEndereco Produto Vetorial: %p\n", prodVet);

    free(V1);
    free(V2);
    free(prodVet);

    return 0;
}

float *prod_vetorial(float *u, float *v)
{
    float *produto = NULL;
    produto = (float*) malloc(TAM * sizeof(float));
    if(produto == NULL)
    {
        printf("Erro. Nao foi possivel alocar\n");
        exit(1);
    }

    produto[0] = u[1]*v[2] - v[1]*u[2];
    produto[1] = u[2]*v[0] - v[2]*u[0];
    produto[2] = u[0]*v[1] - v[0]*u[1];
    printf("Endereco produto FUNCAO: %p\n", produto);

    return produto;
}
