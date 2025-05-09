#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

int deseja_continuar_salvo() {
    char resposta;
    printf("Deseja continuar o jogo salvo? (s/n): ");
    scanf(" %c", &resposta);
    return (resposta == 's' || resposta == 'S');
}

int main() {
    int nivel;
    jogada *lista = malloc(sizeof(jogada));
    int carregado = 0;

    if (carregar_progresso(lista)) {
        if (deseja_continuar_salvo()) {
            printf("Progresso carregado com sucesso!\n");
            imprimir_tabuleiro_facil;
            carregado = 1;
        } else {
            remove("save.bin");
            printf("Novo jogo será iniciado.\n");
        }
    }

    do {
        nivel = menu();

        if (!carregado) {
            if (nivel == 1) {
                carregar_tabuleiros(lista);
            } else if (nivel == 2) {
                carregar_tabuleiros_medio(lista);
            }
        }

        if (nivel == 1) {
            jogo(lista);
        } else if (nivel == 2) {
            jogo_medio(lista);
        } else if (nivel == 3) {
            sair_do_jogo();
        }

    } while (nivel != 3);

    salvar_progresso(lista);
    free(lista);
    return 0;
}

void sair_do_jogo() {
    printf("\nSaindo do jogo... Até logo!\n");
    exit(0); 
} 
