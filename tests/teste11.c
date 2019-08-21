#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

int i, triangleQty = 5, areaTriangle[triangleQty];


for (i = 1; i <= triangleQty; i++)
{
    areaTriangle[i] = i;
    printf("\nInforme a a do triangulo %i %i\n", i, areaTriangle[i]);
}


    return 0;
}