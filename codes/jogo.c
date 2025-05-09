#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>

int jogo_completo(jogada *lista) {
    for (int i = 0; i < TAM_SUDOKU; i++) {
        for (int j = 0; j < TAM_SUDOKU; j++) {
            if (lista->sudoku_jogador_facil[i][j] != lista->sudoku_completo_facil[i][j]) {
                return 0; 
            }
        }
    }
    return 1; 
}

int jogo_completo_medio(jogada *lista) {
    for (int i = 0; i < TAM_SUDOKU; i++) {
        for (int j = 0; j < TAM_SUDOKU; j++) {
            if (lista->jogador_medio[i][j] != lista->completo_medio[i][j]) {
                return 0; 
            }
        }
    }
    return 1; 
}


void jogo(jogada *lista) {
    while (!jogo_completo(lista)) {
        imprimir_tabuleiro_facil(lista);

        while (1) {
            solicitar_jogada(lista);

            if (lista->numero == 0) {
                char opcao;
                printf("\nDeseja salvar seu progresso antes de voltar ao menu? (s/n): ");
                scanf(" %c", &opcao);
                getchar(); 

                if (opcao == 's' || opcao == 'S') {
                    salvar_progresso(lista);
                    printf("Progresso salvo!\n");
                } else {
                    printf("Progresso não salvo.\n");
                }

                printf("Voltando ao menu principal...\n");
                return;
            }

            if (lista->linha != -1) {
                if (validar_jogada_facil(lista)) {
                    printf("Jogada válida!\n");
                    break;
                } else {
                    printf("Jogada inválida. Tente novamente.\n\n");
                    imprimir_tabuleiro_facil(lista);
                }
            }
        }
    }

    imprimir_tabuleiro_facil(lista);
    printf("Parabéns! Você completou o Sudoku!\n");
}


void jogo_medio(jogada *lista) {
 while (!jogo_completo_medio(lista)) {
        imprimir_tabuleiro_medio(lista);

        while (1) {
            solicitar_jogada(lista);

            if (lista->numero == 0) {
                char opcao;
                printf("\nDeseja salvar seu progresso antes de voltar ao menu? (s/n): ");
                scanf(" %c", &opcao);
                getchar(); 

                if (opcao == 's' || opcao == 'S') {
                    salvar_progresso(lista);
                    printf("Progresso salvo!\n");
                } else {
                    printf("Progresso não salvo.\n");
                }

                printf("Voltando ao menu principal...\n");
                return;
            }

            if (lista->linha != -1) {
                if (validar_jogada_medio(lista)) {
                    printf("Jogada válida!\n");
                    break;
                } else {
                    printf("Jogada inválida. Tente novamente.\n\n");
                    imprimir_tabuleiro_medio(lista);
                }
            }
        }
    }

    imprimir_tabuleiro_medio(lista);
    printf("Parabéns! Você completou o Sudoku!\n");
}