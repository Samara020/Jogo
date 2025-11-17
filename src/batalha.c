#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "timer.h"
#include "screen.h"
#include "batalha.h"

void textoAnimado(const char *txt, int tempo) {
    while (*txt) {
        printf("%c", *txt++);
        fflush(stdout);
        timerInit(tempo / 1000);
        while (!timerTimeOver());
    }
}

void exibirStatus(const Jogador *j, const Inimigo *i) {
    printf(C_CYAN C_BOLD "\n======= STATUS =======\n" C_RESET);
    printf(C_GREEN "JOGADOR: %s\nVida: %d\n" C_RESET, j->nome, j->vida);
    printf(C_RED   "INIMIGO: %s\nVida: %d\n" C_RESET, i->nome, i->vida);
    printf(C_CYAN C_BOLD "=======================\n\n" C_RESET);
}

void mostrarGameOver() {
    printf(C_RED C_BOLD "\n");
    printf(" ██████╗  █████╗ ███╗   ███╗███████╗     ██████╗ ██╗   ██╗███████╗██████╗ \n");
    printf("██╔════╝ ██╔══██╗████╗ ████║██╔════╝    ██╔═══██╗██║   ██║██╔════╝██╔══██╗\n");
    printf("██║  ███╗███████║██╔████╔██║█████╗      ██║   ██║██║   ██║█████╗  ██████╔╝\n");
    printf("██║   ██║██╔══██║██║╚██╔╝██║██╔══╝      ██║   ██║██║   ██║██╔══╝  ██╔══██╗\n");
    printf("╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗    ╚██████╔╝╚██████╔╝███████╗██║  ██║\n");
    printf(" ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═════╝  ╚═════╝ ╚══════╝╚═╝  ╚═╝\n");
    printf(C_RESET);
    textoAnimado(C_RED "\nVocê caiu nas sombras... o Princeso Diego continuará perdido.\n" C_RESET, 20000);
}

int perguntas(int nivel) {
    char resposta[50];

    switch (nivel) {
        case 1:
            printf(C_RED "traduza a voz do corrompido para linguagem lógica para liberta-lo:\n" C_RESET);
            printf(C_YELLOW "Voz do corrompido: Se você me atacar, então eu irei revidar\n> " C_RESET);
            printf("Guilherme:");
            scanf(" %49s", resposta);
            return strstr(resposta, "->") != NULL;

        case 2:
            printf(C_YELLOW "Voz do corrompido: Você só passará por mim se e somente se me derrotar!\n> " C_RESET);
            printf("Guilherme:");
            scanf(" %49s", resposta);
            return strstr(resposta, "<->") != NULL;

        case 3: {
            printf(C_YELLOW "Voz do corrompido: Nessa batalha, você morre ou eu morro! \n> " C_RESET);
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
            printf(C_YELLOW "Voz do corrompido: Nessa luta, você vai para o inferno e eu também irei \n> " C_RESET);
            printf("Guilherme:");
            scanf(" %49s", resposta);
            return strstr(resposta, "^") != NULL;

        case 5:
            printf(C_YELLOW "Voz do corrompido: Se você me matar, então nunca mais verá Diego!\n> " C_RESET);
            scanf(" %49s", resposta);
            return strstr(resposta, "->") != NULL;

        default:
            return 0;
    }
}

void iniciarBatalha(Jogador *jogador, Inimigo *inimigo) {
    textoAnimado(C_MAGENTA "\nA batalha começou...\n\n" C_RESET, 20000);
    exibirStatus(jogador, inimigo);

    for (int nivel = 1; nivel <= 5; nivel++) {
        printf(C_CYAN C_BOLD "\nDesafio de Lógica %d:\n" C_RESET, nivel);

        int vidaAntesJogador = jogador->vida;
        int vidaAntesInimigo = inimigo->vida;

        if (perguntas(nivel)) {
            screenClear();
            printf(C_GREEN C_BOLD "\n✔ Resposta correta!\n" C_RESET);
            int dano = jogador->ataque + (5 * nivel);
            inimigo->vida -= dano;

            if (nivel == 1) {
                printf(C_GREEN "Você causou %d de dano!\n" C_RESET, dano);
                exibirStatus(jogador, inimigo);
            } else {
                int perdeu = vidaAntesInimigo - inimigo->vida;
                printf(C_GREEN "O inimigo perdeu %d de vida.\n" C_RESET, perdeu);
                exibirStatus(jogador, inimigo);
            }

            jogador->acertos++;

        } else {
            screenClear();
            printf(C_RED C_BOLD "\n✖ Resposta incorreta!\n" C_RESET);
            int dano = inimigo->ataque + (3 * nivel);
            jogador->vida -= dano;

            if (nivel == 1) {
                printf(C_RED "Você recebeu %d de dano!\n" C_RESET, dano);
                exibirStatus(jogador, inimigo);
            } else {
                int perdeu = vidaAntesJogador - jogador->vida;
                printf(C_RED "Você perdeu %d de vida.\n" C_RESET, perdeu);
                exibirStatus(jogador, inimigo);
            }
        }

        if (jogador->vida <= 0) {
            mostrarGameOver();
            return;
        }

        if (inimigo->vida <= 0) {
            textoAnimado(C_GREEN "\nA luz prevalece! O inimigo foi derrotado.\n" C_RESET, 20000);
            return;
        }
    }

}
