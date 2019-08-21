//Faça um algoritmo que leia um úmero qualquer e informa se o dobro do número lido é maior do que 100.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    float number;

    printf("\nDigite um número: ");
    scanf("%f", &number);

    if ((number * 2) > 100)
    {
        printf("\nO dobro do número %.2f é maior que 100\n", number);
    }
    else
    {
    }

    return 0;
}