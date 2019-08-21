#include <stdio.h>
#include <string.h>

int main(void)
{
    float salario, novoSalario, ValorAumento;
    int taxa;

    printf("Informe o seu salário atual: \n");
    scanf("%f", &salario);

    printf("Informe a taxa em %%: ");
    scanf("%d", &taxa);

    printf("O salário informado foi: R$%.2f e a taxa informada foi de %d%% :\n", salario, taxa);

    novoSalario = salario * (taxa/100);
    ValorAumento = novoSalario - salario;

    printf("Seu salário com aumento de 10%%: R$%.2f\nSeu salário sofreu um reajuste no valor de: R$%.2f\n", novoSalario, ValorAumento);

    return 0;
}