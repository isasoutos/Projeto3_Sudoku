#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

void solicitar_jogada(jogada *lista) {
    int linha, coluna, numero;

    printf("Digite a linha (0-8), coluna (0-8) e o número (1-9): ");
    scanf("%d %d %d", &linha, &coluna, &numero);

    if (linha < 0 || linha >= TAM_SUDOKU ||
        coluna < 0 || coluna >= TAM_SUDOKU ||
        numero < 1 || numero > 9) {
        printf("Entrada inválida! Tente novamente.\n");
        lista->linha = -1;  // sinaliza jogada inválida
    } else {
        lista->linha = linha;
        lista->coluna = coluna;
        lista->numero = numero;
    }
}

int validar_jogada_facil(jogada * lista) {
    if (lista->sudoku_jogador_facil[lista->linha][lista->coluna] != 0) {
        printf("Essa posição já foi preenchida!\n");
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
