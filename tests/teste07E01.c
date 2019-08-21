#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{

    setlocale("LC_All", "portuguese");

    float exemptionQuota = 1500.00, tax = 0.5, productValue;

    printf("\nInforme o valor do produto: ");
    scanf("%f", &productValue);

    if (productValue > exemptionQuota)
    {
        float diferenceFromQuota = productValue - exemptionQuota, taxedValue = diferenceFromQuota + (diferenceFromQuota * tax);
        printf("\n O produto de valor %f excedeu a cota de %f, com a diferença de preço em: %f, sendo taxado no valor de: %f\n", productValue, exemptionQuota, diferenceFromQuota, taxedValue);
    }
    else
    {
        printf("\n O produto de valor %f não excedeu a cota de %f, portanto não será taxado.\n", productValue, exemptionQuota);
    }
    
    

    return 0;
}