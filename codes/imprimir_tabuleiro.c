#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

void imprimir_tabuleiro_facil(jogada *lista) {
    printf("    ");
    for (int col = 0; col < TAM_SUDOKU; col++) {
        printf("%d ", col + 1);
        if ((col + 1) % 3 == 0 && col != TAM_SUDOKU - 1)
            printf("   ");
            
    }
    printf("\n");

    for (int i = 0; i < TAM_SUDOKU; i++) {
        if (i % 3 == 0) {
            printf("   +-------+-------+-------+\n");

        }

        printf("%2d | ", i + 1);  

        for (int j = 0; j < TAM_SUDOKU; j++) {
            if (lista->sudoku_jogador_facil[i][j] == 0) {
                printf("  ");
            } else {
                printf("%d ", lista->sudoku_jogador_facil[i][j]);
            }

            if ((j + 1) % 3 == 0 && j != TAM_SUDOKU - 1)
                printf("| ");
        }

        printf("|\n");
    }

    printf("   +-------+-------+-------+\n");
    printf("\n"); 

}

void imprimir_tabuleiro_medio(jogada *lista) {
    printf("    ");
    for (int col = 0; col < TAM_SUDOKU; col++) {
        printf("%d ", col + 1);  
        if ((col + 1) % 3 == 0 && col != TAM_SUDOKU - 1)
            printf("   ");
    }
    printf("\n");

    for (int i = 0; i < TAM_SUDOKU; i++) {
        if (i % 3 == 0) {
            printf("   +-------+-------+-------+\n");
        }

        printf("%2d | ", i + 1); 
        for (int j = 0; j < TAM_SUDOKU; j++) {
            if (lista->jogador_medio[i][j] == 0) {
                printf("  ");
            } else {
                printf("%d ", lista->jogador_medio[i][j]);
            }

            if ((j + 1) % 3 == 0 && j != TAM_SUDOKU - 1)
                printf("| ");
        }

        printf("|\n");
    }

    printf("   +-------+-------+-------+\n");
    printf("\n"); 

}
