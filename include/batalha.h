#ifndef BATALHA_H
#define BATALHA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h> // para sleep e usleep

// Cores ANSI
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"
#define BOLD    "\033[1m"

// Estruturas
typedef struct {
    char nome[50];
    int vida;
    int ataque;
    int defesa;
    int acertos;
} Jogador;

typedef struct {
    char nome[50];
    int vida;
    int ataque;
} Inimigo;

// Funções
void iniciarBatalha(Jogador *jogador, Inimigo *inimigo);
void exibirStatus(const Jogador *j, const Inimigo *i);
void textoAnimado(const char *texto, int delay);
void exibirDesenhoInimigo();
void exibirDesenhoJogador();

#endif
