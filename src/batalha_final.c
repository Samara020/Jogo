#include <stdio.h>
#include <string.h>
#include "batalha_final.h"
#include "batalha.h"
#include "timer.h"
#include "screen.h"

void contextualizacaoFinal() {
    screenClear();
    textoAnimado("\nGuilherme chega ao encontro da criatura.\n\n", 15000);
    textoAnimado("Criatura: Pobre criança, portadora de uma pequena luz lógica, você nunca vencerá ao caos.\n", 15000);
    textoAnimado("Relembrar a antiga língua lógica não os salvará! A luz já acabou e Diego nunca mais voltará!\n\n", 15000);
    textoAnimado("[Guilherme]: Eu renasci daquele que jamais apagou! Você é apenas uma criatura corrompida que roubou sua luz!\n", 15000);
    textoAnimado("Diego, eu sei que você pode me ouvir... não desista!\n\n", 15000);
    textoAnimado("Criatura: Cale-se! Ele não pode te ouvir! ~p não pode sair ~p~q... AHHHHH cale-se!!!\n", 15000);
    textoAnimado("Eu acabarei com isso agora mesmo!\n\n", 15000);
    textoAnimado("[Guilherme]: Não se preocupe Diego, a luz da lógica voltará ao mundo.\n", 15000);
    textoAnimado("Eu só preciso derrotar esse monstro e tornar minha alma equivalente à sua novamente...\n", 15000);
    textoAnimado("Eu não posso falhar. Eu só preciso encontrar a equivalência mais uma vez...\n", 15000);
    textoAnimado("Essa será... MINHA ÚLTIMA EQUIVALÊNCIA!\n\n", 15000);
}

int perguntaFinalUnica(int n) {
    char resposta[256];
    screenClear();
    textoAnimado("DESAFIO FINAL - A ÚLTIMA EQUIVALÊNCIA\n\n", 15000);

    if (n == 1) textoAnimado("1) Mostre a equivalência entre ~(p v q) e ~p ^ ~q\n\n", 15000);
    if (n == 2) textoAnimado("2) Reescreva p -> q usando apenas v e ~\n\n", 15000);
    if (n == 3) textoAnimado("3) Mostre que p <-> q é equivalente a (p -> q) ^ (q -> p)\n\n", 15000);
    if (n == 4) textoAnimado("4) Use De Morgan para transformar ~(p ^ q)\n\n", 15000);
    if (n == 5) textoAnimado("5) Mostre uma equivalência válida para ~(p -> q)\n\n", 15000);

    printf("Guilherme: ");
    fflush(stdout);
    if (!fgets(resposta, sizeof(resposta), stdin)) return 0;
    size_t len = strlen(resposta);
    if (len > 0 && resposta[len-1] == '\n') resposta[len-1] = '\0';

    if (strstr(resposta, "~p^~q") || strstr(resposta, "~p ^ ~q") || strstr(resposta, "DeMorgan") ||
        strstr(resposta, "~pv~q") || strstr(resposta, "~(p^q)") || strstr(resposta, "~pvq") ||
        strstr(resposta, "equivalente") || strstr(resposta, "p->q") || strstr(resposta, "p -> q") ||
        strstr(resposta, "p<->q") || strstr(resposta, "<->") || strstr(resposta, "->")) {
        return 1;
    }
    return 0;
}

void iniciarBatalhaFinal(Jogador *jogador) {
    if (jogador->vida <= 0) return;

    jogador->vida = 100;

    contextualizacaoFinal();

    textoAnimado("Prepare-se para o desafio final!\n", 15000);
    timerInit(1500);
    while (!timerTimeOver());

    for (int i = 1; i <= 5; i++) {
        int correta = perguntaFinalUnica(i);
        if (correta) {
            textoAnimado("\nVocê acertou. A luz aumenta...\n", 15000);
        } else {
            jogador->vida -= 20;
            textoAnimado("\nVocê errou... sua luz enfraquece...\n", 15000);
        }
        if (jogador->vida <= 0) {
            textoAnimado("\nVocê caiu... o caos domina tudo...\n", 15000);
            return;
        }
    }

    textoAnimado("\nVocê libertou Diego! A lógica renasce!\n", 15000);
}