#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef float TipoP;
typedef struct Tponto
{
    TipoP x, y, z;
}*Ponto;
Ponto CriaPonto(TipoP x, TipoP y, TipoP z);
float distEntrePtos(Ponto p1, Ponto p2);
Ponto centroGeom (Ponto *vetPtos, int nPtos);
int main()
{
    Ponto A = NULL;
    A = CriaPonto(0, 0, 0);

    Ponto B = NULL;
    B = CriaPonto(1, 1, 1);

    // Ponto A
    printf("Ponto A:\n");
    printf("   X   |   Y   |   Z   |\n");
    printf("%7.2f|%7.2f|%7.2f|\n", A->x, A->y, A->z);
    printf("Ponto A foi alocado no endereco %p\n\n", A);

    // Ponto B
    printf("Ponto B:\n");
    printf("   X   |   Y   |   Z   |\n");
    printf("%7.2f|%7.2f|%7.2f|\n", B->x, B->y, B->z);
    printf("Ponto B foi alocado no endereco %p\n\n", B);

    // Calcular Distancia entre A e B
    float distAB = distEntrePtos(A, B);
    printf("A distancia entre o ponto A e B eh %fu\n\n", distAB);

    // Criar Pontos do Triangulo
    Ponto C = NULL;
    C = CriaPonto(0, 0, 0);

    Ponto D = NULL;
    D = CriaPonto(1, 0, 0);

    Ponto E = NULL;
    E = CriaPonto(0, 1, 0);

    // Pontos do triangulo
    Ponto vetPontos[3];
    vetPontos[0] = C;
    vetPontos[1] = D;
    vetPontos[2] = E;

    // Centro do triangulo
    Ponto O = NULL;
    O = centroGeom(vetPontos, 3);

    // Ponto B
    printf("Centro Geometrico O do triangulo CDE:\n");
    printf("   X   |   Y   |   Z   |\n");
    printf("%7.2f|%7.2f|%7.2f|\n", O->x, O->y, O->z);
    printf("Ponto B foi alocado no endereco %p\n\n", O);

    // Desalocar da memória
    free(A);
    free(B);
    free(C);
    free(D);
    free(E);
    free(O);

    return 0;
}
Ponto CriaPonto(TipoP x, TipoP y, TipoP z)
{
    Ponto p = NULL;
    p = (Ponto) malloc(sizeof(struct Tponto));
    if(p == NULL)
    {
        printf("Erro, nao foi possivel alocar");
        exit(1);
    }
    p->x = x;
    p->y = y;
    p->z = z;

    return p;
}
float distEntrePtos(Ponto p1, Ponto p2)
{
    return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2) + pow(p2->z - p1->z, 2));
}
Ponto centroGeom(Ponto *vetPtos, int nPtos)
{
    Ponto p = NULL;
    p = (Ponto) malloc(sizeof(struct Tponto));
    if(p == NULL)
    {
        printf("Erro, nao foi possivel alocar");
        exit(1);
    }
    p->x = 0;
    p->y = 0;
    p->z = 0;

    int i;
    for(i = 0; i < nPtos; i++)
    {
        p->x += vetPtos[i]->x;
        p->y += vetPtos[i]->y;
        p->z += vetPtos[i]->z;
    }
    p->x /= nPtos;
    p->y /= nPtos;
    p->z /= nPtos;

    return p;
}
