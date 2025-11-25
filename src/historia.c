#include <stdio.h>
#include "screen.h"
#include "timer.h"
#include "historia.h"
#include "batalha.h"

void iniciar_historia() {
    textoAnimado("\n[NARRADOR]", 50000);
    textoAnimado("Há milênios, o mundo de Silogia era regido pela Língua da lógica.", 100000);
    textoAnimado("Um idioma puro — onde cada palavra nascia verdadeira... ou morria falsa.", 50000);
    textoAnimado("As cidades floresciam em razão, e os pensamentos dançavam em harmônia.", 50000);

    timerInit(1000);
    while (!timerTimeOver());

    textoAnimado("\nMas então... o Caos despertou.", 50000);
    textoAnimado("Ele corrompeu as palavras, distorceu os significados,", 50000);
    textoAnimado("e mergulhou os homens na Língua da Contradição.", 50000);
    textoAnimado("Agora, ate o \"sim\" pode esconder um \"não\".", 50000);

    timerInit(1000);
    while (!timerTimeOver());

    textoAnimado("\nDas ruinas da coerência, ergue-se um jovem:", 50000);
    textoAnimado("Guilherme — o ultimo aprendiz da Razão.", 50000);
    screenClear();

    textoAnimado("Sua missão: resgatar o Princeso Diego, perdido nas trevas da contradição.", 50000);
    textoAnimado("Salve-o, para que a lógica renasça no mundo.", 50000);

    timerInit(3000);
    while (!timerTimeOver());

    textoAnimado("\n[NARRADOR] A jornada começa...", 50000);

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

    textoAnimado("[Criatura]: Você... você não irá fazer com que a lógica retorne... O caos já está instaurado, não há mais esperança.\n\n", 40000);

    textoAnimado("[Guilherme]: Até mesmo criaturas como você vieram da luz lógica. Eu espero que encontre a paz... e talvez entenda, de forma lógica, o porquê de tudo isso. Vá em paz.\n\n", 40000);

    textoAnimado("O silêncio cai sobre o campo devastado. O caos se desfaz como fumaça fria, consumido pela Última Equivalência restaurada.\n", 40000);
    textoAnimado("A luz lógica pulsa na mão de Guilherme como uma brasa viva.\n\n", 40000);

    textoAnimado("Os restos da criatura estremecem. O corpo, feito de caos, começa a rachar como carvão quente.\n", 40000);
    textoAnimado("Uma lágrima escorre por seu rosto antes de se desfazer em partículas cinzentas que sobem ao céu.\n\n", 40000);

    textoAnimado("No centro do clarão silencioso... uma figura surge.\n", 40000);



    screenClear(); 

    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢘⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⡶⠀⠈⠻⠆⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⣧⣄⠔⠉⠈⢑⢤⣴⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡽⡏⠎⠂⠦⠞⢬⣆⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⢸⡐⠝⢀⠿⣸⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠸⡳⣀⠒⣠⣻⢀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣈⣙⡿⣦⠉⡷⣗⡉⠀⠠⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠚⢠⠏⠉⠉⠐⠒⠓⠒⠊⢉⠳⡀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⢴⠆⠀⠀⢠⠏⠀⣀⠆⠀⠀⠀⠀⠀⠘⢆⢷⠀⠀⠀⠀⠀⠳⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⠀⠿⠀⢀⡴⢛⡠⢊⣿⢀⠀⠠⣄⠀⢀⠄⣸⡈⢧⡀⠀⠀⠀⠀⡼⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢴⠀⠀⠀⠯⢭⠏⠁⡼⠘⣆⠑⠒⠋⠀⠉⢢⣇⠈⢶⣽⣦⠀⠀⠸⣇⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⡰⣟⡄⠀⠀⠀⠀⢀⡴⠋⠀⡸⠁⠀⢹⠀⠀⠀⠀⠀⣾⠘⡄⠈⢯⡀⠀⠀⠈⠁⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢿⠋⠘⠀⢀⡤⠚⠁⠀⠀⢰⠇⠀⢀⡞⠀⠀⠀⠀⠀⠸⡀⢳⠀⠀⠙⠲⢤⡀⠀⠈⢻⡷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣟⡀⠀⡴⣋⡀⠀⠀⠀⠀⡜⠀⢀⡮⡓⠀⠀⠀⠀⠀⠀⢳⠈⡆⠀⠀⠀⠀⠉⠲⡄⠀⠀⢱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠈⠛⠂⣇⠀⡽⢦⠀⠀⢰⠃⠀⡼⠀⠙⡄⠀⠀⠀⠀⠀⠘⡆⢷⠀⠀⠀⢀⡖⠉⡄⢀⡶⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠎⡅⡜⢇⢀⡏⠀⢰⠇⠀⠀⡌⢆⠀⠀⠀⠀⠀⣧⠸⡄⠀⢀⣮⣸⢾⡁⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡷⢿⡁⢸⡜⠀⢀⡞⠀⠀⡜⢀⠏⡷⡀⠀⠀⠀⢸⡀⢱⡀⡘⠀⣹⣷⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠉⠉⠁⢀⡜⠇⢀⠜⠀⡟⠀⡇⠙⢎⢦⡀⠀⣧⠀⠳⠧⠖⠁⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠉⠀⠀⢀⡞⠁⡠⠊⢀⡞⠀⠀⡇⠀⠉⢧⡑⢄⠘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠘⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠀⠀⠀⣠⡏⠀⠀⠀⣷⠀⠀⠀⡷⡌⠁⠹⡏⠁⠀⠀⠈⠉⠉⠛⠓⠶⢤⣽⣜⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠃⠀⠀⢀⡼⠙⡇⠀⠀⢸⡟⠀⠀⣰⠁⠘⢦⡀⠹⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⢽⠂⢤⡀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠀⢀⡤⠖⢋⡆⠀⣿⠀⠀⢸⢧⠀⠀⡏⠀⠀⠀⠑⢤⡘⢦⡀⠀⠀⠀⠀⠠⡄⠀⠀⠀⣄⠀⠙⢦⠬⠢⡜⠃⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⢃⡤⠢⠚⠀⠀⠸⠀⢀⡏⠳⠀⡏⡾⠃⠔⣷⠀⡆⠀⠀⠀⠙⢦⡙⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⡄⠈⠣⡀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⣾⠟⠉⠀⠀⠀⠀⢀⠇⠀⢸⠀⠀⠀⡇⡇⠀⠀⡿⠀⢸⠀⠀⠀⠀⠀⠈⢻⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢥⠀⡱⡄\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠣⣄⠀⠀⠀⠀⠀⡜⠀⠀⢸⠀⠀⠀⡇⡇⠀⣰⠃⠀⠈⡄⠀⠀⠀⣀⣀⠼⢃⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢳⠏⣱\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠽⠲⢤⡀⢰⠁⠀⠀⠘⡆⠀⠀⠁⡇⢠⠇⠀⠀⠀⢇⣠⠖⠉⢁⣴⣾⡫⠻⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⢉⡆\n");
    printf("⠀⠀⠀⠀⠈⠀⢀⣴⠗⠁⡀⠀⣾⠼⠃⠀⠀⠀⠀⢹⠀⠀⢠⠁⡾⠀⠀⠀⡀⠘⣷⠀⠀⢸⣿⡷⢀⣾⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠈⡏⡇⡀\n");
    printf("⢀⣶⠀⠀⠀⢀⠞⠁⠀⢰⠁⠀⠙⠲⢤⣀⠀⠀⠀⠀⣇⠀⣿⠀⢳⡠⠒⠉⠉⠉⠁⠀⠀⢸⢾⢇⣟⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠷⠀⣿⡇⡇\n");
    printf("⠈⠉⠀⠀⢠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠒⣟⠀⣻⠀⠸⠀⠀⠀⠀⠀⠀⢀⣀⣼⣾⣿⣿⣿⣿⣿⣧⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢟⡇⠀\n");
    printf("⠀⠀⠀⠀⡏⠀⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠀⢿⣄⡜⠀⠀⠀⠀⠀⣠⡟⡻⢻⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⣄⣀⠀⠀⡘⡸⠀⠀\n");
    printf("⠀⠈⠃⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢸⠀⠀⠀⠀⠀⠀⢰⣿⣿⣤⣾⣿⣳⡹⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⣿⠉⠀⢰⢻⠃⠀⠀\n");
    printf("⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠹⣄⡼⠀⠀⠀⠀⠀⠀⢸⣷⣯⣽⣿⣿⣟⣧⠜⢿⣦⣴⡟⣿⣿⣯⠀⠀⠀⣿⠀⢠⣧⠃⠀⠀⠀\n");
    printf("⠀⠀⠀⠸⣇⠀⠀⢠⡆⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⢻⣷⢺⡀⠈⠻⠿⠀⣿⣿⣷⠀⠀⣰⡞⢠⡿⠁⠀⠀\n");
    printf("⠀⠀⠀⠀⢻⡄⠀⣿⠀⠀⠀⠀⠀⠀⠐⡀⢀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣴⣿⣷⣫⣿⣿⣷⣼⢻⠀⢱⠀⠀⠀⢠⣿⢿⣿⣿⢠⡳⣱⠟⢁⡄⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠻⣄⠸⠀⠀⠀⠀⠀⠀⠀⢿⠆⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣷⣷⣿⣿⣿⣿⣿⢸⡇⠌⣧⠀⠀⣾⣿⡾⣿⣿⣷⡿⠋⠀⠉⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⡀⠙⢇⢣⠀⠀⠀⠀⠀⠀⠀⠛⠀⠀⠀⠀⠀⠀⠀⠀⠛⠿⣿⣏⠉⠁⣸⣿⣿⣿⢸⡇⡆⢸⣧⡀⣿⣿⡇⣇⣱⠊⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠃⠈⠳⡷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣷⣿⣿⣿⣿⣿⠀⣇⣧⠀⢻⣿⣿⡿⣿⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣢⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⢤⣿⢿⣿⣿⣿⣿⣿⠀⢿⣿⡄⠈⢿⣿⣇⣾⢸⡄⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣌⠛⠷⢤⣀⠀⠀⠀⠀⠀⣀⠈⠙⠓⠶⠶⣶⣂⢀⣿⣿⣿⣿⣿⡇⢸⣿⡇⠀⠈⠛⠃⠀⣧⡻⡀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠲⢤⣬⣀⠉⠀⠀⠀⠀⠀⠀⠀⠘⢯⣿⣿⣿⣿⣦⡘⣿⣿⠀⠀⠈⠛⠃⠀⣧⡻⡀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣉⠙⠛⠉⠤⠤⣀⣠⡤⠤⣾⢻⣿⣿⣿⣿⣷⣿⣿⡇⠀⠀⠀⠀⠂⣹⣿⡻⡄⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠈⠀⠀⠀⠀⠀⠀⠀⢠⣿⣾⣯⣿⡿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⢻⣿⡹⡹⡄⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⣿⣿⣿⣿⡇⠈⢿⣿⣿⣿⣇⠀⠀⠀⠀⠘⣿⣇⠀⢻⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⠟⢻⣇⠀⠀⠹⣿⣿⣿⣷⡀⠀⢀⡀⣿⣿⠳⠘⡆⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⢹⣽⠀⠸⠀⢻⣿⣿⣿⣿⢦⠐⠁⢻⣿⠀⣰⠃⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡟⣿⢸⢹⡄⠀⠀⠘⡿⣿⣿⣿⣿⣷⠖⠋⣿⠾⠃⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠏⡿⢸⠾⡟⠦⠤⠴⠿⢽⣿⣿⣿⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢀⢸⢸⡇⠀⠀⠀⠀⠈⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣾⣞⣸⣿⡇⠀⠀⢀⣤⣼⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⡤⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠛⠛⠛⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

   
    printf("\033[2;100H");
    textoAnimado(C_GREEN "Diego aparece.", 100000);

    printf("\033[4;100H");
    textoAnimado("Seu corpo translúcido brilha como vidro quente,", 50000);
    printf("\033[5;100H");
    textoAnimado("irradiando uma luz suave e firme.", 50000);

    printf("\033[7;100H");
    textoAnimado("[Diego]: Guilherme... eu senti cada passo seu em meio às trevas.", 50000);
    printf("\033[8;100H");
    textoAnimado("Mesmo aprisionado, sua lógica me alcançava como um sussurro distante.", 50000);
    printf("\033[9;100H");
    textoAnimado("Você trouxe de volta aquilo que nem eu acreditava restar: a última luz.", 50000);

    printf("\033[11;100H");
    textoAnimado("[Guilherme]: Diego... eu nunca deixei de acreditar em você.", 50000);
    printf("\033[12;100H");
    textoAnimado("Sua chama sempre me guiou.", 50000);

    printf("\033[14;100H");
    textoAnimado("Diego observa as próprias mãos, redescobrindo sua existência.", 50000);
    printf("\033[15;100H");
    textoAnimado("[Diego]: Eu pensei que minha luz havia sido apagada.", 50000);
    printf("\033[16;100H");
    textoAnimado("Mas você provou que a lógica é vínculo, memória e esperança.", 50000);
    printf("\033[17;100H");
    textoAnimado("Sua alma encontrou a minha novamente. Por isso despertei.", 50000);

    printf("\033[19;100H");
    textoAnimado("A chama ao redor de Diego cresce, iluminando o rosto de Guilherme.", 50000);

    printf("\033[21;100H");
    textoAnimado("[Guilherme]: Eu prometi que te traria de volta.", 50000);
    printf("\033[22;100H");
    textoAnimado("Agora... o mundo pode respirar outra vez.", 50000);

    printf("\033[24;100H");
    textoAnimado("Diego sorri, iluminado.", 50000);
    printf("\033[25;100H");
    textoAnimado("[Diego]: A luz lógica renasce em todos que ousam pensar,", 50000);
    printf("\033[26;100H");
    textoAnimado("questionar e iluminar o que as trevas tentam ocultar.", 50000);
    printf("\033[27;100H");
    textoAnimado("Você devolveu o sentido à equivalência. E por isso, eu agradeço.", 50000);
    printf("\033[28;100H");
    textoAnimado("Com toda a luz que ainda há em mim.", 50000);

    printf("\033[30;100H");
    textoAnimado("Guilherme estende a mão. Diego segura.", 50000);
    printf("\033[31;100H");
    textoAnimado("Uma onda de luz varre o cenário, limpando todo o caos.", 50000);
    printf("\033[32;100H");
    textoAnimado("A terra se recompõe. O ar volta a aquecer. O mundo respira.", 50000);

    printf("\033[34;100H");
    textoAnimado("[Guilherme]: Estamos juntos, Diego. Sempre estivemos.", 50000);

    printf("\033[36;100H");
    textoAnimado("Diego aperta sua mão, firme.", 50000);
    printf("\033[37;100H");
    textoAnimado("[Diego]: Então vamos, Guilherme. Há um mundo esperando para ser reacendido.", 50000);
    printf("\033[38;100H");
    textoAnimado("E desta vez... não caminharemos mais nas trevas.", 50000);

    printf("\033[41;100H");
    textoAnimado("THE LAST EQUIVALENCE: LUMEN OF DIEGO", 50000);

    printf("\033[60;1H\n");
}
