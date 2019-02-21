// Gabriel Alejandro L. M. - CC3M
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef float TipoP;
typedef struct Tponto
{
    TipoP x, y, z;
}*Ponto;
TipoP getX(Ponto pto);
TipoP getY(Ponto pto);
TipoP getZ(Ponto pto);
void setX(Ponto pto, TipoP x);
void setY(Ponto pto, TipoP y);
void setZ(Ponto pto, TipoP z);
Ponto CriaPonto(TipoP x, TipoP y, TipoP z);
float distEntrePtos(Ponto p1, Ponto p2);
Ponto centroGeom (Ponto *vetPtos, int nPtos);
int pontosIguais(Ponto p1, Ponto p2);
Ponto somaPontos(Ponto p1, Ponto p2);
Ponto difPontos(Ponto p1, Ponto p2);
float calculaPerimetroQuadrilatero(Ponto *vetPto, int n);
Ponto pontoMedio(Ponto p1, Ponto p2);
int main()
{
    // Criando Pontos A e B
    Ponto A = NULL;
    A = CriaPonto(0, 0, 0);
    Ponto B = NULL;
    B = CriaPonto(1, 1, 1);

    // Ponto A
    printf("Ponto A:\n");
    printf("   X   |   Y   |   Z   |\n");
    printf("%7.2f|%7.2f|%7.2f|\n", getX(A), getY(A), getZ(A));
    printf("Ponto A foi alocado no endereco %p\n\n", A);

    // Ponto B
    printf("Ponto B:\n");
    printf("   X   |   Y   |   Z   |\n");
    printf("%7.2f|%7.2f|%7.2f|\n", getX(B), getY(B), getZ(B));
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

    // Ponto O
    printf("Centro Geometrico O do triangulo CDE:\n");
    printf("   X   |   Y   |   Z   |\n");
    printf("%7.2f|%7.2f|%7.2f|\n", getX(O), getY(O), getZ(O));
    printf("Ponto O foi alocado no endereco %p\n\n", O);

    // Pontos Iguais
    int pIgual = pontosIguais(A, B);
    if(pIgual != 0)
        printf("Os pontos A e B sao iguais\n\n");
    else
        printf("Os pontos A e B sao diferentes\n\n");

    // Definindo Pontos
    Ponto p1, p2, p3, p4;
    p1 = CriaPonto(0,0,0);
    p2 = CriaPonto(0,1,0);
    p3 = CriaPonto(1,1,0);
    p4 = CriaPonto(1,0,0);

    // Perimetro Quadrilatero
    Ponto vetQuadrilatero[4];
    float perimetro;

    vetQuadrilatero[0] = p1;
    vetQuadrilatero[1] = p2;
    vetQuadrilatero[2] = p3;
    vetQuadrilatero[3] = p4;

    perimetro = calculaPerimetroQuadrilatero(vetQuadrilatero, 4);
    printf("Perimetro do Quadrilatero = %f\n\n", perimetro);

    // Ponto Medio
    Ponto pMedio = NULL;
    pMedio = pontoMedio(p1, p2);
    printf("Ponto Medio de p1 e p2:\n");
    printf("   X   |   Y   |   Z   |\n");
    printf("%7.2f|%7.2f|%7.2f|\n", getX(pMedio), getY(pMedio), getZ(pMedio));

    // Desalocar da memória
    free(A);
    free(B);
    free(C);
    free(D);
    free(E);
    free(O);
    free(p1);
    free(p2);
    free(p3);
    free(p4);
    free(pMedio);

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
    setX(p, 0);
    setY(p, 0);
    setZ(p, 0);

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
int pontosIguais(Ponto p1, Ponto p2)
{
    return (p1->x == p2->x && p1->y == p2->y && p1->z == p2->z);
}
Ponto somaPontos(Ponto p1, Ponto p2)
{
    Ponto p = NULL;
    p = (Ponto) malloc(sizeof(struct Tponto));
    if(p == NULL)
    {
        printf("Erro, nao foi possivel alocar");
        exit(1);
    }
    setX(p, getX(p1) + getX(p2));
    setY(p, getY(p1) + getY(p2));
    setZ(p, getZ(p1) + getZ(p2));

    return p;
}
Ponto difPontos(Ponto p1, Ponto p2)
{
    Ponto p = NULL;
    p = (Ponto) malloc(sizeof(struct Tponto));
    if(p == NULL)
    {
        printf("Erro, nao foi possivel alocar");
        exit(1);
    }
    setX(p, getX(p1) - getX(p2));
    setY(p, getY(p1) - getY(p2));
    setZ(p, getZ(p1) - getZ(p2));

    return p;
}
float calculaPerimetroQuadrilatero(Ponto *vetPto, int n)
{
    float dist = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        if(i + 1 < n)
        {
            dist += distEntrePtos(vetPto[i], vetPto[i + 1]);
        }
        else
        {
            dist += distEntrePtos(vetPto[i], vetPto[0]);
        }
    }
    return dist;
}
Ponto pontoMedio(Ponto p1, Ponto p2)
{
    Ponto pMedio = NULL;
    pMedio = (Ponto) malloc(sizeof(Ponto));
    if(pMedio == NULL)
    {
        printf("Erro, nao foi possivel alocar");
        exit(1);
    }
    pMedio->x = (p1->x + p2->x) / 2;
    pMedio->y = (p1->y + p2->y) / 2;
    pMedio->z = (p1->z + p2->z) / 2;

    return pMedio;
}
TipoP getX(Ponto pto)
{
    return pto->x;
}
TipoP getY(Ponto pto)
{
    return pto->y;
}
TipoP getZ(Ponto pto)
{
    return pto->z;
}
void setX(Ponto pto, TipoP x)
{
    pto->x = x;
}
void setY(Ponto pto, TipoP y)
{
    pto->y = y;
}
void setZ(Ponto pto, TipoP z)
{
    pto->z = z;
}
