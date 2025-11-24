#include <stdio.h>
#include "screen.h"
#include "timer.h"
#include "historia.h"
#include "batalha.h"

void iniciar_historia() {
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
    screenClear();

    textoAnimado("Sua missao: resgatar o Princeso Diego, perdido nas trevas da contradicao.", 40000);
    textoAnimado("Salve-o, para que a logica renasça no mundo.", 40000);

    timerInit(3000);
    while (!timerTimeOver());

    textoAnimado("\n[NARRADOR] A jornada comeca...", 40000);

    timerInit(2000);
    while (!timerTimeOver());
    
    screenClear();

    printf("██╗      █████╗ ███████╗████████╗    ███████╗ ██████╗ ██╗   ██╗██╗██╗   ██╗ █████╗ ██╗     ███████╗███╗   ██╗ ██████╗███████╗\n");
    printf("██║     ██╔══██╗██╔════╝╚══██╔══╝    ██╔════╝██╔═══██╗██║   ██║██║██║   ██║██╔══██╗██║     ██╔════╝████╗  ██║██╔════╝██╔════╝\n");
    printf("██║     ███████║███████╗   ██║       █████╗  ██║   ██║██║   ██║██║██║   ██║███████║██║     █████╗  ██╔██╗ ██║██║     █████╗  \n");
    printf("██║     ██╔══██║╚════██║   ██║       ██╔══╝  ██║▄▄ ██║██║   ██║██║╚██╗ ██╔╝██╔══██║██║     ██╔══╝  ██║╚██╗██║██║     ██╔══╝  \n");
    printf("███████╗██║  ██║███████║   ██║       ███████╗╚██████╔╝╚██████╔╝██║ ╚████╔╝ ██║  ██║███████╗███████╗██║ ╚████║╚██████╗███████╗\n");
    printf("╚══════╝╚═╝  ╚═╝╚══════╝   ╚═╝       ╚══════╝ ╚══▀▀═╝  ╚═════╝ ╚═╝  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═══╝ ╚═════╝╚══════╝\n");
    printf("LUMEN OF DIEGO");

    timerInit(2000);
    while (!timerTimeOver());
}
void historiaFinal() {
    screenClear();
    textoAnimado("Criatura: Você... você não irá fazer com que a lógica retorne... O caos já está instaurado, não há mais esperança.\n\n", 40000);

    textoAnimado("Guilherme: Até mesmo criaturas como você vieram da luz lógica. Eu espero que encontre a paz... e talvez entenda, de forma lógica, o porquê de tudo isso. Vá em paz.\n\n", 40000);

    textoAnimado("O silêncio cai sobre o campo devastado. O caos se desfaz como fumaça fria, consumido pela Última Equivalência restaurada.\n", 40000);
    textoAnimado("A luz lógica pulsa na mão de Guilherme como uma brasa viva.\n\n", 40000);

    textoAnimado("Os restos da criatura estremecem. O corpo, feito de caos, começa a rachar como carvão quente.\n", 40000);
    textoAnimado("Uma lágrima escorre por seu rosto antes de se desfazer em partículas cinzentas que sobem ao céu.\n\n", 40000);

    textoAnimado("No centro do clarão silencioso... uma figura surge.\n", 40000);
    textoAnimado("Diego aparece.\n\n", 40000);

    textoAnimado("Seu corpo translúcido brilha como vidro quente, irradiando uma luz suave e firme.\n", 40000);

    textoAnimado("Diego: Guilherme... eu senti cada passo seu em meio às trevas.\n", 40000);
    textoAnimado("Mesmo aprisionado, sua lógica me alcançava como um sussurro distante.\n", 40000);
    textoAnimado("Você trouxe de volta aquilo que nem eu acreditava restar: a última luz.\n\n", 40000);

    textoAnimado("Guilherme: Diego... eu nunca deixei de acreditar em você. Sua chama sempre me guiou.\n\n", 40000);

    textoAnimado("Diego observa as próprias mãos, redescobrindo sua existência.\n", 40000);
    textoAnimado("Diego: Eu pensei que minha luz havia sido apagada. Mas você provou que a lógica é vínculo, memória e esperança.\n", 40000);
    textoAnimado("Sua alma encontrou a minha novamente. Por isso despertei.\n\n", 40000);

    textoAnimado("A chama ao redor de Diego cresce, iluminando o rosto de Guilherme.\n\n", 40000);

    textoAnimado("Guilherme: Eu prometi que te traria de volta. Agora... o mundo pode respirar outra vez.\n\n", 40000);

    textoAnimado("Diego sorri, iluminado.\n", 40000);
    textoAnimado("Diego: A luz lógica renasce em todos que ousam pensar, questionar e iluminar o que as trevas tentam ocultar.\n", 40000);
    textoAnimado("Você devolveu o sentido à equivalência. E por isso, eu agradeço.\n", 40000);
    textoAnimado("Com toda a luz que ainda há em mim.\n\n", 40000);

    textoAnimado("Guilherme estende a mão. Diego segura.\n", 40000);
    textoAnimado("Uma onda de luz varre o cenário, limpando todo o caos.\n", 40000);
    textoAnimado("A terra se recompõe. O ar volta a aquecer. O mundo respira.\n\n", 40000);

    textoAnimado("Guilherme: Estamos juntos, Diego. Sempre estivemos.\n\n", 40000);

    textoAnimado("Diego aperta sua mão, firme.\n", 40000);
    textoAnimado("Diego: Então vamos, Guilherme. Há um mundo esperando para ser reacendido. E desta vez... não caminharemos mais nas trevas.\n\n", 40000);

    textoAnimado("THE LAST EQUIVALENCE: LUMEN OF DIEGO\n\n", 40000);
}
