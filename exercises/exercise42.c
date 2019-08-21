//Faça um algoritmo que pergunte uma letra e informe que a letra está correta caso a letra informada seja ‘A’.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    char letra[20];

    printf("\nInforme a letra: ");
    scanf("%s", &letra);

int a = strncmp(letra, "a", 20)

printf("%i", )
    printf(strncmp(letra, "a", 20));



    if (strncmp(letra, "a", 20) == 0)
    {
        printf("\nA letra informada está correta\n");
    }
    else
    {
        printf("\nA letra informada está incorreta\n");
    }
    return 0;
}