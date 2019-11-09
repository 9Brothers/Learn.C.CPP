#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>

using namespace std;

int main(int argc, char const *argv[])
{
    int linhas = 3, colunas = 3, i = 0, j = 0;
    int **matriz;

    // alocando memoria para as linhas
    matriz = (int **) new int[linhas];

    for (i = 0; i < linhas; i++)
    {        
        matriz[i] = (int *) new int[colunas];
    }
    
    for (i = 0; i < linhas; i++)
    {
        matriz[i][j] = i;

        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = j;

            printf("%d", matriz[i][j]);
        }

        printf("\n");
    }

    free(matriz);

    return 0;
}