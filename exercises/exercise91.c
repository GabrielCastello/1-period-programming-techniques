//Faça um algoritmo que calcule a média aritmética de vários valores inteiros positivos.
//O final da leitura acontecerá quando for lido um valor negativo.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void)
{
    setlocale(LC_ALL, "portuguese");

    int value = 0, valueSum = 0, counter = 0;
    float mean = 0;

    while (value >= 0)
    {
        printf("\nInforme um valor númerico: ");
        scanf(" %i", &value);
        if (value >= 0)
        {
            valueSum += value;
            counter++;
            mean = (float)valueSum / (float)counter;
        }
    }
    printf("\nO total dos %i valores informados foi de: %i. E a média dos valores informados é de: %2.2f\n", counter, valueSum, mean);

    return 0;
}