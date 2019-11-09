#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra
{
    int ordem;
    char letra;
    char texto[255];
};

int main(int argc, char const *argv[])
{
    struct palavra primeiraPalavra;

    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'h';
    strcpy(primeiraPalavra.texto, "heber");

    printf("Ordem: %d, Primeira letra: %c, Palavra:  %s\n", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);

    struct palavra palavras[3];
    palavras[0].ordem = 0;
    palavras[1].ordem = 1;
    palavras[2].ordem = 2;
    
    palavras[0].letra = 'h';
    palavras[1].letra = 'e';
    palavras[2].letra = 'c';

    strcpy(palavras[0].texto, "heber");
    strcpy(palavras[1].texto, "edna");
    strcpy(palavras[2].texto, "carmen");

    printf("\n");

    for (size_t i = 0; i < 3; i++)
    {
        printf("Ordem: %d, Primeira letra: %c, Palavra:  %s\n", palavras[i].ordem, palavras[i].letra, palavras[i].texto);
    }
    

    return 0;
}