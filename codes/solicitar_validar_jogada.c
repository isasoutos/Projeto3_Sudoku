#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int ler_numero_seguro(const char *mensagem) {
    char entrada[100];
    int numero;
    while (1) {
        printf("%s", mensagem);
        fgets(entrada, sizeof(entrada), stdin);
        if (sscanf(entrada, "%d", &numero) == 1) {
            if (numero >= 1 && numero <= 9) {
                return numero;
            } else {
                printf("Número fora do intervalo (1 a 9).\n");
            }
        } else {
            printf("Entrada inválida! Digite apenas números de 1 a 9.\n");
        }
    }
}

void solicitar_jogada(jogada *lista) {
    int linha, coluna, numero;

    linha = ler_numero_seguro("Digite a linha (1-9): ");
    coluna = ler_numero_seguro("Digite a coluna (1-9): ");
    numero = ler_numero_seguro("Digite o número (1-9): ");

    if (linha < 1 || linha > 9 ||
        coluna < 1 || coluna > 9 ||
        numero < 1 || numero > 9) {
        
    } else {
        lista->linha = linha -1;
        lista->coluna = coluna -1;
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