//Faça um algoritmo que leia dois números quaisquer e informa se o primeiro é maior do que o segundo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    float number1, number2;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &number1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &number2);

    if (number1 > number2)
    {
        printf("\nO número %.2f é maior que o número %.2f\n", number1, number2);
    }
    else
    {
    }

    return 0;
}