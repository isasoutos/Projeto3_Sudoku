#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>

int menu(){
    int nivel;
    printf("---------------------------------------------------------------\n");
    printf("Olá jogador! Espero que esteja bem, vamos começar!\nLembre-se que basta digitar 0 para voltar ao menu prinipal. \n" );
    printf("\nSelecione o nível que deseja jogar!\n");

    printf("---------------------------------------------------------------\n");
    printf("1- Fácil\n");
    printf("2- Médio\n");
    printf("3- Sair do jogo\n");

    printf("Digite o nível (1/2): ");
    scanf("%d", &nivel);
    printf("---------------------------------------------------------------\n");

    return nivel;
}