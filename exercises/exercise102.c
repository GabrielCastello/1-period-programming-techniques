//Faça um algoritmo para imprimir as combinações simples possíveis 
//de dois elementos de cada um dos conjuntos 
//A={1,2,3,4,5,6} e B={13,14,15,16,17,18}. 
//Ex.: (1,13),(1,14),(1,15),...,(6,17),(6,18). 
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