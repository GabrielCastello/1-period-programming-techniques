//Faça um algoritmo para armazenar 30 nomes de pessoas
//e depois perguntar um nome ao usuário para pesquisar
//dentre os nomes lidos para informar se este nome foi digitado,
//caso tenha, informar a ordem desse nome.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    int personsQty = 3, queryReturn = 0;
    char personsNames[personsQty][50], searchInput[50];

    for (int i = 0; i < personsQty; i++)
    {
        printf("Informe o %i nome: ", i + 1);
        scanf(" %[^\n]s", &personsNames[i]);
    }

    printf("\nInforme o nome a ser buscado: ");
    scanf(" %[^\n]s", &searchInput);

    for (int i = 0; i < personsQty; i++)
    {
        if (strcmp(searchInput, personsNames[i]) == 0)
        {
            printf("\nO nome %s foi localizado na posição %i\n", personsNames[i], i);
            queryReturn = 1;
        }

        if ((i == personsQty - 1) && queryReturn != 1)
        {
            printf("\nNome buscado não foi encontrado !\n");
        }
    }
    return 0;
}