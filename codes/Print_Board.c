#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

void imprimir_tabuleiro_facil(jogada *lista) {
    printf("\nTabuleiro do Jogador:\n");
    for (int i = 0; i < TAM_SUDOKU; i++) {
        for (int j = 0; j < TAM_SUDOKU; j++) {
            // Colocar um underline para indicar os números vazios do sudoku
            if (lista->sudoku_jogador_facil[i][j] == 0) {
                printf("_ ");
            } else {
                printf("%d ", lista->sudoku_jogador_facil[i][j]);
            }
        }
        printf("\n");

        // Linha para separar os blocos do Sudoku
        if ((i + 1) % 3 == 0 && i != 8) {
            printf("- - - - - - - - - - -\n");
        }
    }
    printf("\n");
}