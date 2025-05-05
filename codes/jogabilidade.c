#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int jogo_completo(jogada *lista) {
    for (int i = 0; i < TAM_SUDOKU; i++) {
        for (int j = 0; j < TAM_SUDOKU; j++) {
            if (lista->sudoku_jogador_facil[i][j] != lista->sudoku_completo_facil[i][j]) {
                return 0; // Ainda não está completo
            }
        }
    }
    return 1; // Completou corretamente
}

void jogo (jogada *lista) {
    while (!jogo_completo(lista)) {
        imprimir_tabuleiro_facil(lista);  // Exibe o tabuleiro atual

        printf("Digite a linha (0-8), coluna (0-8) e o número (1-9): ");
        scanf("%d %d %d", &lista->linha, &lista->coluna, &lista->numero);

        if (lista->linha < 0 || lista->linha >= TAM_SUDOKU ||
            lista->coluna < 0 || lista->coluna >= TAM_SUDOKU ||
            lista->numero < 1 || lista->numero > 9) {
            printf("Entrada inválida! Tente novamente.\n");
        } else {
            if (validar_jogada_facil(lista)) {
                printf("Jogada válida!\n");
            } else {
                printf("Jogada inválida. Tente novamente.\n");
            }
        }
    }

    imprimir_tabuleiro_facil(lista);
    printf("Parabéns! Você completou o Sudoku!\n");
}