#include "batalha.h"

int main() {
    Jogador j = {"Guilherme", 100, 20, 10, 0};
    Inimigo i = {"Corrompido", 120, 15};

    iniciarBatalha(&j, &i);
    return 0;
}
