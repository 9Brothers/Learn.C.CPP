#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int BuscaSimples(int vetor[TAM], int valorPocurado);

int main(int argc, char const *argv[])
{
    int vetor[TAM] = { 1, 23, 44, 56, 63, 72, 90, 98, 5, 3 };
    int valorProcurado;
    int posicao = -1;

    for (size_t i = 0; i < TAM; i++)
    {
        printf("%d, ", vetor[i]);
    }
    
    printf("\nQual número deseja encontrar?\n");
    scanf("%d", &valorProcurado);

    posicao = BuscaSimples(vetor, valorProcurado);
    
    if (posicao >= 0)
    {
        printf("\nO valor foi encontrado na posição %d do vetor\n\n", posicao);    
    }
    else 
    {
        printf("\nO valor não foi encontrado :(\n\n");
    }
    
    return 0;
}

int BuscaSimples(int vetor[TAM], int valorProcurado) {

    int posicao = -1;

    for (size_t i = 0; i < TAM; i++)
    {
        if (vetor[i] == valorProcurado)
        {
            posicao = i;

            break;
        }
    }

    return posicao;
}