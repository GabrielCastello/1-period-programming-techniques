//Faça um algoritmo para imprimir uma matriz de pontos (.) com 20 colunas e 5 linhas.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void)
{
    setlocale(LC_ALL, "portuguese");

    int i;
    for (i = 0; i < 20; i++)
    {
        printf(".");
    }
    for (i = 0; i < 5; i++)
    {
        printf(".\n");
    }

    printf("\n");

    return 0;
}