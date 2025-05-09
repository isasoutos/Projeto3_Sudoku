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
        fflush(stdout);

        fgets(entrada, sizeof(entrada), stdin);
        if (sscanf(entrada, "%d", &numero) == 1) {
            if (numero >= 0 && numero <= 9) {
                return numero;
            } else {
                printf("Número fora do intervalo (0 a 9).\n");
            }
        } else {
            printf("Entrada inválida! Digite apenas números de 1 a 9.\n");
        }
    }
}


void solicitar_jogada(jogada *lista) {

    int linha, coluna, numero;


    linha = ler_numero_seguro("Digite a linha (1-9 ou 0 para sair): ");
    if (linha == 0) {
        lista->numero = 0;
        lista->linha = -1;
        return;
    }

    coluna = ler_numero_seguro("Digite a coluna (1-9 ou 0 para sair): ");
    if (coluna == 0) {
        lista->numero = 0;
        lista->linha = -1;
        return;
    }

    numero = ler_numero_seguro("Digite o número (1-9 ou 0 para sair): ");
    if (numero == 0) {
        lista->numero = 0;
        lista->linha = -1;
        return;
    }

    lista->linha = linha - 1;
    lista->coluna = coluna - 1;
    lista->numero = numero;
}