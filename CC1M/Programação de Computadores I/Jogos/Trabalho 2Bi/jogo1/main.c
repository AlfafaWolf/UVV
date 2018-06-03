#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define TAM 3
#define TAMJOGADOR 7



// O jogo iniciará printando a história, e depois disso ele perguntará ao jogador se ele está preparado, após isso (if else) ele iniciara ou ira finalizar o jogo.
// Apos isso, o jogo ira iniciar e ira perguntar qual classe o jogador quer, se 0, entao cavaleiro, ira escolher entre 0/1/2, etc.

int main()
{
    int vJogador[TAMJOGADOR], n = 100, c = 3, xp = 0, fimdejogo, i;
    int danominCavaleiro[TAM], danomaxCavaleiro[TAM], danominArqueiro[TAM],danomaxArqueiro[TAM], danominMago[TAM], danomaxMago[TAM];
    int vCPU[TAM];
    int atkspeedcav[TAM], atkspeedarq[TAM], atkspeedmag[TAM];
    char op, armaCavaleiro[TAM][20], armaArqueiro[TAM][20], armaMago[TAM][20], armaCavaleiroCPU[TAM][20], armaArqueiroCPU[TAM][20], armaMagoCPU[TAM][20];
    int boolArmaSelecionada = 0;
    int partida = 0;
    int atkDoJogador, atkDoCPU;
    int totalDeDanoCausado = 0, totalDeDanoRecebido = 0;

    srand(time(NULL));

    //classe[0] = 0; "Cavaleiro";
    //classe[1] = 1; "Arqueiro";
    //classe[2] = 2; "Mago";


        //String das Armas
        strcpy(armaCavaleiro[0], "Espada longa");
        strcpy(armaCavaleiro[1], "Espada Curta");
        strcpy(armaCavaleiro[2], "Lanca");

        strcpy(armaArqueiro[0], "Arco longo");
        strcpy(armaArqueiro[1], "Besta");
        strcpy(armaArqueiro[2], "Adaga");

        strcpy(armaMago[0], "Cajado");
        strcpy(armaMago[1], "Livro Magico");
        strcpy(armaMago[2], "Espada Magica");


        vJogador[1] = rand()%50 + 51;

        //Ataque Speed
        atkspeedcav[0] = 2;
        atkspeedcav[1] = 1;
        atkspeedcav[2] = 2;

        atkspeedarq[0] = 2;
        atkspeedarq[1] = 3;
        atkspeedarq[2] = 1;

        atkspeedmag[0] = 1;
        atkspeedmag[1] = 2;
        atkspeedmag[2] = 1;

        //Dano Minimo
        danominCavaleiro[0] = 6;
        danominCavaleiro[1] = 4;
        danominCavaleiro[2] = 10;

        danominArqueiro[0] = 6;
        danominArqueiro[1] = 6;
        danominArqueiro[2] = 4;

        danominMago[0] = 6;
        danominMago[1] = 0;
        danominMago[2] = 5;

        //Dano Máximo
        danomaxCavaleiro[0] = 20;
        danomaxCavaleiro[1] = 8;
        danomaxCavaleiro[2] = 18;

        danomaxArqueiro[0] = 18;
        danomaxArqueiro[1] = 24;
        danomaxArqueiro[2] = 7;

        danomaxMago[0] = 8;
        danomaxMago[1] = 25;
        danomaxMago[2] = 9;

    //Jogo
    printf("|==============================|Seja Bem-Vindo|===============================|\n");

    // Aqui vem a historia >>>>> printf("");
    // Grande X, um grande soldado do exercito do Grande Rei, sabe-se que o mais competente dos competentes iria ganhar a suprema recompensa..
    // a mao de sua filha em casamento..
    // entao assim, nosso nobre X, arrisca tudo na esperanca de conseguir o coracao da sua amada princesa, enfrentando os grandes perigos dos castelos
    // e dungeons que ira descobrir, e tambem os guerreiros que falharam e foram amaldicoados a permanecerem nos calaboucos
    printf("Grande Jogador , es um grande soldado do exercito do Grande Rei !\n");
    printf("Sabe-se que apenas o mais honrado ira ganhar a suprema recompensa...\n");
    printf("A MAO DA FILHA DO REI EM CASAMENTO!!!\n");
    printf("Mas para isso deves arriscar tua vida no Calabouco da Desgraca !\n");
    printf("Um dos lugares mais sordidos da grande HighEarth !\n");
    printf("Tua aventura nao sera nada facil nobre soldado !\n");
    printf("|=============================|Estas preparado?|==============================|\n");
    printf("|Deseja comecar a sua aventura? [S/N]|\n");
    scanf("%c", &op);

    if(op == 's'){

        printf("Existem 3 tipos de classe que podes escolher ! Deves escolher entre uma das 3... escolha sabiamente:\n");
        printf("Digite 0 para Cavaleiro, 1 para Arqueiro e 2 para Mago\n");
        scanf("%d", &vJogador[0]);
        if(vJogador[0] < 3 && vJogador[0] >= 0){

            printf("> Voce escolheu a classe : %d, com %d de vida.\n", vJogador[0], vJogador[1]);
            getchar();

            while(vJogador[1] > 0){

                // Aqui inicia sua aventura pelo game, e ele entra na dungeon
                // por o codigo de avistamento de inimigos e alerta para luta
                //---------
                // ira ser printado para o jogador qual inimigo ele ira enfrentar
                // apos alertar, ele devera escolher a sua arma para enfrentar o inimigo
                // gerar para o vCPU[0] uma classe
                vCPU[0] = rand()%c;
                switch(vCPU[0]){
                case 0:
                    printf("> O seu inimigo eh um cavaleiro!\n");
                    break;

                case 1:
                    printf("> O seu inimigo eh um arqueiro!\n");
                    break;

                case 2:
                    printf("> O seu inimigo eh um mago!\n");
                    break;
                }
                //------------
                // gerar para o vCPU[1] uma hp
                vCPU[1] = rand()%50 + 51;
                printf("> Parece que ele tem %d de vida..\n", vCPU[1]);
                //------------
                // gerar para o vCPU[2] uma arma
                vCPU[2] = rand()%c;
                if(vCPU[0] == 0){ //cavaleiro
                    switch(vCPU[2]){
                    case 0:
                    printf("> Ele tem uma espada.. longa!\n");
                    break;

                    case 1:
                    printf("> Ele tem uma espada curta, porem afiada!\n");
                    break;

                    case 2:
                    printf("> Ele tem uma lanca, muito grande!\n");
                    break;
                    }
                }
                else if(vCPU[0] == 1){
                    switch(vCPU[2]){
                    case 0:
                    printf("> Cuidado! Ele tem um arco longo!\n");
                    break;

                    case 1:
                    printf("> Ele tem uma besta, com flechas afiadas!\n");
                    break;

                    case 2:
                    printf("> Ele tem uma besta, com flechas afiadas!\n");
                    break;
                    }
                }
                else if(vCPU[0] == 2){
                    switch(vCPU[2]){
                    case 0:
                    printf("> Ele parece ter um cajado...\n");
                    break;

                    case 1:
                    printf("> Ele tem um livro magico, com muitas palavras!\n");
                    break;

                    case 2:
                    printf("> Ele tem um livro magico, com muitas palavras!\n");
                    break;
                    }
                }
                //---------
                // escolher a arma
                do{
                    printf("\n!======================================!\n");
                    boolArmaSelecionada = 0; //Resetar Bool de Arma Selecionada
                    //Verificar Classe Do Jogador e Imprimir as Possiveis armas
                    if(vJogador[0] == 0){
                        for(i = 0; i < TAM; i++){
                            printf("+ [%d] %s | ATK %d - %d | Velocidade de Ataque : %d|\n", i, armaCavaleiro[i], danominCavaleiro[i], danomaxCavaleiro[i], atkspeedcav[i]);
                        }
                    }
                    else if(vJogador[0] == 1){
                        for(i=0; i < TAM; i++){
                            printf("+ [%d] %s | ATK %d - %d | Velocidade de Ataque : %d|\n", i, armaArqueiro[i], danominArqueiro[i], danomaxArqueiro[i], atkspeedarq[i]);
                        }
                    }
                    else if(vJogador[0] == 2){
                        for(i=0; i < TAM; i++){
                            printf("+ [%d] %s | ATK %d - %d | Velocidade de Ataque : %d|\n", i, armaMago[i], danominMago[i], danomaxMago[i], atkspeedmag[i]);
                        }
                    }
                    printf("!======================================!\n");

                    //Obter Arma do Jogador
                    printf("> Que Arma desejas usar ?: ");
                    scanf("%d", &vJogador[2]);

                    //Verificar se Valor digitado pelo Jogador é valido
                    for (i=0; i < TAM; i++){
                        if(vJogador[2] == i){
                            boolArmaSelecionada = 1;
                        }
                    }
                    //Se for falso, dizer que Opção é Inválida
                    if(boolArmaSelecionada == 0){
                       printf("! Opcao Invalida, Não tente fugir!... !\n");
                    }
                }while(boolArmaSelecionada == 0);

                //Definir Ataque Speed, de acordo com a arma que jogador escolheu
                //Atk Speed = Vetor de Atk Speed da <classe>[index da arma do jogador]
                if(vJogador[0] == 0){
                   vJogador[3] = atkspeedcav[vJogador[2]];
                }
                else if(vJogador[0] == 1){
                   vJogador[3] = atkspeedarq[vJogador[2]];
                }
                else if(vJogador[0] == 2){
                   vJogador[3] = atkspeedmag[vJogador[2]];
                }

                //---------
                // inicio da luta
                // luta por turno ate um dos 2 morrer
                //---------
                // jogador perdeu = acaba o jogo
                // jogador ganhou = +xp, vida recover, proximo nivel
                //---------
                // no final de cada luta, perguntar ao jogador se quer continuar
                // se sim = continuar dungeon
                // se nao = finalizar game
                //---------
                // a cada nivel passado pelo jogador, mob mais dificil

                printf("\n+ INICIAR LUTA +\n");
                vCPU[3] = 2;
                //Luta contra CPU
                while(vCPU[1] > 0){
                    partida++;
                    printf("\n>> TURNO %d\n", partida);
                    //Jogador
                    if(partida%vJogador[3] == 0){
                        if(vJogador[0] == 0){
                            for(i=0; i < TAM; i++){
                                if(vJogador[2] == i){
                                    atkDoJogador = rand()%danomaxCavaleiro[i];
                                    //Verificar se o valor do Ataque dado rand() é menor que Ataque Mínimo
                                    if(atkDoJogador < danominCavaleiro[i]){
                                        atkDoJogador = danominCavaleiro[i];
                                    }
                                }
                            }
                        }
                        else if(vJogador[0] == 1){
                            for(i=0; i < TAM; i++){
                                if(vJogador[2] == i){
                                    atkDoJogador = rand()%danomaxArqueiro[i];
                                    //Verificar se o valor do Ataque dado rand() é menor que Ataque Mínimo
                                    if(atkDoJogador < danominArqueiro[i]){
                                        atkDoJogador = danominArqueiro[i];
                                    }
                                }
                            }
                        }
                        else if(vJogador[0] == 2){
                            for(i=0; i < TAM; i++){
                                if(vJogador[2] == i){
                                    atkDoJogador = rand()%danomaxMago[i];
                                    //Verificar se o valor do Ataque dado rand() é menor que Ataque Mínimo
                                    if(atkDoJogador < danominMago[i]){
                                        atkDoJogador = danominMago[i];
                                    }
                                }
                            }
                        }

                        vCPU[1] = vCPU[1] - atkDoJogador;
                        totalDeDanoCausado += atkDoJogador;
                        //HUD
                        printf("!======================================!\n");
                        printf("+ Jogador ataca!\n");
                        printf("+ Causaste %d de dano!\n", atkDoJogador);
                        printf("- Inimigo %d HP\n", vCPU[1]);
                        printf("!======================================!\n");


                    }
                    else{
                         printf("> Nao podes atacar ainda!\n");
                         Sleep(3000);
                    }

                    //Inimigo
                    if(partida%vCPU[3] == 0){
                        if(vCPU[0] == 0){
                            for(i=0; i < TAM; i++){
                                if(vCPU[2] == i){
                                    atkDoCPU = rand()%danomaxCavaleiro[i];
                                    //Verificar se o valor do Ataque dado rand() é menor que Ataque Mínimo
                                    if(atkDoCPU < danominCavaleiro[i]){
                                        atkDoCPU = danominCavaleiro[i];
                                    }
                                }
                            }
                        }
                        else if(vCPU[0] == 1){
                            for(i=0; i < TAM; i++){
                                if(vCPU[2] == i){
                                    atkDoCPU = rand()%danomaxArqueiro[i];
                                    //Verificar se o valor do Ataque dado rand() é menor que Ataque Mínimo
                                    if(atkDoCPU < danominArqueiro[i]){
                                        atkDoCPU = danominArqueiro[i];
                                    }
                                }
                            }
                        }
                        else if(vCPU[0] == 2){
                            for(i=0; i < TAM; i++){
                                if(vCPU[2] == i){
                                    atkDoCPU = rand()%danomaxMago[i];
                                    //Verificar se o valor do Ataque dado rand() é menor que Ataque Mínimo
                                    if(atkDoCPU < danominMago[i]){
                                        atkDoCPU = danominMago[i];
                                    }
                                }
                            }
                        }

                       if(vCPU[1] > 0){

                            vJogador[1] = vJogador[1] - atkDoCPU;
                            totalDeDanoRecebido += atkDoCPU;
                            //HUD
                            printf("!======================================!\n");
                            printf("+ Inimigo ataca!\n");
                            printf("+ Recebestes %d de dano!\n", atkDoCPU);
                            printf("- Jogador %d HP\n", vJogador[1]);
                            printf("!======================================!\n");

                            Sleep(3000);
                       }
                    }
                    else{
                        printf("> O inimigo ainda nao pode atacar\n");
                    }
                }//Fim While de Batalha vCPU[1] > 0
                partida = 0;
                printf("!======================================!\n");
                printf("> BOM TRABALHO , DERROTASTE O INIMIGO!\n");
                printf("> RECEBESTES UMA RECOMPENSA PELA VITORIA\n");
                printf("> UMA POCAO DE 30 DE HP ! \n");
                printf("> CONTINUE ASSIM E ALCANCARA A GLORIA!\n");
                printf("!======================================!\n");
                vJogador[1] += 30;
            }//fim do While vJogador > 0

        }//Fim de If de verificação de classe / if(vJogador[0] < 3 && vJogador[0] >= 0)
        else{
            printf("Fostes derrotado? LEVANTA-TE E PROVE A TUA HONRA!!!\n");
        }

    }
     return 0;
}
