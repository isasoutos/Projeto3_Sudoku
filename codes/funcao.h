#define TAM_SUDOKU 9

// Criando uma estrutura para melhor disponibilidade das variaveis para os valores do sudoku
typedef struct{
    int linha;
    int coluna;
    int numero;
    int valor;
    int fixo;
    int sudoku_completo_facil[TAM_SUDOKU][TAM_SUDOKU];
    int sudoku_jogador_facil[TAM_SUDOKU][TAM_SUDOKU];
}jogada;

void validar_jogada(jogada *);

int menu ();
