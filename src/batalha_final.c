#include <stdio.h>
#include <string.h>
#include "batalha_final.h"
#include "batalha.h"
#include "timer.h"
#include "screen.h"
#include "historia.h"


void contextualizacaoFinal() {
    screenClear();
    textoAnimado("\nGuilherme chega ao encontro da criatura.\n\n", 15000);

     printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣄⣤⣼⣿⣿⣿⣿⣿⡟⣿⣯⣟⢳⡡⣽⡷⢻⠓⡤⢵⠭⣏⣹⡟⢷⣤⣴⣮⡿⠋⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣟⢿⡯⣻⢿⡞⢛⢝⢬⣥⣭⡇⢠⣹⣶⡥⡾⣿⣿⣽⣿⣿⣶⣦⠀⣀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣷⠟⡏⠻⡟⠄⢁⣼⢵⢽⣻⢗⣿⣻⣮⣿⣿⣿⣿⣿⣿⣭⢿⣯⣽⣿⡿⠷⡄⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣿⣿⣿⣿⣿⣿⡿⣿⣿⣱⣻⠓⢇⢰⢒⡟⡡⢾⣿⣦⡾⣷⣷⢻⢢⣹⡿⠛⣯⡐⣌⣇⣭⣿⡿⣧⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣰⡇⣀⣤⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣔⣱⣼⣼⣷⣾⣅⡴⣗⣼⣾⡕⣿⡺⠞⣿⣀⠀⠛⡏⠑⣿⣯⢍⢿⡟⣯⠳⠀\n");
    printf("⠀⠀⠀⠀⣾⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣽⣿⣿⣿⣿⣿⣉⡙⣣⣟⡿⢟⣙⣟⠟⣿⢁⣾⣻⡿⣦⡚⢱⠴⠷⡟⠛⣻⠿⢿⢷⣀\n");
    printf("⠀⠀⠀⠀⣿⣿⣿⡿⣿⣿⣿⡟⣿⡻⢟⣿⣶⣟⣿⣿⣿⣿⣿⣽⣿⣿⣷⣿⣣⣽⣟⡱⢾⡶⣯⢥⠀⣬⣶⡾⡷⢦⠴⢓⡾⡚⡮⢿⠦⢿\n");
    printf("⠀⠀⢸⣤⣿⣿⣿⡍⢻⣿⣿⣿⣿⠋⠉⠀⢹⡿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣷⣿⠿⣛⠉⠿⣪⡪⢶⣿⣿⣿⣿⣿⣦⣀⠀⢹⠿⡋⢫⠹⠋\n");
    printf("⠀⠀⠸⣿⣿⣿⠟⣇⣽⣿⢾⣹⠏⠀⠀⠀⠀⠻⢾⣦⡈⢻⣿⣿⣿⣷⣏⣾⢋⣬⠋⣆⣤⣍⣾⣿⢻⣿⣿⣿⡞⠘⠿⣦⣼⣌⣺⠗⣷⠄\n");
    printf("⠀⢰⣾⣿⣿⡏⢫⣷⣿⠖⠚⠁⠀⠀⠀⠀⠀⠀⠀⣿⣯⣲⣿⣿⣿⣿⣟⣷⣴⠴⣼⣯⡿⢟⣿⢗⡯⣾⣷⠟⠀⠀⠀⠈⠉⠛⠾⣿⠏⠀\n");
    printf("⠀⠈⣿⣿⢩⡙⠿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⠵⢻⣿⣿⣿⣿⣿⣿⣿⣿⣾⣽⣿⣋⣼⣿⣿⡟⢁⠄⠀⠀⠀⠀⠀⠀⢸⣏⣀⠴\n");
    printf("⣼⣿⡷⡂⠰⣓⠸⢳⣶⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⢿⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⢹⣀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡝⣸⢖\n");
    printf("⡞⢹⣷⡮⢹⣾⡿⠻⣾⡺⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡷⣢\n");
    printf("⡋⢸⣿⣤⢻⠁⠀⠀⠉⣷⡇⠀⠀⠀⠀⠀⠀⢀⣴⣶⣾⣿⣿⣿⣻⣹⠆⡰⠞⣽⣿⣿⣿⣿⣿⣿⣿⣶⡄⠀⠀⠀⣀⣀⢀⡠⠞⢗⠸\n");
    printf("⡇⢸⣿⣯⣿⡄⠀⠀⠀⠋⠀⠀⠀⢀⣀⣴⣖⣛⡟⢻⣿⣿⢿⣝⣿⡥⣯⢷⡿⢿⣿⣿⣿⣿⣿⣻⡿⢿⣿⣷⠀⠀⣸⢫⢺⣝⢣⣘⣶⣷\n");
    printf("⣿⣾⡽⠻⣿⣧⣄⣀⠀⠀⠀⢀⡠⣟⣋⡱⢀⣈⡀⠀⠙⠯⡇⡻⣿⣩⣿⣻⣿⣿⡿⣼⣿⣾⣯⣠⡽⠻⣽⣷⡄⢸⣧⡿⠛⢿⣿⢾⢟⣾\n");
    printf("⠉⠻⣟⣄⠀⠉⠉⠁⠀⠀⡠⡟⢩⡃⢀⠗⢢⢇⠀⠀⠀⠀⠁⠇⠹⠝⠫⠋⣽⡇⣿⢿⢻⣇⣄⠞⠚⢻⣍⢻⣟⢸⡇⠀⠀⡰⣫⣥⣿⣧\n");
    printf("⠀⠀⠀⠉⠁⠀⠀⠀⠀⡾⠛⠈⠡⠉⠸⠢⠌⠀⠀⣠⡶⣦⣄⠀⠀⠀⠀⢠⠏⢱⣿⢾⡁⢱⠃⠁⣺⣏⣉⡿⣿⡄⠁⠀⢀⣿⣶⡿⠛⡇\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⢀⠔⠁⠀⠀⠀⠀⠀⠀⢀⣴⣶⣾⣿⣿⣻⣷⠀⠀⠀⠀⠀⢸⢟⢸⣷⠋⢙⠟⠧⡥⢝⠞⠕⡇⠀⢀⣾⡿⠋⢰⣮⣶\n");
    printf("⠀⠀⠀⠀⠀⠀⢠⠃⠀⠀⠀⠀⠀⠀⠀⢀⡠⠄⣻⣿⣧⠞⢈⣽⠀⠀⣤⠈⠀⣇⢻⣾⣏⣂⡼⣀⡜⣹⢋⢎⢾⣷⣀⠉⠁⠀⢀⣼⣵⠿\n");
    printf("⠀⠀⠀⠀⠀⠀⠈⡄⠀⠀⠀⠀⠀⠀⣀⣵⣶⣼⣿⣿⣶⣷⣿⣿⣄⣰⠙⣄⢠⠙⣍⣳⣿⠹⠁⠀⡽⠡⢣⠞⢦⡏⢿⣄⣀⠚⠛⠋⠡⠾\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠐⢄⣀⣴⣶⣶⣿⣿⣿⣿⣿⣽⣿⡿⣿⡕⢻⠙⣟⣧⡸⣸⠀⠈⠦⣯⣧⢧⠜⡐⣡⡗⢆⡸⡗⠊⢼⠚⡦⣤⢤⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⢻⠿⠟⡫⢫⢏⣿⣧⡶⢷⢿⣿⣇⠈⠀⠀⠀⢸⣼⠏⠜⡴⠁⢨⣂⡷⣇⢴⠁⠀⠰⠀⠋⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⣞⣿⣿⣿⣿⣿⣿⡿⢸⡴⠋⡴⠁⡼⣽⣿⣾⣿⣿⣿⠇⠀⠀⠀⠀⣠⢃⢎⣼⣻⣿⣯⣿⣇⡼⢦⣈⡽⠓⢀⠄⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢸⣽⣿⣿⣿⣿⣿⠛⠇⢀⣴⠞⠁⣰⠃⢨⣿⣿⣿⠿⢿⣦⡀⠀⠀⡴⣣⢏⢾⣷⣽⠌⢱⢻⣿⡹⣴⢿⣄⠉⠉⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠸⣼⣿⣿⣿⣿⣿⣠⣴⡿⠁⠀⣰⣿⣶⣿⣫⢿⣣⣤⣜⣿⣳⣕⣾⣴⢯⠏⢰⣿⢿⠑⣠⡋⣗⢳⢿⣿⢹⠀⠀⠀⠀⠀\n");
    printf("⣤⣴⣶⣶⣶⣦⣤⣷⣿⣿⣿⣿⡿⠟⢁⡴⠁⣰⣿⣿⣿⣿⣧⠈⠛⠿⣟⣯⣌⡿⠛⢿⣵⣤⠈⣏⠢⣳⡈⠩⡜⠝⣺⢿⢾⡄⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠋⠁⠀⢀⡜⠱⣱⣿⣿⣿⣿⢿⣿⡀⠀⠀⠀⠙⣿⣧⡠⠋⠈⠁⠀⠘⢧⡨⡢⣈⠀⠘⣠⣾⣋⠇⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⡿⠛⠋⠁⠀⠀⠀⡰⠂⣠⣯⢌⣽⣿⣿⣿⣿⣿⣿⣎⠷⣄⠀⠀⣞⣽⠃⠀⠀⠀⠀⠀⠀⠀⠉⠫⡒⠉⠄⠋⡻⣿⠀⢀⠠⠀⠀\n");
    printf("⣿⣿⣿⣿⣷⣶⣄⠀⠀⣠⣮⠀⠾⣽⣿⣿⣿⣿⣿⣿⣿⣿⡷⢈⣦⣬⣷⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⠀⠂⠀⠈⠐⡅⠀⠀⠀⠀\n");
    printf("⣿⣿⠟⠋⢄⣰⣷⣾⣿⣿⡤⣴⣿⣿⣿⣿⣿⢿⣿⣿⣿⣷⣿⠋⠀⠹⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢀⡈⡀⠀⢷⡀⠀⠀⠀\n");
    printf("⠈⠀⡀⠀⠀⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠛⠃⠀⠙⢿⣅⠀⠀⠀⢘⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡔⠡⡪⠢⢄⢽⡃⠀⠀⠀\n");
    printf("⠀⠀⢗⡀⢠⠀⠀⠉⠉⠉⣶⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⢙⣷⣿⣽⣯⠷⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⡰⢡⡶⢀⠲⢱⢧⠀⠀⠀\n");
    printf("⠻⢷⣌⣥⣏⣞⢤⢄⣠⣿⣿⣿⣿⣿⠟⠀⠀⠀⠓⠀⠀⠀⢨⠯⠑⡤⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⢀⢴⣒⢯⢩⠝⠟⣒⡪⣯⡬⣗⣦⡄\n");


    printf("\033[5;81H");
    textoAnimado("Criatura: Pobre criança, portadora de uma pequena luz lógica,", 50000);
    
    printf("\033[7;81H");
    textoAnimado("Relembrar a antiga língua lógica não os salvará!", 50000);
    printf("\033[8;81H"); 
    textoAnimado("A luz já acabou e Diego nunca mais voltará!", 50000);
    
    printf("\033[10;81H");
    textoAnimado("[Guilherme]: Eu renasci daquele que jamais apagou!", 50000);
    printf("\033[11;81H");
    textoAnimado("Você é apenas uma criatura corrompida que roubou sua luz!", 50000);
    
    printf("\033[13;81H");
    textoAnimado("Diego, eu sei que você pode me ouvir... não desista!", 50000);
    
    printf("\033[15;81H");
    textoAnimado("Criatura: Cale-se! Ele não pode te ouvir!", 50000);
    printf("\033[16;81H");
    textoAnimado("~p não pode sair ~p~q... AHHHHH cale-se!!!", 50000);
    
    printf("\033[18;81H");
    textoAnimado("Eu acabarei com isso agora mesmo!", 50000);
    
    printf("\033[20;81H");
    textoAnimado("[Guilherme]: Não se preocupe Diego, a luz da lógica voltará ao mundo.", 50000);
    
    printf("\033[22;81H");
    textoAnimado("Eu só preciso derrotar esse monstro e tornar", 50000);
    printf("\033[23;81H");
    textoAnimado("minha alma equivalente à sua novamente...", 50000);
    
    printf("\033[25;81H");
    textoAnimado("Eu não posso falhar. Eu só preciso encontrar a equivalência mais uma vez...", 50000);

      printf("\033[27;81H");
    textoAnimado("Essa será... MINHA ÚLTIMA EQUIVALÊNCIA!", 100000);

    
    printf("\033[36;1H");
    
    
}

