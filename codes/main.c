#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int main(){
    jogada *lista = malloc(sizeof(jogada));
    int nivel;

    do{
        nivel = menu();
        if(nivel == 1){
            carregar_tabuleiros(lista);
            jogo(lista);
        }else if (nivel == 2){
            carregar_tabuleiros_medio(lista);
            jogo_medio(lista);
        }else if (nivel == 3){

        }else if (nivel == 4){
            printf("Encerrando o jogo...\n");
        }

    } while (nivel =! 4);
    
    free(lista);
    return 0;
}

