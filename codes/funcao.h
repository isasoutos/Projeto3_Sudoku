#define TAM_SUDOKU 9

typedef struct{
    int linha;
    int coluna;
    int numero;
    int vidas;
    int sudoku_completo_facil[TAM_SUDOKU][TAM_SUDOKU];
    int sudoku_jogador_facil[TAM_SUDOKU][TAM_SUDOKU];
    int completo_medio[TAM_SUDOKU][TAM_SUDOKU];
    int jogador_medio[TAM_SUDOKU][TAM_SUDOKU];
}jogada;

//main.c
void sair_do_jogo();

//menu.c
int menu ();

//gabarito_tabuleiro.c
void carregar_tabuleiros(jogada*);
void carregar_tabuleiros_medio(jogada*);

//imprimir_tabuleiro.c
void imprimir_tabuleiro_facil(jogada *);
void imprimir_tabuleiro_medio(jogada *);

//jogo.c
int jogo_completo (jogada*);
int jogo_completo_medio(jogada *);
void jogo (jogada *);
void jogo_medio(jogada *);

//solicitar_jogada.c
void solicitar_jogada(jogada *);

//validar_jogada.c
int validar_jogada_facil(jogada *);
int validar_jogada_medio(jogada *);

//salvar_arquivo_binário.c
void salvar_progresso(jogada *jogador);
int carregar_progresso(jogada *jogador);

// Vidas
void perder_vida(jogada *);