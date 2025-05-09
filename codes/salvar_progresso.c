#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

void salvar_progresso(jogada *jogador) {
    FILE *arquivo = fopen("save.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao salvar o progresso.\n");
        return;
    }
    fwrite(jogador, sizeof(jogada), 1, arquivo);
    fclose(arquivo);
    printf("Progresso salvo com sucesso!\n");
}


int carregar_progresso(jogada *jogador) {
    FILE *arquivo = fopen("save.bin", "rb");
    if (arquivo == NULL) {
        return 0; 
    }
    fread(jogador, sizeof(jogada), 1, arquivo);
    fclose(arquivo);
    return 1; 
}
