//Um contador necessita calcular o total de notas fiscais emitidas durante um período.
//Só que ele precisa imprimir um relatório contendo os valores das notas fiscais e o total calculado.
//Faça um programa que ajude o contador na referida tarefa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    int invoiceQty;
    float total = 0;
    printf("\nInforme a quantidade de notas ficais a serem calculadas: ");
    scanf(" %i", &invoiceQty);

    float invoiceValue[invoiceQty];

    for (int i = 0; i < invoiceQty; i++)
    {
        printf("\nInforme o valor da %i nota fiscal: ", i + 1);
        scanf(" %f", &invoiceValue[i]);
        total += invoiceValue[i];
    }
    
    printf("\n*********************");
    for (int i = 0; i < invoiceQty; i++)
    {
        printf("\n* Nota fiscal %i = %i *", i + 1, invoiceValue[i]);
    }
    printf("\n*********************");

    printf("\n***************************************************************");
    invoiceQty > 1 ? printf("\n* Foram inseridas %i notas fiscais, com um valor total de %2.2f *", invoiceQty, total) : printf("\n* Foi inserida %i nota fiscal, com um valor total de %2.2f *", invoiceQty, total);
    printf("\n***************************************************************\n");

    return 0;
}