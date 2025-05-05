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

void jogo(jogada *lista) {
    while (!jogo_completo(lista)) {
        imprimir_tabuleiro_facil(lista);

        solicitar_jogada(lista);

        if (lista->linha != -1) { // Se a entrada foi válida
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
