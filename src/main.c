#include <unistd.h>

#include "batalha.h"
#include "historia.h"
#include "som.h"

int main() {
    Jogador j = {"Guilherme", 100, 20, 10, 0, NULL, 0, 0}; 
    Inimigo i = {"Corrompido", 120, 15};

    inicializarAudio();
    tocarAudioTemaFundo();
    iniciar_historia();
    iniciarBatalha(&j, &i);
    sleep((5));
    return 0;
}
