//Faça um algoritmo para ler 50 lados de quadrados
//e imprimir cada uma das respectivas áreas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

    // setlocale("LC_ALL", "portuguese");

    int squareSidesQty = 5, square[squareSidesQty], squareSide[squareSidesQty], x;
    int area[squareSidesQty];

    for (x = 0; x <= squareSidesQty; x++)
    {
        square[x] = x;
        printf("\n Informe o lado do quadrado %i: ", square[x]);
        scanf(" %i", &squareSide[x]);
        area[x] = squareSide[x] * squareSide[x];
        // printf("\n A área do quadrado %i é %i. \n", square[x], area[x]);
    };

    for (x = 0; x <= squareSidesQty; x++)
    {
       printf("\n A área do quadrado %i é %i. \n", square[x], area[x]);
    };
    

    return 0;
}