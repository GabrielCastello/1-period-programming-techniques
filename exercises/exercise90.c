//Faça um algoritmo para ler 30 valores de pedidos de clientes e
//calcule, ao final, o total de pedidos e o valor das comissões de venda a 10%
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void)
{
    setlocale(LC_ALL, "portuguese");

    int totalOrders = 5, order[totalOrders], i;
    float totalOrdersPrice, commission;

    for (i = 0; i < totalOrders; i++)
    {
        printf("\nInforme o valor do pedido %i: ", i + 1);
        scanf(" %i", &order[i]);
    }

    for (i = 0; i < totalOrders; i++)
    {
        totalOrdersPrice += order[i];
    }

    commission = totalOrdersPrice * 0.1;

    printf("\nO valor total dos pedidos foi de: %2.2f, e a comissão foi de: %2.2f\n", totalOrdersPrice, commission);

    return 0;
}