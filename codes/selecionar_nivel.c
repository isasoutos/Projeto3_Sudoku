#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int menu(){
    int nivel;
    printf("---------------------------------------------------------------\n");
    printf("Olá jogador! Espero que esteja bem, vamos começar!\n");
    printf("Selecione o nível que deseja jogar!\n");

    printf("---------------------------------------------------------------\n");
    printf("1- Fácil\n");
    printf("2- Médio\n");

    printf("Digite o nível (1/2): ");
    scanf("%d", &nivel);
    printf("---------------------------------------------------------------\n");

    return nivel;
}