//Faça um algoritmo que informa se uma pessoa é maior de idade. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_ALL", "portuguese");

    int age;

    printf("\nInforme a idade: ");
    scanf("%d", &age);

    

    if (age >= 18)
    {
        printf("\nA pessoa que tem %d anos é maior de idade\n", age);
    }
    else
    {
        printf("\nA pessoa que tem %d anos é menor de idade\n", age);
    }

    return 0;
}