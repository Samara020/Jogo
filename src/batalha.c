#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "batalha.h"
#include "timer.h"

void textoAnimado(const char *txt, int tempo) {
    while (*txt) {
        printf("%c", *txt++);
        fflush(stdout);
        timerInit(tempo / 1000);
        while (!timerTimeOver());
    }
}

void exibirStatus(const Jogador *j, const Inimigo *i) {
    printf(CYAN BOLD "\n======= STATUS =======\n" RESET);
    printf(GREEN "JOGADOR: %s\nVida: %d\n" RESET, j->nome, j->vida);
    printf(RED   "INIMIGO: %s\nVida: %d\n" RESET, i->nome, i->vida);
    printf(CYAN BOLD "=======================\n\n" RESET);
}

void mostrarGameOver() {
    printf(RED BOLD "\n");
    printf(" ██████╗  █████╗ ███╗   ███╗███████╗     ██████╗ ██╗   ██╗███████╗██████╗ \n");
    printf("██╔════╝ ██╔══██╗████╗ ████║██╔════╝    ██╔═══██╗██║   ██║██╔════╝██╔══██╗\n");
    printf("██║  ███╗███████║██╔████╔██║█████╗      ██║   ██║██║   ██║█████╗  ██████╔╝\n");
    printf("██║   ██║██╔══██║██║╚██╔╝██║██╔══╝      ██║   ██║██║   ██║██╔══╝  ██╔══██╗\n");
    printf("╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗    ╚██████╔╝╚██████╔╝███████╗██║  ██║\n");
    printf(" ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═════╝  ╚═════╝ ╚══════╝╚═╝  ╚═╝\n");
    printf(RESET);
    textoAnimado(RED "\nVocê caiu nas sombras... o Princeso Diego continuará perdido.\n" RESET, 20000);
}

int perguntas(int nivel) {
    char resposta[50];

    switch (nivel) {
        case 1:
            printf(RED "traduza a voz do corrompido para linguagem lógica para liberta-lo:\n" RESET);
            printf(YELLOW "Voz do corrompido: Se você me atacar, então eu irei revidar\n> " RESET);
            printf("Guilherme:");
            scanf(" %49s", resposta);
            return strstr(resposta, "->") != NULL;

        case 2:
            printf(YELLOW "Voz do corrompido: Você só passará por mim se e somente se me derrotar!\n> " RESET);
            printf("Guilherme:");
            scanf(" %49s", resposta);
            return strstr(resposta, "<->") != NULL;

        case 3: {
            printf(YELLOW "Voz do corrompido: Nessa batalha, você morre ou eu morro! \n> " RESET);
            printf("Guilherme:");
            scanf(" %49s", resposta);

            int t = strlen(resposta);

            if (t == 1 && (resposta[0] == 'v' || resposta[0] == 'V'))
                return 1;

            if (t == 3 &&
                isalpha(resposta[0]) &&
                (resposta[1] == 'v' || resposta[1] == 'V') &&
                isalpha(resposta[2]))
                return 1;

            return 0;
        }

        case 4:
            printf(YELLOW "Voz do corrompido: Nessa luta, você vai para o inferno e eu também irei \n> " RESET);
            printf("Guilherme:");
            scanf(" %49s", resposta);
            return strstr(resposta, "^") != NULL;

        case 5:
            printf(YELLOW "Voz do corrompido: Se você me matar, então nunca mais verá Diego!\n> " RESET);
            scanf(" %49s", resposta);
            return strstr(resposta, "->") != NULL;

        default:
            return 0;
    }
}

void iniciarBatalha(Jogador *jogador, Inimigo *inimigo) {
    textoAnimado(MAGENTA "\nA batalha começou...\n\n" RESET, 20000);
    exibirStatus(jogador, inimigo);

    for (int nivel = 1; nivel <= 5; nivel++) {
        printf(CYAN BOLD "\nDesafio de Lógica %d:\n" RESET, nivel);

        int vidaAntesJogador = jogador->vida;
        int vidaAntesInimigo = inimigo->vida;

        if (perguntas(nivel)) {
            printf(GREEN BOLD "\n✔ Resposta correta!\n" RESET);
            int dano = jogador->ataque + (5 * nivel);
            inimigo->vida -= dano;

            if (nivel == 1) {
                printf(GREEN "Você causou %d de dano!\n" RESET, dano);
                exibirStatus(jogador, inimigo);
            } else {
                int perdeu = vidaAntesInimigo - inimigo->vida;
                printf(GREEN "O inimigo perdeu %d de vida.\n" RESET, perdeu);
            }

            jogador->acertos++;

        } else {
            printf(RED BOLD "\n✖ Resposta incorreta!\n" RESET);
            int dano = inimigo->ataque + (3 * nivel);
            jogador->vida -= dano;

            if (nivel == 1) {
                printf(RED "Você recebeu %d de dano!\n" RESET, dano);
                exibirStatus(jogador, inimigo);
            } else {
                int perdeu = vidaAntesJogador - jogador->vida;
                printf(RED "Você perdeu %d de vida.\n" RESET, perdeu);
            }
        }

        if (jogador->vida <= 0) {
            mostrarGameOver();
            return;
        }

        if (inimigo->vida <= 0) {
            textoAnimado(GREEN "\nA luz prevalece! O inimigo foi derrotado.\n" RESET, 20000);
            return;
        }
    }

    textoAnimado(YELLOW "\nO destino foi decidido...\n" RESET, 20000);

    if (jogador->vida <= 0)
        mostrarGameOver();
}
