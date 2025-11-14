#include "batalha.h"
#include "historia.h"

int main() {
    Jogador j = {"Guilherme", 100, 20, 10, 0};
    Inimigo i = {"Corrompido", 120, 15};

    iniciar_historia();
    iniciarBatalha(&j, &i);
    return 0;
}
