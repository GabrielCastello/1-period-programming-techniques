//Faça um algoritmo para ler um vetor de 6 números inteiros,
//fazer uma cópia do mesmo em outro vetor e imprimir os dois simultaneamente(elemento de cada um lado a lado),
//sendo que o original na ordem inversa da ordem de entrada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    int numbersQty = 6, number[numbersQty], numberCopy[numbersQty], i, iCopy = numbersQty;
    for (i = 0; i < numbersQty; i++)
    {
        printf("Informe um número inteiro: ");
        scanf(" %i", &number[i]);
        numberCopy[iCopy - 1] = number[i];
        iCopy--;
    }

        printf("\n*************************************************************");
    for (i = 5; i >= 0; i--)
    {
        printf("\n* Array original posição[%i] = %i | Array cópia posição[%i]= %i *", i, number[i], i, numberCopy[i]);
    }
        printf("\n*************************************************************");
        printf("\n");

    return 0;
}