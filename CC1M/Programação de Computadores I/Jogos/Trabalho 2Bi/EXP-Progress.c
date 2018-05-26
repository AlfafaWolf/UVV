//Gabriel Alejandro L. M. - CC1M
#include <stdio.h>

int main(){

    int vetJogador[7];
    vetJogador[4] = 1;  //N�vel
    vetJogador[5] = 0;  //EXP Atual
    vetJogador[6] = 25; //EXP p/ pr�ximo N�vel

    if (vetJogador[5] >= vetJogador[6]){ //Se Jogador tiver EXP suficiente para passar de N�vel
        while (vetJogador[5] >= vetJogador[6]){
            vetJogador[5] -= vetJogador[7]; //EXP Atual = EXP Atual - EXP p/ pr�ximo N�vel
            vetJogador[4] += 1; //Soma mais 1 N�vel
            vetJogador[6] = vetJogador[6] + 20 + (0.05 * vetJogador[6]); //Modificar a quantidade necess�ria de EXP p/ alcan�ar o pr�ximo N�vel
            printf("!======================================!\n");
            printf("+ Nivel Up!\n");
            printf("+ Voce Atingiu o nivel %d!\n", vetJogador[4]);
            printf("+ Nivel %d | (%d/%d XP)\n", vetJogador[4], vetJogador[5], vetJogador[6]);
            printf("!======================================!\n");
        }
    }
    return 0;
}

