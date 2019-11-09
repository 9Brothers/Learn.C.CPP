#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int linhas = 3, colunas = 3, i = 0, j = 0;
    int **matriz;

    // alocando memoria para as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    for (i = 0; i < linhas; i++)
    {        
        matriz[i] = (int *) malloc(colunas * sizeof(int));
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