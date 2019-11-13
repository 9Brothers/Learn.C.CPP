#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

#define TAM 10

void InitVetor(int *vetor);
void ImprimeVetor(int *vetor, int *length);
void Push(int *pilha, int valor, int *topo);
bool Pop(int *pilha, int *topo, int *valorRetirado);

int main(int argc, char const *argv[])
{    
    int pilha[0];
    int topo = -1;
    int valorRetirado;

    Push(pilha, 0, &topo);
    Push(pilha, 1, &topo);
    Push(pilha, 2, &topo);

    Pop(pilha, &topo, &valorRetirado);
    cout << "\nValor retirado: " << valorRetirado << "\n";

    Push(pilha, 3, &topo);
    Push(pilha, 4, &topo);
    Push(pilha, 5, &topo);
    Push(pilha, 6, &topo);
    
    Pop(pilha, &topo, &valorRetirado);
    cout << "\nValor retirado: " << valorRetirado << "\n";

    Push(pilha, 7, &topo);
    Push(pilha, 8, &topo);
    Push(pilha, 9, &topo);
    Push(pilha, 10, &topo);
    
    Pop(pilha, &topo, &valorRetirado);
    cout << "\nValor retirado: " << valorRetirado << "\n\n";

    ImprimeVetor(pilha, &topo);

    cout << "\n\n";

    return 0;
}

void ImprimeVetor(int *vetor, int *length) {

    for (size_t i = 0; i < *length + 1; i++)
    {
        cout << vetor[i] << " - ";
    }
}

void Push(int *pilha, int valor, int *topo) {
    
    *topo = *topo + 1;

    if(*topo > 0) 
    {
        int buffer[*topo];
    
        for (size_t i = 0; i < *topo; i++)
        {
            buffer[i] = pilha[i];
        }
        
        // pilha[*topo];

        for (size_t i = 0; i < *topo; i++)
        {
            pilha[i] = buffer[i];
        }
    }

    pilha[*topo] = valor;
}

bool Pop(int *pilha, int *topo, int *valorRetirado) {

    if (*topo == -1)
    {
        cout << "\nPilha vazia\n";

        return false;
    }

    *valorRetirado = pilha[*topo];

    *topo = *topo - 1;
    
    int buffer[*topo + 1];

    for (size_t i = 0; i < *topo; i++)
    {
        buffer[i] = pilha[i];
    }

    pilha = buffer;

    return true;    
}

