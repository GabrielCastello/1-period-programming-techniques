#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_All", "portuguese");

    int tankLiters;
    float gasPrice, pricePerLiter, distri_reven, ethanolCost, ICMS, CIDE_PISPASEP_COFINS, PETR4;

    printf("\nInforme a quantidade de litros do tanque de combustível: ");
    scanf("%i", &tankLiters);

    printf("\nInforme o preço da gasolina abastecida: ");
    scanf("%f", &gasPrice);

    pricePerLiter = tankLiters / gasPrice;

    distri_reven = pricePerLiter * 0.17;
    ethanolCost = pricePerLiter * 0.12;
    ICMS = pricePerLiter * 0.28;
    CIDE_PISPASEP_COFINS = pricePerLiter * 0.07;
    PETR4 = pricePerLiter * 0.36;

    printf("\nPreço por litro: %f", pricePerLiter);

    printf("\nTaxa Distribuição e Revenda: %f", distri_reven);
    printf("\nTaxa Etanol: %f", ethanolCost);
    printf("\nTaxa ICMS: %f", ICMS);
    printf("\nTaxa CIDE e PIS/PASEP e COFINS: %f", CIDE_PISPASEP_COFINS);
    printf("\nTaxa Petrobras: %f\n", PETR4);

    return 0;
}