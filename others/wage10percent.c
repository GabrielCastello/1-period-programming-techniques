#include <stdio.h>
#include <string.h>

int main(void)
{
    float salario, novoSalario, ValorAumento;

    printf("Informe o seu salário atual: \n");
    scanf("%f", &salario);

    printf("O salário informado foi: R$%.2f\n", salario);

    novoSalario = salario * 1.1;
    ValorAumento = novoSalario - salario;

    printf("Seu salário com aumento de 10%%: R$%.2f\nSeu salário sofreu um reajuste no valor de: R$%.2f\n", novoSalario, ValorAumento);

    return 0;
}