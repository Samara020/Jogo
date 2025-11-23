#ifndef BATALHA_H
#define BATALHA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "timer.h" 
#include "screen.h"

#define C_RESET  "\033[0m"
#define C_RED    "\033[31m"
#define C_GREEN  "\033[32m"
#define C_YELLOW "\033[33m"
#define C_CYAN   "\033[36m"
#define C_MAGENTA "\033[35m"
#define C_BOLD   "\033[1m"

typedef struct {
    char nome[50];
    int vida;
    int ataque;
    int defesa;
    int acertos;
    int *registroDanoRecebido;
    int capacidadeRegistro;
    int entradasAtuais;
} Jogador;

typedef struct {
    char nome[50];
    int vida;
    int ataque;
} Inimigo;

void inicializarJogador(Jogador *j, int capacidade);
void finalizarJogador(Jogador *j);
void mostrarGameOver();
void iniciarBatalha(Jogador *jogador, Inimigo *inimigo);
void exibirStatus(const Jogador *j, const Inimigo *i);
int perguntas(int nivel);
void textoAnimado(const char *txt, int tempo);

#endif
