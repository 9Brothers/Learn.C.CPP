#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int c;
    char conteudoTexto[255];

    FILE *file;
    file = fopen("text/texto.txt", "r");

    // caso arquivo exista
    if (file)
    {
        int i = 0;

        // getc(file) = pega o código ANSI do caracter
        // EOF = End of File        
        while ((c = getc(file)) != EOF)
        {
            
            printf("%c", c);

            conteudoTexto[i] = c;
            i++;
        }
        
        fclose(file);

        printf("\n\n");

        printf("%s\n\n", conteudoTexto);
    }
    
    int tamanhoConteudoTexto = strlen(conteudoTexto);

    for (size_t i = 0; i < tamanhoConteudoTexto; i++)
    {
        printf("%c", conteudoTexto[i]);
    }

    printf("\n\n");
    
    return 0;
}