#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

void carregar_tabuleiros(jogada*lista){
    int temp_completo[TAM_SUDOKU][TAM_SUDOKU] = {
        {3, 1, 5, 2, 9, 7, 4, 6, 8},
        {4, 2, 6, 3, 5, 8, 1, 7, 9},
        {7, 9, 8, 4, 6, 1, 3, 2, 5},
        {1, 6, 4, 8, 2, 9, 7, 5, 3},
        {8, 3, 9, 5, 7, 4, 6, 1, 2},
        {5, 7, 2, 1, 3, 6, 8, 9, 4},
        {6, 4, 3, 9, 1, 2, 5, 8, 7},
        {2, 5, 7, 6, 8, 3, 9, 4, 1},
        {9, 8, 1, 7, 4, 5, 2, 3, 6}
    };

    int temp_jogador[TAM_SUDOKU][TAM_SUDOKU] = {
        {3, 1, 0, 0, 9, 0, 4, 0, 8},
        {4, 0, 0, 0, 0, 8, 0, 0, 9},
        {0, 9, 8, 4, 0, 1, 0, 0, 0},
        {0, 6, 0, 0, 0, 9, 7, 5, 0},
        {8, 0, 9, 0, 7, 0, 6, 0, 2},
        {5, 7, 2, 0, 3, 0, 0, 9, 0},
        {0, 4, 3, 0, 1, 0, 5, 8, 7},
        {2, 5, 7, 6, 0, 3, 9, 0, 1},
        {0, 0, 1, 7, 4, 0, 2, 0, 0}
    };

    memcpy(lista->sudoku_completo_facil, temp_completo, sizeof(temp_completo));
    memcpy(lista->sudoku_jogador_facil, temp_jogador, sizeof(temp_jogador));
}

void carregar_tabuleiros_medio(jogada*lista){
    int tabuleiro_completo_medio[TAM_SUDOKU][TAM_SUDOKU] ={
        {6, 9, 2, 5, 8, 3, 7, 4, 1},
        {4, 5, 7, 1, 6, 2, 3, 8, 9},
        {3, 8, 1, 4, 9, 7, 2, 5, 6},
        {8, 1, 4, 2, 7, 9, 6, 3, 5},
        {5, 2, 6, 3, 4, 8, 1, 9, 7},
        {9, 7, 3, 6, 5, 1, 8, 2, 4},
        {7, 3, 8, 9, 1, 5, 4, 6, 2},
        {2, 6, 9, 7, 3, 4, 5, 1, 8},
        {1, 4, 5, 8, 2, 6, 9, 7, 3},
    };
    int tabuleiro_jogador_medio[TAM_SUDOKU][TAM_SUDOKU] ={
        {0, 0, 0, 0, 0, 3, 0, 4, 1},
        {4, 5, 7, 1, 6, 0, 3, 0, 0},
        {3, 8, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 2, 0, 0, 6, 3, 0},
        {5, 0, 0, 0, 4, 0, 1, 0, 0},
        {0, 7, 0, 6, 5, 1, 8, 2, 4},
        {7, 0, 0, 0, 0, 0, 0, 0, 0},
        {2, 0, 0, 7, 3, 4, 0, 0, 0},
        {0, 0, 0, 0, 2, 6, 9, 0, 3},
    };
    memcpy(lista->completo_medio, tabuleiro_completo_medio, sizeof(tabuleiro_completo_medio));
    memcpy(lista->jogador_medio, tabuleiro_jogador_medio, sizeof(tabuleiro_jogador_medio));
}