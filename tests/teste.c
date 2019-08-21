#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_All", "portuguese");

    float monthlyWage, hourlyWage, extraHourlyWage, extraWage, totalWage;
    int workHours, extraWorkHours;

    printf("\nInforme seu salário: ");
    scanf("%f", &monthlyWage);

    printf("\nInforme a quantidade de horas trabalhadas no mês e em seguida informe a quantidade de horas extras: ");
    printf("\nHoras normais:");
    scanf("%i", &workHours);
    printf("\nHoras extras a 50%%: ");
    scanf("%i", &extraWorkHours);

    hourlyWage = monthlyWage / workHours;

    extraHourlyWage = hourlyWage + (hourlyWage * 0.50);

    printf("\nO valor de sua hora trabalhada é de: %f, e o valor de sua hora extra é de: %f ", hourlyWage, extraHourlyWage);

    extraWage = extraHourlyWage * extraWorkHours;

    totalWage = extraWage + monthlyWage;

    printf("\nVocê trabalhou %i horas a mais da sua jornada padrão de %i horas.", extraWorkHours, workHours);
    printf("\nSeu salário base é: %f, seu salário extra é: %f, total a receber: %f", monthlyWage, extraWage, totalWage);

    return 0;
}