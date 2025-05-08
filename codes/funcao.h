#define TAM_SUDOKU 9

// Estrutura criada para melhor disponibilidade das variáveis para os valores do sudoku
typedef struct{
    int linha;
    int coluna;
    int numero;
    int valor;
    int fixo;
    int sudoku_completo_facil[TAM_SUDOKU][TAM_SUDOKU];
    int sudoku_jogador_facil[TAM_SUDOKU][TAM_SUDOKU];
    int completo_medio[TAM_SUDOKU][TAM_SUDOKU];
    int jogador_medio[TAM_SUDOKU][TAM_SUDOKU];
}jogada;

int menu ();
int validar_jogada_facil(jogada *);
int jogo_completo (jogada*);
void imprimir_tabuleiro_facil(jogada *);
void jogar_sudoku(jogada *);
void jogo (jogada *);
void carregar_tabuleiros(jogada*);
void solicitar_jogada(jogada *);
int jogo_completo_medio(jogada *);
int validar_jogada_medio(jogada *);
void imprimir_tabuleiro_medio(jogada *);
void jogo_medio(jogada *);
int jogo_completo_medio(jogada *);
void carregar_tabuleiros_medio(jogada*);