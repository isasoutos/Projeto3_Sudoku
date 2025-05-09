#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>

int ler_numero_seguro(const char *mensagem) {
    int numero;

    while (1) {
        printf("%s", mensagem);
        fflush(stdout);

        if (scanf("%d", &numero) != 1 || numero < 0 || numero > 9) {
            // Limpa o buffer e imprime a mensagem de erro
            while(getchar() != '\n'); // Limpa o buffer de entrada
            printf("Entrada inválida! Digite apenas números de 1 a 9 ou 0 para sair.\n");
        } else if (numero == 0 || (numero >= 1 && numero <= 9)) {
            return numero;
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