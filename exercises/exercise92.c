//Faça um algoritmo para calcular o produto dos termos da série:
//p, p+1, p+2,..., s-2, s-1, s.
//Onde o usuário deverá informar p e s como os limites da série.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void)
{
    setlocale(LC_ALL, "portuguese");

    int startLimit, endLimit, counter = 0, i, intervalLength;
    float totalSum = 0;




    printf("\nInforme o valor inicial da série: ");
    scanf(" %i", &startLimit);
    printf("\nInforme o valor final da série: ");
    scanf(" %i", &endLimit);

    if ((startLimit != NULL) && (endLimit != NULL))
    {
        intervalLength = endLimit - startLimit;
        int interval[intervalLength];
        
        for (i = startLimit; i <= endLimit; i++)
        {
            interval[counter] = i;
            totalSum += i;
            printf("\n%i - Total: %f", interval[counter], totalSum);
            counter++;
        }
    }

    printf("\nO total dos %i valores informados foi de: %2.2f\n", counter, totalSum);

    return 0;
}