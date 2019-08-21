#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50], occupation[50];
    int age;
    float rawWage, netWage, updatedWage, gratification;
 
    printf("\nInforme seu nome: ");
    // scanf(" %50[0-9a-zA-Z ]", &name);
    scanf(" %[^\n]s", &name);

    printf("\nInforme seu cargo: ");
    scanf(" %50[0-9a-zA-Z ]", &occupation);

    printf("\nInforme sua idade: ");
    scanf(" %d", &age);

    printf("\nInforme seu salário bruto: ");
    scanf(" %f", &rawWage);

    //Wage reajust
    updatedWage = rawWage + (rawWage * 0.38);

    //Gratification    
    gratification = updatedWage * 0.2;

    //NetWage
    netWage = updatedWage - (updatedWage * 0.15);

    printf("\nNome: %s \nIdade: %d \nCargo: %s", name, age, occupation);
    printf("\nSalário reajustado: %f \nGratificação: %f \nSalário Liquido: %f\n", updatedWage, gratification, netWage);

    return 0;
}