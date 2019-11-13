#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int BuscaBinaria(int vetor[TAM], int valorPocurado);

int main(int argc, char const *argv[])
{
    
    int vetor[TAM] = { 1, 3, 5, 23, 44, 56, 63, 72, 90, 98 };
    int valorProcurado;
    int posicao = -1;

    for (size_t i = 0; i < TAM; i++)
    {
        printf("%d, ", vetor[i]);
    }
    
    printf("\nQual número deseja encontrar?\n");
    scanf("%d", &valorProcurado);

    posicao = BuscaBinaria(vetor, valorProcurado);
    
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

int BuscaBinaria(int vetor[TAM], int valorProcurado) {

    int posicaoEncontrada = -1;
    int esquerda = 0;       // limite da esquerda
    int direita = TAM - 1;  // limite da direira
    int meio;               // onde o cursor está

    while (esquerda <= direita)
    {
        meio = (esquerda + direita) / 2;

        if (valorProcurado == vetor[meio])
        {
            posicaoEncontrada = meio;

            break;
        }

        if (vetor[meio] < valorProcurado)
        {
            esquerda = meio + 1;
        }
        else
        {
            direita = meio - 1;
        }
    }
    
    return posicaoEncontrada;
}