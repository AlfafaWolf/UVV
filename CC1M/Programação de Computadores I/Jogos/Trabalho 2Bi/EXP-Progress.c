//Gabriel Alejandro L. M. - CC1M
#include <stdio.h>

int main(){

    int vetJogador[7];
    vetJogador[4] = 1;  //Nível
    vetJogador[5] = 0;  //EXP Atual
    vetJogador[6] = 25; //EXP p/ próximo Nível

    if (vetJogador[5] >= vetJogador[6]){ //Se Jogador tiver EXP suficiente para passar de Nível
        while (vetJogador[5] >= vetJogador[6]){
            vetJogador[5] -= vetJogador[7]; //EXP Atual = EXP Atual - EXP p/ próximo Nível
            vetJogador[4] += 1; //Soma mais 1 Nível
            vetJogador[6] = vetJogador[6] + 20 + (0.05 * vetJogador[6]); //Modificar a quantidade necessária de EXP p/ alcançar o próximo Nível
            printf("!======================================!\n");
            printf("+ Nivel Up!\n");
            printf("+ Voce Atingiu o nivel %d!\n", vetJogador[4]);
            printf("+ Nivel %d | (%d/%d XP)\n", vetJogador[4], vetJogador[5], vetJogador[6]);
            printf("!======================================!\n");
        }
    }
    return 0;
}

