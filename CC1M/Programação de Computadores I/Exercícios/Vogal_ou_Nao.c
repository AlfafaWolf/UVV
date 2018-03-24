//Gabriel Alejandro L. M. - CC1M
//Verificar se o que foi digitado foi uma vogal ou não(valendo somente para letras em minúsculo)
#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    switch (letra){
    //
    case 'a':
        printf("Eh uma vogal");
    break;
    //
    case 'e':
        printf("Eh uma vogal");
    break;
    //
    case 'i':
        printf("Eh uma vogal");
    break;
    //
    case 'o':
        printf("Eh uma vogal");
    break;
    //
    case 'u':
        printf("Eh uma vogal");
    break;
    //
    default:
        printf("Nao eh uma vogal");
    }
    return 0;
}
