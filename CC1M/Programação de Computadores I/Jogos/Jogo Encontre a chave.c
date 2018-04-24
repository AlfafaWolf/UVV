//Gabriel Alejandro L. M. - CC1M
#include <stdio.h>

int main(){

    int gaveta, chave=0, g1=0, g2=0, g3=0;

    printf("===JOGO DE PROCURE A CHAVE===\n");
    printf("Gavetas: [1,3]\n");
    do{
        printf("Digite o numero da gaveta: ");
        scanf("%d", &gaveta);

        switch(gaveta){

            case 1:
                if(g1==0){
                    printf("Abrindo a gaveta...\n");
                    printf("A gaveta esta vazia\n");
                    g1 = 1;
                }
                else{
                    printf("A gaveta ja foi aberta\n");
                }
            break;
            //
            case 2:
                if(g2==0){
                    printf("Abrindo a gaveta...\n");
                    printf("A gaveta esta vazia\n");
                    g2 = 1;
                }
                else{
                    printf("A gaveta ja foi aberta\n");
                }
            break;
            //
            case 3:
                if(g3==0){
                    printf("Abrindo a gaveta...\n");
                    printf("Chave encontrada!\n");
                    chave = 1;
                    g3 = 1;
                }
                else{
                    printf("A gaveta ja foi aberta\n");
                }
            break;
            //
            default:
                printf("Gaveta invalida...\n");

        }
    }while(chave==0);


    return 0;
}
