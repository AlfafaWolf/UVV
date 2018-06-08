#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define TAM 3
#define TAMJOGADOR 7
#define SLEEP 2000
#define TAMSUFIX 12


// O jogo iniciará printando a história, e depois disso ele perguntará ao jogador se ele está preparado, após isso (if else) ele iniciara ou ira finalizar o jogo.
// Apos isso, o jogo ira iniciar e ira perguntar qual classe o jogador quer, se 0, entao cavaleiro, ira escolher entre 0/1/2, etc.

int main(){
    int vJogador[TAMJOGADOR], c = 3, xp = 0, fimdejogo = 0, i, numero, op;
    int danominCavaleiro[TAM], danomaxCavaleiro[TAM], danominArqueiro[TAM],danomaxArqueiro[TAM], danominMago[TAM], danomaxMago[TAM];
    int vCPU[TAM];
    int atkspeedcav[TAM], atkspeedarq[TAM], atkspeedmag[TAM];
    char armaCavaleiro[TAM][20], armaArqueiro[TAM][20], armaMago[TAM][20];
    int boolArmaSelecionada = 0;
    int partida = 0;
    int atkDoJogador, atkDoCPU;
    int totalDeDanoCausado = 0, totalDeDanoRecebido = 0;
    char sufixosCPU[TAMSUFIX][20];
    int iSufix;
    int goldr = 0, goldi = 0, g = 50; //goldr = gold randomico, goldi = gold inventari, g = valor maximo para gold rand()
    char nomeJogador[20];

    srand(time(NULL));

    //classe[0] = 0; "Cavaleiro";
    //classe[1] = 1; "Arqueiro";
    //classe[2] = 2; "Mago";

        vJogador[4] = 1;
        vJogador[5] = 0;
        vJogador[6] = 25;

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

        //Sufixos
        strcpy(sufixosCPU[0], "Corrompido");
        strcpy(sufixosCPU[1], "Amaldicoado");
        strcpy(sufixosCPU[2], "Fantasma");
        strcpy(sufixosCPU[3], "do Alem");
        strcpy(sufixosCPU[4], "Sem Cabeca");
        strcpy(sufixosCPU[5], "Congelado");
        strcpy(sufixosCPU[6], "Tempestuoso");
        strcpy(sufixosCPU[7], "Destruidor");
        strcpy(sufixosCPU[8], "Foragido");
        strcpy(sufixosCPU[9], "Sem Alma");
        strcpy(sufixosCPU[10], "de Fogo");
        strcpy(sufixosCPU[11], "Desertor");




    for(i = 0; numero != 1; i++){
        printf("|==============================|Seja Bem-Vindo|===============================|\n");
        printf("+ [1] - Inicie o jogo\n");
        printf("+ [2] - Historia\n");
        printf("+ [3] - Conheca os criadores do jogo!\n");
        printf("\n> Escolha a opcao desejada: \n");
        scanf("%d", &numero);
        switch(numero){
            case 1:
            while(op != 1){
                // Aqui vem a historia >>>>> printf("");
                // Grande X, um grande soldado do exercito do Grande Rei, sabe-se que o mais competente dos competentes iria ganhar a suprema recompensa..
                // a mao de sua filha em casamento..
                // entao assim, nosso nobre X, arrisca tudo na esperanca de conseguir o coracao da sua amada princesa, enfrentando os grandes perigos dos castelos
                // e dungeons que ira descobrir, e tambem os guerreiros que falharam e foram amaldicoados a permanecerem nos calaboucos
                printf("|=============================|Esta preparado?|==============================|\n");
                printf("|Deseja comecar a sua aventura? 1 Para 'sim' e 0 para 'nao'|\n");
                scanf("%d", &op);
                printf("Como devemos chama-lo, bravo guerreiro?\n");
                setbuf(stdin, NULL);
                scanf("%[^\n]s", nomeJogador);
                setbuf(stdin, NULL);
                printf("Muito bem, %s. Agora vamos comecar!\n", nomeJogador);


                if(op == 0){
                    printf("SUA AVENTURA TERMINA AQUI, VOLTE QUANDO ESTIVER PREPARADO!\n");
                    return 0;
                }
            }


                if(op == 1){
                    system("cls");
                    printf("Existem 3 tipos de classe que podes escolher!\n");
                    printf("Deves escolher entre uma das 3... escolha sabiamente, %s:\n", nomeJogador);
                    printf("Digite 0 para Cavaleiro, 1 para Arqueiro e 2 para Mago.\n");
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
                            //Gerar Sufixo o nome do Inimigo
                            iSufix = rand()%11;

                            switch(vCPU[0]){
                            case 0:
                                printf("> O seu inimigo eh um Cavaleiro %s!\n", sufixosCPU[iSufix]);
                                break;

                            case 1:
                                printf("> O seu inimigo eh um Arqueiro %s!\n", sufixosCPU[iSufix]);
                                break;

                            case 2:
                                printf("> O seu inimigo eh um Mago %s!\n", sufixosCPU[iSufix]);
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
                                printf("> Digas a arma que desejas usar : \n");
                                scanf("%d", &vJogador[2]);

                                //Verificar se Valor digitado pelo Jogador é valido
                                for (i=0; i < TAM; i++){
                                    if(vJogador[2] == i){
                                        boolArmaSelecionada = 1;
                                    }
                                }
                                if(vJogador[2] == 69){
                                    vJogador[1] = 9999;
                                    printf("> Recebestes a bencao divina do vosso Grande rei, Sai'Jax. Tua vida agora eh %d.\n", vJogador[1]);
                                    printf("\n");
                                    printf("\n");
                                }
                                //Se for falso, dizer que Opção é Inválida
                                else if(boolArmaSelecionada == 0){
                                   printf("! Opcao Invalida, Nao tente fugir!... !\n");
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
                            while(vCPU[1] > 0 && vJogador[1] > 0){
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

                                    if(vJogador[1] > 0){
                                        vCPU[1] = vCPU[1] - atkDoJogador; // Subtrair Valor da Vida do CPU pelo ataque do jogador
                                        totalDeDanoCausado += atkDoJogador; //Contador Total de Dano Causado
                                        //HUD
                                        printf("\n");
                                        printf("!======================================!!======================================!\n");
                                        printf("\n");
                                        printf("\n");
                                        printf("                               %d                                  %d\n", vJogador[1], vCPU[1]);
                                        printf("                             %s                                      \n", nomeJogador);
                                        printf("                                o                                   o              \n");
                                        printf("                   .      .    -|-                                 -|-    .        \n");
                                        printf("              .:     :.    :.  //                                  //   .:    :.   \n");
                                        printf("\n");
                                        printf("\n");
                                        printf("+ Jogador ataca!\n");
                                        printf("+ Causaste %d de dano!\n", atkDoJogador);
                                        printf("- Inimigo %d HP\n", vCPU[1]);
                                        printf("!======================================!!======================================!\n");
                                        printf("\n");
                                        Sleep(SLEEP);
                                    }
                                }
                                else{
                                     printf("> Nao podes atacar ainda!\n");
                                     Sleep(SLEEP);
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
                                                if(atkDoCPU = danominMago[i]){
                                                    atkDoCPU = danominMago[i];
                                                }
                                            }
                                        }
                                    }

                                    if(vCPU[1] > 0 && vJogador[1] > 0){

                                        vJogador[1] = vJogador[1] - atkDoCPU; // Subtrair valor da Vida pelo ataque do inimigo
                                        totalDeDanoRecebido += atkDoCPU; // Contador Total de Dano Recebido
                                        //HUD
                                        printf("\n");
                                        printf("!======================================!!======================================!\n");
                                        printf("\n");
                                        printf("+ Inimigo ataca!\n");
                                        printf("+ Recebestes %d de dano!\n", atkDoCPU);
                                        printf("- Jogador %d HP\n", vJogador[1]);
                                        printf("\n");
                                        printf("!======================================!!======================================!\n");
                                        printf("\n");
                                        Sleep(SLEEP);
                                   }
                                }

                                else{
                                    printf("> O inimigo ainda nao pode atacar\n");
                                    Sleep(SLEEP);
                                }
                            }
                            if(vJogador[1] > 0){

                                system("cls");
                                partida = 0;
                                vJogador[1] += 30;
                                printf("\n");
                                printf("!======================================!\n");
                                printf("> BOM TRABALHO %s , DERROTASTE O INIMIGO!\n", nomeJogador);
                                printf("> RECEBESTES UMA RECOMPENSA PELA VITORIA\n");
                                printf("> UMA POCAO DE 30 DE HP ! \n");
                                printf("> CONTINUE ASSIM E ALCANCARA A GLORIA!\n");
                                printf("> VOCE PEGOU %d DE DINHEIRO AO SAQUEAR O CORPO DE SEU INIMIGO\n", goldr = rand()%g);
                                printf("> TENDO NO TOTAL %d DE DINHEIRO.\n", goldi = goldi + goldr);
                                printf("> TOTAL DE DANO CAUSADO : %d \n", totalDeDanoCausado);
                                printf("> TOTAL DE DANO RECEBIDO : %d \n", totalDeDanoRecebido);
                                printf("+ Experiencia atual : (%d/%d XP)\n", vJogador[5] = vJogador[5] + rand()%15 + 1, vJogador[6]);
                                printf("!======================================!\n");
                                printf("\n");

                                if (vJogador[5] >= vJogador[6] && vJogador[1] > 0){ //Se Jogador tiver EXP suficiente para passar de Nível
                                    while (vJogador[5] >= vJogador[6]){
                                        vJogador[5] -= vJogador[7]; //EXP Atual = EXP Atual - EXP p/ próximo Nível
                                        vJogador[4] += 1; //Soma mais 1 Nível
                                        vJogador[6] = vJogador[6] + 20 + (0.05 * vJogador[6]); //Modificar a quantidade necessária de EXP p/ alcançar o próximo Nível
                                        printf("!======================================!\n");
                                        printf("+ Alcancastes um novo feito, chegou ao nivel : %d!\n", vJogador[4]);
                                        printf("!======================================!\n");
                                    }
                                }
                            }

                            if(vJogador[1] <= 0){
                                printf("> VOCE FALHOU EM SUA MISSAO, PROCURE ESTUDAR MAIS SUAS ESTRATEGIAS\n");
                                printf("> PARA QUE DA PROXIMA VEZ VOCE SEJA VENCEDOR.\n");
                                return 1;
                            }

                            if(totalDeDanoRecebido < 29){
                                printf("\n");
                                printf("!======================================!\n");
                                printf("> UAU, PARECE QUE VOCE QUASE NAO SE MACHUCOU!\n");
                                printf("> PARECE QUE ESTA POCAO IRA TE DAR MAIS VIDA DO QUE VOCE COMECOU!!\n");
                                printf("> SUA VIDA ATUAL : %d \n", vJogador[1]);
                                printf("!======================================!\n");
                                printf("\n");
                            }

                        }

                    }

                }
            break;
            case 2:
                system("cls");
                printf("!=================!ESTA EH A HISTORIA POR TRAS DA GRANDE GUERRA DE CAIRO!=================!\n");
                printf(">Apos muitas guerras, o grande Reino de Cairo\n");
                printf(">conseguiu finalmente encontrar a paz, porem legioes de inimigos caidos e derrotados\n");
                printf(">surgiram e se aliaram, criando uma especie de fortaleza, para assim com a uniao de seus exercitos\n");
                printf(">derrotados, consigam acabar com a hegemonia do rei Sai'jax, para isso, decidiram tocar no unico ponto fraco do Rei\n");
                printf(">sua filha Fiora, a qual tinha um grande amor, pois foi a unica coisa deixada por sua falecida esposa\n");
                printf(">entao o exercito dos decaidos decidiram usar sua propria fortaleza como prisao para a princesa\n");
                printf(">percebendo entao que sua filha foi raptada por esses soldados, o rei decide convocar um\n");
                printf(">dos seus melhores guerreiros para uma missao solitaria no fim de encontra-la e traze-la de volta a\n");
                printf(">salvo, o rei entao como recompensa por tal ato de bravura, decide que oferecera a\n");
                printf(">princesa como esposa e dara enormes riquezas a ele, entao Vossa Excelencia\n");
                printf(">parte em uma ardua jornada em busca da princesa e da derrota dos inimigos\n");
                printf(">do Grande Reino de Cairo.\n");
            break;
            case 3:
                system("cls");
                printf("!=================!HALL DOS CRIADORES!=================!\n");
                printf(">Cesar Santos\n");
                printf(">Gabriel Alejandro\n");
                printf(">Felippe Bastos\n");
                printf(">Nicolas Tapias\n");
            break;

            default:
                printf("Opcao invalida...\n");
            break;


        }
    }
    return 0;
}
