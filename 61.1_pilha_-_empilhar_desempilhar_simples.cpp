#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

#define TAM 10

void InitVetor(int *vetor);
void ImprimeVetor(int *vetor);
void Push(int pilha[TAM], int valor, int *topo);
int Pop(int pilha[TAM], int *topo);

int main(int argc, char const *argv[])
{
    int pilha[TAM];
    int topo = -1;

    InitVetor(pilha);
    Push(pilha, 0, &topo);
    Push(pilha, 1, &topo);
    Push(pilha, 2, &topo);
    Push(pilha, 3, &topo);
    Push(pilha, 4, &topo);
    Push(pilha, 5, &topo);
    Push(pilha, 6, &topo);
    Push(pilha, 7, &topo);
    Push(pilha, 8, &topo);
    Push(pilha, 9, &topo);
    Push(pilha, 10, &topo);
    int valorRetirado = Pop(pilha, &topo);

    ImprimeVetor(pilha);

    cout << "\nValor retirado: " << valorRetirado << "\n";

    return 0;
}

void InitVetor(int *vetor) {
    
    for (size_t i = 0; i < TAM; i++)
    {
        vetor[i] = 0;
    }
}

void ImprimeVetor(int *vetor) {

    for (size_t i = 0; i < TAM; i++)
    {
        cout << vetor[i] << " - ";
    }
}

void Push(int pilha[TAM], int valor, int *topo) {
    
    if (*topo == TAM - 1)
    {
        cout << "\nPilha cheia\n";
    }
    else
    {
        *topo = *topo + 1;

        pilha[*topo] = valor;
    }
}

int Pop(int pilha[TAM], int *topo) {

    int valor;

    if (*topo == -1)
    {
        cout << "\nPilha vazia\n";
    }
    else
    {
        valor = pilha[*topo];

        pilha[*topo] = 0;

        *topo = *topo - 1;
    }
    
    return valor;    
}