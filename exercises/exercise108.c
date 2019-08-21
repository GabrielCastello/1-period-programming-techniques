//Faça um algoritmo para armazenar 20 números e imprimi-los na ordem de entrada,
//porém com uma marca (*) junto aos valores maiores do que 10.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    int numbersQty = 20, number[numbersQty], i;
    for (i = 1; i <= numbersQty; i++)
    {
        i <= 10 ? printf("\n%i\n", i) : printf("\n%i*\n", i);
    }
    return 0;
}