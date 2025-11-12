#include "batalha.h"
#include <ctype.h>

// ==================== EFEITOS ====================

void textoAnimado(const char *texto, int delay) {
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("%c", texto[i]);
        fflush(stdout);
        usleep(delay * 1000);
    }
    printf("\n");
}

void exibirDesenhoJogador() {
    printf(GREEN "\n  (🔥)\n  /|\\\n  / \\\n" RESET);
}

void exibirDesenhoInimigo() {
    printf(RED "\n  (💀)\n  /|\\\n  / \\\n" RESET);
}

// ==================== QUESTÕES ====================

typedef struct {
    char pergunta[200];
    char alternativaA[100];
    char alternativaB[100];
    char alternativaC[100];
    char correta;
} Questao;

Questao perguntas[] = {
    {"Qual das proposições é logicamente equivalente a ¬(P ∨ Q)?",
     "A) ¬P ∨ ¬Q", "B) ¬P ∧ ¬Q", "C) P ∧ Q", 'B'},

    {"Qual é a negação de (P → Q)?",
     "A) P ∧ ¬Q", "B) ¬P ∨ Q", "C) ¬P ∧ ¬Q", 'A'},

    {"A bicondicional (P ↔ Q) é verdadeira quando:",
     "A) P e Q têm valores opostos", "B) P e Q têm o mesmo valor lógico", "C) Q é sempre verdadeiro", 'B'},

    {"Qual das expressões é equivalente a ¬(P ∧ ¬Q)?",
     "A) ¬P ∧ Q", "B) ¬P ∨ Q", "C) P ∧ Q", 'B'}
};

// ==================== STATUS ====================

void exibirStatus(const Jogador *j, const Inimigo *i) {
    printf(CYAN "\n======= STATUS =======\n" RESET);
    printf(GREEN "%s" RESET " ❤️ Vida: %d | 🧠 Acertos: %d\n", j->nome, j->vida, j->acertos);
    printf(RED "%s" RESET " 💀 Vida: %d\n", i->nome, i->vida);
    printf(CYAN "======================\n" RESET);
}

// ==================== BATALHA ====================

void iniciarBatalha(Jogador *jogador, Inimigo *inimigo) {
    srand(time(NULL));
    int totalQuestoes = sizeof(perguntas) / sizeof(perguntas[0]);
    int rodada = 0;

    textoAnimado("🔥 A batalha da razão começa! 🔥", 40);
    exibirDesenhoJogador();
    exibirDesenhoInimigo();

    while (jogador->vida > 0 && inimigo->vida > 0 && rodada < totalQuestoes) {
        Questao q = perguntas[rodada];
        printf("\n🧩 Desafio Lógico %d:\n%s\n", rodada + 1, q.pergunta);
        printf("%s\n%s\n%s\n", q.alternativaA, q.alternativaB, q.alternativaC);
        printf("Sua resposta (A, B ou C): ");

        char resposta;
        scanf(" %c", &resposta);
        resposta = toupper(resposta);

        if (resposta == q.correta) {
            textoAnimado(GREEN "✔ Resposta correta!" RESET, 25);
            int dano = jogador->ataque + (rand() % 6);
            inimigo->vida -= dano;
            jogador->acertos++;
            printf(YELLOW "💥 %s acerta o inimigo e causa %d de dano!\n" RESET, jogador->nome, dano);
        } else {
            textoAnimado(RED "❌ Errado! O inimigo contra-ataca!" RESET, 25);
            int dano = inimigo->ataque + (rand() % 4);
            jogador->vida -= dano;
            printf(RED "💀 %s causa %d de dano em você!\n" RESET, inimigo->nome, dano);
        }

        exibirStatus(jogador, inimigo);
        rodada++;
        sleep(1);
    }

    if (jogador->vida <= 0) {
        textoAnimado(RED "\n💀 Você foi consumido pela escuridão...\n" RESET, 40);
    } else if (inimigo->vida <= 0) {
        textoAnimado(GREEN "\n🏆 Vitória! Sua lógica purificou o inimigo!\n" RESET, 40);
    } else {
        textoAnimado(CYAN "\n⚔️ A batalha terminou, mas a guerra da razão continua...\n" RESET, 40);
    }
}

