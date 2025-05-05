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
        if(nivel == 1){
            carregar_tabuleiros(lista);
            jogo(lista);
        }else if (nivel == 2){

        }else if (nivel == 3){
        }

    } while (nivel =! 4);
    
    free(lista);
    return 0;
}

