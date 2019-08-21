//Faça um algoritmo para ler dois números quaisquer e apresentar sua soma, caso esse somatório seja superior a 10.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    float number1, number2, sum;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &number1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &number2);

    sum = number1 + number2;

    if (sum > 10)
    {
        printf("\nA soma dos números %.2f e %.2f é: %.2f\n", number1, number2, sum);
    }
    else
    {
    }

    return 0;
}