int perguntaFinalUnica(int n) {
    char *resposta = malloc(256 * sizeof(char));
    if (!resposta) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    screenClear();
    textoAnimado("DESAFIO FINAL - A ÚLTIMA EQUIVALÊNCIA\n\n", 15000);
    

      printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⢀⡀⠀⠀⠀⠀⠀⢀⣾⠁⠀⠀⣼⣠⣾⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣆⣴⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡇⣠⣶⣟⣤⣄⠀⣀⣄⣤⣾⣿⣾⣿⡿⣻⣿⡾⣏⣗⣿⣯⣟⣻⣾⡟⣻⣿⣿⣿⣿⣿⣿⣿⣤⢀⣤⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣆⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡔⣿⣿⣾⡟⣿⠟⣻⢗⣯⣷⣿⠿⢾⣏⢙⣛⡲⢛⣿⣿⣿⣿⣿⣿⣧⡄⣀⣤⣤⣤⣤⡀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣾⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣷⣽⣿⣿⡗⠊⢐⣎⣟⡮⣳⣤⣷⣿⢛⡏⢻⢱⣹⣧⢦⣾⣟⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⢾⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⡿⣽⣿⢯⡀⡢⡎⣏⢞⣼⣿⣿⣿⣿⡿⣧⣿⢺⣻⡽⠭⢶⣋⣿⡿⣿⣿⣿⣿⣄⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⣿⣿⣿⣯⣿⣯⣿⡿⣿⢿⣷⣻⣿⣿⣿⣿⣯⡇⡓⡟⡣⡼⡟⢃⣤⣿⣿⡿⣿⣿⣿⣹⣼⣳⣾⡺⣽⣡⠯⢭⣶⢻⡽⣿⣿⣿⣿⣶⣶⠆\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⣤⣤⣿⣿⣿⣿⣿⣧⣟⡧⠿⢇⠿⠟⠀⠀⠣⠿⠿⣿⣿⣿⡿⣄⣛⣻⢿⢠⠟⣻⣿⣛⣿⣿⠿⣿⣼⣟⣿⣿⣿⢟⣿⣜⣠⠃⢃⣿⣿⣿⣿⣿⣿⠄⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⢿⣿⣿⣻⣽⡷⡿⡗⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⣿⣷⣾⣿⢝⡿⡿⣿⣿⣿⡟⣟⢱⣾⣿⣿⣿⣿⣿⣿⣾⣥⣵⡓⠍⢻⢿⣣⣷⣿⣿⣿⣦⠄\n");
    printf("⠀⠀⠀⠀⠀⠀⣿⣿⢻⣟⣿⡿⠛⠛⠋⠻⡽⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣿⣿⣷⣯⣷⣿⡿⣿⡯⢲⣌⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣭⡹⠃⢰⡞⡳⣯⣿⣿⣻⣄\n");
    printf("⠀⠀⠀⠀⠀⠀⢹⡟⠈⢿⣿⠂⠀⠀⠀⢘⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡟⣿⣿⢟⢁⣴⡟⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠷⠿⢭⡓⡲⠯⢬⣟⠫⡽⣿⣟⣾\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠓⠀⠀⠉⠓⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢙⢕⡴⡿⣻⣼⣿⣿⣿⣿⣯⣿⢿⣿⣿⣿⣿⡇⠸⠡⡐⠡⢀⠁⣦⢾⡙⢭⣿⣿⢿\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣯⢼⣦⠀⠀⠀⠀⠀⠀⠀⠀⢀⢔⠑⠻⣿⣳⡽⣿⣿⢿⣻⣽⣻⢿⡿⣿⣿⣿⣿⣥⡁⠀⡴⡡⠗⢀⢄⣧⣝⣯⡫⣝⡿\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣾⣿⠻⠄⡀⠀⠀⠀⠠⣀⣄⠴⠁⠀⠀⠀⠀⠀⠙⢳⣿⣯⣯⡷⣯⣟⣿⣿⣿⣿⣿⣿⣷⡸⠉⢀⣌⠞⢎⣾⣿⣟⣿⣟⣡\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⣿⡿⣿⣷⣳⣮⣭⣿⣿⣗⣶⣽⠾⠥⠀⠀⠀⠀⠀⠀⣠⣴⣷⣿⣷⣻⢷⣞⣯⣿⣟⣯⣿⣿⠋⡠⡴⢪⡈⠶⡛⣫⣿⣿⣿⣿⣿\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⢀⣴⣿⣻⣟⣷⣿⣿⣿⣿⣿⣭⣽⣿⣿⡝⠉⠀⠀⠀⠀⠀⠀⣤⣾⣿⣿⣿⣿⣿⣿⣿⡾⣷⣻⢾⣟⣯⣏⡳⣤⠙⢙⣄⣖⣵⡿⣷⣿⣿⣿⣿\n");
    printf("⠀⠀⠀⢀⣤⣶⡿⣿⣟⣿⣻⣿⣿⣿⡿⣿⣿⣿⢿⣿⣟⣾⣿⠟⠟⠛⠙⠊⠀⠀⠀⠀⠀⠀⢀⣼⣿⡿⣽⣷⣻⡽⣟⣿⣻⣿⣗⣯⢽⡺⢽⡺⢯⡄⢟⡉⡹⣤⣟⣿⣿⣿⣿⣿⣻\n");
    printf("⠀⠀⠀⠟⠛⠙⣟⣷⣻⣾⢿⣻⣽⣷⣿⣿⡿⠁⣸⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡿⣯⡟⣵⣳⢏⡿⣹⢞⡳⠏⠊⠁⠉⠃⣿⣝⣓⣴⠊⣙⡾⣿⣿⣿⣿⣿⣿⡿⢏\n");
    printf("⠀⠐⠄⠀⠀⠀⠻⣯⣿⠟⠛⣽⣾⣿⣿⣿⣠⣾⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠰⣿⣻⡵⡻⣵⡫⢟⡶⡙⡏⣱⠀⠀⠀⢀⣾⢽⡮⢗⣟⢍⡽⢷⡿⣿⣿⣿⣯⠄⠃⢉\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⣿⣿⠛⢠⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⡗⣴⠀⠀⠀⠀⠀⠀⠙⣷⢻⣽⢲⢹⠙⠒⢡⠈⠉⢢⠀⣴⣯⣷⣾⣽⡏⣭⣽⡖⣯⣽⣿⡟⠉⠀⢠⢠⠉\n");
    printf("⠀⠀⠰⡁⠂⠁⠀⠀⠒⠀⠀⠀⠀⠀⠤⠋⣸⣿⣿⠏⠉⠃⠀⠉⠙⣿⣿⢴⠇⠀⠀⠀⠀⠀⠀⠀⠑⠛⠪⣭⠛⣰⣤⡤⣴⣻⠋⡝⢳⣴⣺⣫⠝⣾⡋⣭⡩⣹⣟⠀⠀⠐⢀⡠⠁\n");
    printf("⠀⢢⡀⠀⠀⠀⡀⠡⠀⠀⠀⠀⠀⢀⣤⣾⣿⣿⠁⠀⠀⠀⠀⠀⠀⣿⠼⡏⠁⠀⠀⠀⠀⠀⢀⣀⣠⣤⠾⣠⣿⣿⣆⣷⣿⣶⣦⣝⣿⣿⣿⣭⢥⣝⣿⣗⡭⢴⣻⡀⣠⣶⠟⣀⢀\n");
    printf("⢤⠙⣿⡄⢀⠔⡀⠀⣆⠂⠀⠖⢀⣿⣿⢟⠋⠁⢀⠄⣀⠀⠀⠀⠀⢻⡹⣏⢂⡂⣀⡸⢄⣤⣟⡼⡛⣤⣎⣿⡿⣿⣿⣿⢯⣾⣿⣹⣿⡿⢟⡛⣾⣧⣿⡯⠜⢮⣷⣿⣿⡿⡟⠍⠉\n");
    printf("⠀⠀⢿⣿⣆⠀⣠⡁⠪⢔⡀⣠⣿⠟⠁⠀⠀⠈⠀⡀⠋⠩⠈⠒⠛⢻⣛⣯⠈⠘⠒⠋⠛⠋⠉⠁⠀⠀⠀⠛⠱⠛⠉⠹⠸⠛⠛⢙⠷⠭⠅⠛⢋⣩⠅⠀⠈⣼⣿⣿⠏⢈⣥⣬⣶\n");
    printf("⣿⣷⣬⣿⣿⠿⣿⣭⣵⣮⢭⣿⣿⣦⣾⣶⣶⣿⣿⣿⡷⣼⣶⠶⠢⠾⠿⠿⠟⠓⠖⠊⠂⠳⠅⠂⠠⠀⢀⠀⠀⢀⠀⠀⠀⠀⢀⣞⢰⣀⣠⣴⡟⡁⡐⢂⣾⣿⣿⣿⣶⣿⣿⣿⣿\n");
    printf("⣤⣽⡟⠻⣿⣿⣾⣿⣿⠛⠩⣤⢿⣿⣏⢯⡹⠗⠩⠙⠃⡁⠰⠀⠀⡀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠂⠑⠂⠣⣀⠀⢀⢢⡐⠍⣿⣏⡴⢡⣿⣿⣩⠟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");

    if (n == 1) {
        printf("\033[10;81H");
        textoAnimado("1) A criatura distorce a lógica e tenta te confundir", 15000);
        printf("\033[11;81H");
        textoAnimado("dizendo que ~(p v q) não é equivalente a ~p ^ ~q", 15000);
        printf("\033[13;81H");
        textoAnimado("Mostre que são equivalentes.", 15000);
    }

    if (n == 2) {
        printf("\033[10;81H");
        textoAnimado("2) A voz de Diego ecoa em sua mente,", 15000);
        printf("\033[11;81H");
        textoAnimado("lembrando o princípio da implicação.", 15000);
        printf("\033[13;81H");
        textoAnimado("Reescreva p -> q usando apenas os conectivos v e ~.", 15000);
    }

    if (n == 3) {
        printf("\033[10;81H");
        textoAnimado("3) Para recuperar parte da essência de Diego,", 15000);
        printf("\033[11;81H");
        textoAnimado("você deve provar que p <-> q", 15000);
        printf("\033[13;81H");
        textoAnimado("é equivalente à combinação (p -> q) ^ (q -> p).", 15000);
    }

    if (n == 4) {
        printf("\033[10;81H");
        textoAnimado("4) O caos tenta inverter sua percepção do mundo.", 15000);
        printf("\033[12;81H");
        textoAnimado("Use a antiga lei de De Morgan para transformar ~(p ^ q)", 15000);
        printf("\033[13;81H");
        textoAnimado("e restaurar a clareza.", 15000);
    }

    if (n == 5) {
        printf("\033[10;81H");
        textoAnimado("5) Um grito ecoa: 'Você não compreende", 15000);
        printf("\033[11;81H");
        textoAnimado("o verdadeiro significado de ~(p -> q)!'", 15000);
        printf("\033[13;81H");
        textoAnimado("Mostre uma equivalência válida para ~(p -> q).", 15000);
    }


    printf("\033[16;81H");
    printf("Guilherme: ");
    fflush(stdout);
    if (!fgets(resposta, 256, stdin)) {
        free(resposta);
        return 0;
    }

    size_t len = strlen(resposta);
    if (len > 0 && resposta[len-1] == '\n'){
        resposta[len-1] = '\0';
    }

    if (strstr(resposta, "~p^~q") || strstr(resposta, "~p ^ ~q") || strstr(resposta, "DeMorgan") ||
        strstr(resposta, "~pv~q") || strstr(resposta, "~(p^q)") || strstr(resposta, "~pvq") ||
        strstr(resposta, "equivalente") || strstr(resposta, "p->q") || strstr(resposta, "p -> q") ||
        strstr(resposta, "p<->q") || strstr(resposta, "<->") || strstr(resposta, "->")) {
        free(resposta);
        return 1;
    }
    free(resposta);
    return 0;
}

