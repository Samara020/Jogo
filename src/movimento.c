#include <stdio.h>
#include <unistd.h>
#include "keyboard.h"
#include "batalha.h"
#include "movimento.h"

#define SCREEN_RIGHT_LIMIT 140   

void drawKnight(int x, int y) {
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀", y+0, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣴⣿⣿⠿⢿⠧⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀", y+1, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⠛⠁⣰⠁⣀⠴⠨⠦⠀⠀⠀⠀⠀⠀⠀⠀⡀", y+2, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⠲⣹⠒⢲⢶⠃⠀⠀⠀⠀⠀⡰⢉⠇", y+3, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣸⣮⣄⣺⠀⠤⡞⠀⠀⠀⠀⢀⠌⢠⠎⠀", y+4, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⢟⠛⠻⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠠⠢⡰⠁⠀⠀", y+5, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣶⣦⣤⢾⠝⠛⠿⢼⢻⢱⠀⠀⠔⢁⠗⠀⠀⠀⠀", y+6, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⡟⠁⠀⠀⢈⠄⣸⡏⢀⠎⣠⣞⣶⡦⡀⠀⠀", y+7, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⣰⣿⣿⣿⡟⠉⠻⣶⣀⠀⠀⣈⣸⣿⡷⡁⣵⣿⣿⡿⣿⣮⠲⠀", y+8, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⣰⣿⣿⣿⣿⣷⣆⡐⢝⣿⣿⠿⠿⣮⡯⣤⣾⣿⣿⡿⣽⣳⢯⠇⠀", y+9, x);
    printf("\033[%d;%dH⠀⠀⢀⣼⣿⣿⣿⣿⣿⣯⢽⠙⢿⣿⣿⠇⣠⣿⣿⣿⣽⣿⣿⡽⣷⡟⠎⠀⠀", y+10, x);
    printf("\033[%d;%dH⢀⣴⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣷⣿⣶⣶⣽⣿⣿⣿⣿⣿⣯⣟⢏⠎⠀⠀⠀", y+11, x);
    printf("\033[%d;%dH⢸⣿⣻⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠻⣿⢞⡕⠃⠀⠀⠀⠀", y+12, x);
    printf("\033[%d;%dH⠀⠙⢿⡟⠁⠀⣹⣻⡁⢀⡾⢿⣿⣿⣿⣿⣿⣿⢻⣆⡳⠓⠁⠀⠀⠀⠀⠀⠀", y+13, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠀⠰⡧⠁⡩⠋⠀⠀⠀⠀⠘⠛⠛⢧⠇⢀⠅⠀⠀⠀⠀⠀⠀⠀⠀", y+14, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⢠⣟⢠⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡅⣸⠀⠀⠀⠀⠀⠀⠀⠀⠀", y+15, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⢠⣿⣿⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣽⣿⣿⣶⣄⡀⠀⠀⠀⠀⠀⠀", y+16, x);
    printf("\033[%d;%dH⠀⠀⠀⠀⠈⠙⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀", y+17, x);
}

void drawRoad() {
    for (int i = 0; i < 160; i++) {
        printf("\033[25;%dH═", i);
    }
}

void drawArrow() {
    printf("\033[23;120H➡➡➡  SIGA PARA A DIREITA");
}

void primeiracena() {
    int x = 5, y = 2;
    char c;

    keyboardInit();

    while (1) {
        if (x > SCREEN_RIGHT_LIMIT) break;

        printf("\033[H\033[J");

        printf("Use D para andar até o fim do caminho.\n");

        drawRoad();
        drawArrow();
        drawKnight(x, y);

        fflush(stdout);
        usleep(30000);

        if (keyhit()) {
           c = readch();
            if (c == 'q' || c == 'Q') break;
            if (c == 'd' || c == 'D') x += 2;
         
            if (c == 'a' || c == 'A') {
    if (x >= 2) x -= 2;
}
        }
    }

    keyboardDestroy();

    printf("\033[H\033[J");
    printf("O cavaleiro chegou ao final da estrada!\n");


}

