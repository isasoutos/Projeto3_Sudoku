#define TAM_SUDOKU 9

// Criando uma estrutura para melhor disponibilidade das variaveis para os valores do sudoku
typedef struct{
    int linha;
    int coluna;
    int numero;
    int valor;
    int fixo;
}jogada;