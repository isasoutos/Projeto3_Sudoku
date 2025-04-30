#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int menu(){
    int nivel;

    printf("------------------------------\n");
    printf("1- Fácil");
    printf("2- Médio");
    printf("3- Difícil");
    printf("4- Mestre");

    printf("Digite o que deseja: ");
    scanf("%d", &nivel);
    printf("------------------------------\n");
}