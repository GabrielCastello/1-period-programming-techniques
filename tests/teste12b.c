//Chico tem 1,50 metro e cresce 2 centímetros por ano,
//enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
//Usando repetições, construa um algoritmo que calcule e
//imprima quantos anos serão necessários para que Zé seja maior que Chico.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    int chicoHeight = 150, chicoGrowth = 2, zeHeight = 110, zeGrowth = 3, year = 0;

    while (zeHeight <= chicoHeight)
    {
        // printf("\nAltura Chico: %icm", chicoHeight);
        // printf("\nAltura Ze: %icm", zeHeight);
        // printf("\nAnos passados: %i\n", year);
        zeHeight += zeGrowth;
        chicoHeight += chicoGrowth;
        year++;
    }
    printf("\nAltura Chico: %icm", chicoHeight);
    printf("\nAltura Ze: %icm", zeHeight);
    printf("\nAnos passados: %i\n", year);
    return 0;
}
