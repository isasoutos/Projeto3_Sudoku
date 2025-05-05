#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

void imprimir_tabuleiro_facil(jogada *lista) {
    for (int i = 0; i < TAM_SUDOKU; i++) {
        if (i % 3 == 0) {
            printf("+-------+-------+-------+\n");
        }

        for (int j = 0; j < TAM_SUDOKU; j++) {
            if (j % 3 == 0) {
                printf("| ");
            }

            if (lista->sudoku_jogador_facil[i][j] == 0) {
                printf("  ");
            } else {
                printf("%d ", lista->sudoku_jogador_facil[i][j]);
            }
        }
        printf("|\n");
    }
    printf("+-------+-------+-------+\n");
}