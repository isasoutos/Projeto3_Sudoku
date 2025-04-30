#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int main(){
    jogada *lista = malloc(sizeof(jogada));
    int nivel;

    do
    {
        nivel = menu();

    } while (nivel =! 4);
    
    free(lista);
    return 0;
}