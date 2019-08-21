#include <stdio.h>
#include <locale.h>


int main(void)
{
    setlocale("LC_All", "portuguese");
    float lado, area;

    printf("Informe o valor do lado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A área do quadrado é de %f \n", area);

    return 0;
}