void iniciarBatalhaFinal(Jogador *jogador) {
    if (jogador->vida <= 0) return;

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    jogador->vida = 100;

    
    Inimigo chefeFinal;
    strcpy(chefeFinal.nome, "Criatura do Caos");
    chefeFinal.vida = 100;
    chefeFinal.ataque = 20;

    contextualizacaoFinal();

    textoAnimado("Prepare-se para o desafio final!\n", 15000);
    timerInit(1500);
    while (!timerTimeOver());

    for (int i = 1; i <= 5; i++) {
        printf(C_CYAN C_BOLD "\nDesafio Final %d/5:\n" C_RESET, i);
        exibirStatus(jogador, &chefeFinal);
        
        int correta = perguntaFinalUnica(i);
                if (correta) {
            printf("\033[18;81H");
            textoAnimado(C_GREEN "Você acertou. A luz aumenta..." C_RESET, 50000);
            chefeFinal.vida -= 20;
        } else {
            printf("\033[18;81H");
            jogador->vida -= 20;
            textoAnimado(C_RED "Você errou... sua luz enfraquece..." C_RESET, 50000);
        }
        
        timerInit(2000);
        while (!timerTimeOver());
        
        if (jogador->vida <= 0) {
            screenClear();
            textoAnimado("\nVocê caiu... o caos domina tudo...\n", 50000);
            mostrarGameOver();
            return;
        }
    }
    printf("\033[20;81H");
    textoAnimado("\n" C_GREEN C_BOLD "Você libertou Diego! A lógica renasce!\n" C_RESET, 100000);
    historiaFinal();
}
