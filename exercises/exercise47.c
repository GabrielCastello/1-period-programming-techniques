//Faça um algoritmo para ler dois valores numéricos e apresentar a diferença do maior pelo menor

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    float value1, value2, diff;

    printf("\nInforme o valor1: ");
    scanf("%f", &value1);

    printf("\nInforme o valor2: ");
    scanf("%f", &value2);

    if (value1 > value2)
    {
        diff = value1 - value2;
        printf("\nA diferança do valor maior para o menor é: %.2f\n", diff);
    }
    if (value2 > value1)
    {
        diff = value2 - value1;
        printf("\nA diferança do valor maior para o menor é: %.2f\n", diff);
    }

    return 0;
}