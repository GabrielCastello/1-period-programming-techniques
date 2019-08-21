// Um hotel cobra R$ 300,00 por diária e mais uma taxa adicional de serviços.
// Se o número de diárias for menor que 15 a taxa é de R$ 20,00.
// Se o número de diárias for igual a 15 a taxa é de R$ 14,00 e se o número for maior que 15 a taxa é de R$ 12,00.
// Considerando-se que se tenha 4 pessoas e para cada pessoa tenha-se um registro contendo seu nome e o número de diárias.
// Faça um algoritmo que imprima o nome e o total a pagar de cada pessoa e imprimir também o total ganho pelo hotel e o número total de diárias.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale("LC_ALL", "portuguese");

    char lodger1Name[50], lodger2Name[50], lodger3Name[50], lodger4Name[50];
    float hotelRate = 300.00, serviceFeeLT15 = 20.00, serviceFeeEQ15 = 14.00, serviceFeeGT15 = 20.00, lodger1Days, lodger1Bill, lodger2Days, lodger2Bill, lodger3Days, lodger3Bill, lodger4Days, lodger4Bill, hotelRevenue, totalDays;

    printf("\nDigite o nome do primeiro hóspede: ");
    scanf(" %[^\n]s", &lodger1Name);

    printf("\nInforme a quantidade de diárias: ");
    scanf("%f", &lodger1Days);

    printf("\nDigite o nome do segundo hóspede: ");
    scanf(" %[^\n]s", &lodger2Name);

    printf("\nInforme a quantidade de diárias: ");
    scanf("%f", &lodger2Days);

    printf("\nDigite o nome do terceiro hóspede: ");
    scanf(" %[^\n]s", &lodger3Name);

    printf("\nInforme a quantidade de diárias: ");
    scanf("%f", &lodger3Days);

    printf("\nDigite o nome do quarto hóspede: ");
    scanf(" %[^\n]s", &lodger4Name);

    printf("\nInforme a quantidade de diárias: ");
    scanf("%f", &lodger4Days);

    totalDays = lodger1Days + lodger2Days + lodger3Days + lodger4Days;


    printf("\nPrimeiro hóspede: %s", lodger1Name);
    switch (lodger1Days)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
    printf("\nSegundo hóspede: %s", lodger2Name);
    printf("\nTerceiro hóspede: %s", lodger3Name);
    printf("\nQuarto hóspede: %s", lodger4Name);

    return 0;
}