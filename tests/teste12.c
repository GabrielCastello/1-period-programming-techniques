//Escrever um algoritmo que leia um valor n que indica quantos valores devem ser lidos para m valores inteiros e positivos, com leitura de um valor de cada vez.
//Para cada valor m lido,o algoritmo deve informar o somatório dos inteiros de 1 até m e o fatorial de m.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    int valueN, i;

    printf("\nInforme a quantidade de valores a serem lidos:  ");
    scanf(" %i", &valueN);

    int values[valueN];

    for (i = 0; i < valueN; i++)
    {
        printf("\nInforme um valor inteiro:  ");
        scanf(" %i", &values[i]);
        int sum = 0, fatorial = values[i];
        for (int sumCounter = 1; sumCounter <= values[i]; sumCounter++)
        {
            sum += sumCounter;
        }
        printf("\nSoma: %i\n", sum);
        if ((values[i] == 0) || (values[i] == 1)) printf("\nFatorial: %i\n", fatorial = 1);
        else
        {
            for (int fatorialCounter = values[i]; fatorialCounter >= 1; fatorialCounter--)
            {
                if (fatorialCounter < values[i]) fatorial = fatorial * fatorialCounter;
                
            }
            printf("\nFatorial: %i\n", fatorial);
        }
    }
    return 0;
}
