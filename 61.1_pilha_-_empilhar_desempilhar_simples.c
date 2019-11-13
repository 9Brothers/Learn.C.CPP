#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 7

void ImprimeVetor(int *vetor, int tamanho);
void Push(int pilha[TAM], int valor, int *topo);
int Pop(int pilha[TAM], int *topo);
bool PilhaVazia(int topo);
bool PilhaCheia(int topo, int tamanho);
int * ConstrutorPilha(int tamanho);
int PilhaTamanho(int *topo);
bool TryPilhaGet(int *pilha, int *item, int posicao, int *topo);

int main(int argc, char const *argv[])
{    
    int topo = -1;
    int *pilha = ConstrutorPilha(TAM);

    Push(pilha, 2, &topo);
    Push(pilha, 4, &topo);
    Push(pilha, 6, &topo);
    Push(pilha, 8, &topo);
    Push(pilha, 10, &topo);
    Push(pilha, 12, &topo);
    Push(pilha, 14, &topo);
    Push(pilha, 16, &topo);
    Push(pilha, 18, &topo);
    Push(pilha, 20, &topo);
    Push(pilha, 22, &topo);
    int valorRetirado = Pop(pilha, &topo);

    ImprimeVetor(pilha, PilhaTamanho(&topo));

    printf("\nValor retirado: %d\n", valorRetirado);

    int item;
    if (TryPilhaGet(pilha, &item, 3, &topo))
    {
        printf("\npilha[%d] = %d\n", 3, item);
    }
    
    return 0;
}

void ImprimeVetor(int *vetor, int tamanho) 
{
    printf("\n");

    for (size_t i = 0; i < tamanho; i++)
    {
        printf("%d - ", vetor[i]);
    }

    printf("\n");
}

void Push(int *pilha, int valor, int *topo) 
{
    
    if (!PilhaCheia(*topo, TAM))
    {
        *topo = *topo + 1;

        pilha[*topo] = valor;
    }
}

int Pop(int *pilha, int *topo) 
{
    int valor;

    if (!PilhaVazia(*topo))
    {
        valor = pilha[*topo];

        pilha[*topo] = 0;

        *topo = *topo - 1;
    }
    
    return valor;    
}

bool PilhaVazia(int topo) 
{
    if (topo == -1) {

        printf("\nA pilha está vazia\n");

        return true;
    }
    
    return false;
}

bool PilhaCheia(int topo, int tamanho) 
{
    if (topo == tamanho - 1) {

        printf("\nA pilha está cheia\n");

        return true;
    }
    
    return false;
}

int * ConstrutorPilha(int tamanho) {

    int *pilha = (int *) calloc(tamanho, sizeof(int));

    for (size_t i = 0; i < 10; i++)
    {
        pilha[i] = 0;
    }

    return pilha;
}

int PilhaTamanho(int *topo) {

    return *topo + 1;
}

bool TryPilhaGet(int *pilha, int *item, int posicao, int *topo) {

    if (PilhaVazia(*topo))
    {
        return false;
    }
    else if (posicao <= *topo)
    {
        *item = pilha[posicao];

        return true;
    }
    else
    {
        printf("Item inexistente");

        return false;
    }
}