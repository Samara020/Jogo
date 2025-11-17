#include <stdio.h>
#include "screen.h"
#include "timer.h"
#include "historia.h"
#include "batalha.h"

extern void textoAnimado(const char *txt, int tempo);

void iniciar_historia(Jogador *j, Inimigo *i) {
    textoAnimado("\n[NARRADOR]", 40000);
    textoAnimado("Ha milenios, o mundo de Silogia era regido pela Lingua da Logica.", 40000);
    textoAnimado("Um idioma puro — onde cada palavra nascia verdadeira... ou morria falsa.", 40000);
    textoAnimado("As cidades floresciam em razao, e os pensamentos dancavam em harmonia.", 40000);

    timerInit(1000);
    while (!timerTimeOver());

    textoAnimado("\nMas entao... o Caos despertou.", 50000);
    textoAnimado("Ele corrompeu as palavras, distorceu os significados,", 40000);
    textoAnimado("e mergulhou os homens na Lingua da Contradicao.", 40000);
    textoAnimado("Agora, ate o \"sim\" pode esconder um \"nao\".", 40000);

    timerInit(1000);
    while (!timerTimeOver());

    textoAnimado("\nDas ruinas da coerencia, ergue-se um jovem:", 40000);
    textoAnimado("Guilherme — o ultimo aprendiz da Razao.", 40000);
    textoAnimado("Nascido da ultima centelha do princeso Diego.", 40000);
    textoAnimado("Com a chama da clareza em maos, enfrentara os ecos da mentira,", 40000);
    textoAnimado("para restaurar o idioma perdido: a Logica Proposicional.", 40000);

    timerInit(2000);
    while (!timerTimeOver());

    screenClear();

    textoAnimado("Sua missao: resgatar o Princeso Diego, perdido nas trevas da contradicao.", 40000);
    textoAnimado("Salve-o, para que a logica renasça no mundo.", 40000);

    timerInit(3000);
    while (!timerTimeOver());

    textoAnimado("\n[NARRADOR] A jornada comeca...", 40000);

    timerInit(2000);
    while (!timerTimeOver());
    
    screenClear();

    printf("████████╗██╗  ██╗███████╗    ██╗      █████╗ ███████╗████████╗    ███████╗ ██████╗ ██╗   ██╗██╗██╗   ██╗ █████╗ ██╗     ███████╗███╗   ██╗ ██████╗███████╗\n");
    printf("╚══██╔══╝██║  ██║██╔════╝    ██║     ██╔══██╗██╔════╝╚══██╔══╝    ██╔════╝██╔═══██╗██║   ██║██║██║   ██║██╔══██╗██║     ██╔════╝████╗  ██║██╔════╝██╔════╝\n");
    printf("   ██║   ███████║█████╗      ██║     ███████║███████╗   ██║       █████╗  ██║   ██║██║   ██║██║██║   ██║███████║██║     █████╗  ██╔██╗ ██║██║     █████╗  \n");
    printf("   ██║   ██╔══██║██╔══╝      ██║     ██╔══██║╚════██║   ██║       ██╔══╝  ██║▄▄ ██║██║   ██║██║╚██╗ ██╔╝██╔══██║██║     ██╔══╝  ██║╚██╗██║██║     ██╔══╝  \n");
    printf("   ██║   ██║  ██║███████╗    ███████╗██║  ██║███████║   ██║       ███████╗╚██████╔╝╚██████╔╝██║ ╚████╔╝ ██║  ██║███████╗███████╗██║ ╚████║╚██████╗███████╗\n");
    printf("   ╚═╝   ╚═╝  ╚═╝╚══════╝    ╚══════╝╚═╝  ╚═╝╚══════╝   ╚═╝       ╚══════╝ ╚══▀▀═╝  ╚═════╝ ╚═╝  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═══╝ ╚═════╝╚══════╝\n");
    printf("LUMEN OF DIEGO");

    timerInit(1000);
    while (!timerTimeOver());
}
