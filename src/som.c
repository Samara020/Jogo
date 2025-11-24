//
// Created by drielly on 17/11/2025.
//

#include "som.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

int inicializarAudio() {
    // 1. Inicializa o subsistema de ÁUDIO da SDL
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        printf("Erro ao inicializar SDL: %s\n", SDL_GetError());
        return 0; // Falha
    }

    // 2. Inicializa o suporte a formatos (MP3 e OGG)
    if (Mix_Init(MIX_INIT_MP3 | MIX_INIT_OGG) != (MIX_INIT_MP3 | MIX_INIT_OGG)) {
        printf("Erro ao inicializar SDL_mixer (formatos): %s\n", Mix_GetError());
    }

    // 3. Abre o dispositivo de áudio (44100 Hz é a qualidade CD)
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        printf("Erro ao abrir dispositivo de áudio: %s\n", Mix_GetError());
        return 0; // Falha
    }

    return 1; // Sucesso
}

void encerrarAudio() {
    Mix_CloseAudio();
    Mix_Quit();
    SDL_Quit();
}

void tocarAudioTemaFundo() {
    Mix_VolumeMusic(24);
    Mix_Music *musicaFundo = Mix_LoadMUS("assets/background-theme.mp3");
    if (musicaFundo) {
        Mix_PlayMusic(musicaFundo, -1);
    }
}

void tocarAudioTemaLuta() {
    Mix_VolumeMusic(24);
    Mix_Music *musicaFundo = Mix_LoadMUS("assets/background-theme.mp3");
    if (musicaFundo) {
        Mix_PlayMusic(musicaFundo, -1);
    }
}

void tocarEfeitoSonoroPasso() {
    Mix_Chunk *passos = Mix_LoadWAV("assets/steps.wav");

    Mix_PlayChannel(-1,passos,-1);
}

void tocarGameOver() {
    Mix_Chunk *gameOver = Mix_LoadWAV("assets/gameover.mp3");
}
