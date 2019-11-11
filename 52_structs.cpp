#include <stdio.h>
#include <iostream>
#include <string.h>
#include <new>

using namespace std;

struct Fruta
{
    string cor;
    string nome;
};


int main(int argc, char const *argv[])
{
    Fruta *fruta = new Fruta; 

    fruta->cor = "amarelo";
    fruta->nome = "banana";

    cout << "Fruta: " << fruta->nome << ", Cor: " << fruta->cor << "\n";


    Fruta *frutas = new Fruta[2];
    frutas[0].cor = "vermelho";
    frutas[0].nome = "morango";
    frutas[1].cor = "verde";
    frutas[1].nome = "abacate";

    for (size_t i = 0; i < 2; i++)
    {
        cout << "Fruta: " << frutas[i].nome << ", Cor: " << frutas[i].cor << "\n";
    }
    

    return 0;
}