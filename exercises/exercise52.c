#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    int number1, number2, number3;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &number1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &number2);

    printf("\nDigite o terceiro número: ");
    scanf("%d", &number3);

    if (number1 > number2 && number1 > number3)
    {
        // printf("\nif 1\n");
        if (number2 > number3)
        {
            // printf("\nif 1.1\n");
            printf("%d, %d, %d", number3, number2, number1);
        }
        if (number3 >= number2)
        {
            // printf("\nif 1.2\n");
            printf("%d, %d, %d", number2, number3, number1);
        }
    }
    if (number2 > number1 && number2 > number3)
    {
        // printf("\nif 2\n");
        if (number1 > number3)
        {
            printf("%d, %d, %d", number3, number1, number2);
        }
        if (number3 >= number1)
        {
            printf("%d, %d, %d", number1, number3, number2);
        }
    }
    if (number3 > number1 && number3 > number2)
    {
        // printf("\nif 3\n");
        if (number1 > number2)
        {
            printf("%d, %d, %d", number2, number1, number3);
        }
        if (number2 >= number1)
        {
            printf("%d, %d, %d", number1, number2, number3);
        }
    }
    if ((number1 == number2) || (number1 == number3) || (number2 == number3) || (number2 == number1) || (number3 == number1) || (number3 == number2))
    {
        printf("%d, %d, %d", number1, number2, number3);
    }
    
    return 0;
}