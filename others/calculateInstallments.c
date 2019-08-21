#include <stdio.h>
#include <string.h>

int main(void)
{
    int installmentsQtd;
    float purchaseValue, installmentsValue;

    printf("Informe o valor total da compra: \n");
    scanf("%f", &purchaseValue);
    printf("Informe a quantidade de parcelas: \n");
    scanf("%d", &installmentsQtd);

    printf("O valor total da compra foi: R$%.2f\n", purchaseValue);
    printf("O valor total de parcelas foi: %d\n", installmentsQtd);

    installmentsValue = purchaseValue / installmentsQtd;

    printf("O valor de cada uma das %d parcelas é de: R$%.2f\n", installmentsQtd, installmentsValue);

    return 0;
}