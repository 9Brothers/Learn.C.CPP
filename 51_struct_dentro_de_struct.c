#include <stdio.h>
#include <stdlib.h>
#include <string.h>;

typedef struct Data {
    int dia;
    int mes;
    int ano;
}Data;

typedef struct Aluno {
    int id;
    char nome[50];
    Data nascimento;
}Aluno;



int main(int argc, char const *argv[])
{
    Aluno aluno1;
    aluno1.id = 16;
    strcpy(aluno1.nome, "Heber");
    aluno1.nascimento.dia = 7;
    aluno1.nascimento.mes = 4;
    aluno1.nascimento.ano = 1991;

    printf("Id: %d, Nome: %s, Nascido em: %d/%d/%d\n\n", aluno1.id, aluno1.nome, aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);


    return 0;
}