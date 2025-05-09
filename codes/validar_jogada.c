#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int validar_jogada_facil(jogada * lista) {
    if (lista->sudoku_jogador_facil[lista->linha][lista->coluna] != 0) {
        printf("\nEssa posição já foi preenchida!\n");
        return 0;
    }

    if (lista->sudoku_completo_facil[lista->linha][lista->coluna] == lista->numero) {
        lista->sudoku_jogador_facil[lista->linha][lista->coluna] = lista->numero;
        printf("Jogada correta!\n");
        return 1;
    } else {
        printf("Jogada incorreta!\n");
        return 0;
    }
}

int validar_jogada_medio(jogada * lista) {
    if (lista->jogador_medio[lista->linha][lista->coluna] != 0) {
        printf("Essa posição já foi preenchida!\n");
        return 0;
    }

    if (lista->completo_medio[lista->linha][lista->coluna] == lista->numero) {
        lista->jogador_medio[lista->linha][lista->coluna] = lista->numero;
        printf("Jogada correta!\n");
        return 1;
    } else {
        printf("Jogada incorreta!\n");
        return 0;
    }
}