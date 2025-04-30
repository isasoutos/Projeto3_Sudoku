#include <stdio.h>
#include <string.h>
#include "funcao.h"
#include <stdlib.h>
#include <time.h>

int suduko_completo_facil[TAM_SUDOKU][TAM_SUDOKU] = {
    {3, 1, 5, 2, 9, 7, 4, 6, 8},
    {4, 2, 6, 3, 5, 8, 1, 7, 9},
    {7, 9, 8, 4, 6, 1, 3, 2, 5},
    {1, 6, 4, 8, 2, 9, 7, 5, 3},
    {8, 3, 9, 5, 7, 4, 6, 1, 2},
    {5, 7, 2, 1, 3, 6, 8, 9, 4},
    {6, 4, 3, 9, 1, 2, 5, 8, 7},
    {2, 5, 7, 6, 8, 3, 9, 4, 1},
    {9, 8, 1, 7, 4, 5, 2, 3, 6}
};