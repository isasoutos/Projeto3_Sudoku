#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int menu(){
    int nivel;

    printf("------------------------------\n");
    printf("1- Fácil\n");
    printf("2- Médio\n");
    printf("3- Difícil\n");
    printf("4- Mestre\n");

    printf("Digite o que deseja: ");
    scanf("%d", &nivel);
    printf("------------------------------\n");

    return nivel;
}