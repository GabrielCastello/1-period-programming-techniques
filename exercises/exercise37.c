//Faça um algoritmo que leia o nome e
//a três notas de uma disciplina de um aluno 
//e ao final escreva o nome do aluno, 
//sua média e se ele foi aprovado caso 
//a média seja maior que 8.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    char studentName[50], intString[5] = "int", floatString[5] = "float";

    printf("\nInforme o tipo de valor que será utilizado (int ou float): ");
    scanf("%[^\n]s", &valueType);
    // printf("\n%s", valueType);
    if (strncmp(valueType, intString, 20) || strncmp(valueType, floatString, 20))
    {
        printf("\nO tipo de valor escolhido foi: %s", valueType);

        if (strncmp(valueType, intString, 20))
        {
            int valueA, valueB, valueC;
            printf("\nDigite o valor A: ");
            scanf("%i", &valueA);

            printf("\nDigite o valor B: ");
            scanf("%i", &valueB);

            printf("\nDigite o valor C: ");
            scanf("%i", &valueC);

            if (valueA + valueB < valueC)
            {
                printf("\nA soma dos valores A e B é menor que o valor C");
            }
            else
            {
                printf("\nA soma dos valores A e B é maior que o valor C");
            }
        };

        if (strncmp(valueType, floatString, 20))
        {
            float valueA, valueB, valueC;
            printf("\nDigite o valor A: ");
            scanf("%f", &valueA);

            printf("\nDigite o valor B: ");
            scanf("%f", &valueB);

            printf("\nDigite o valor C: ");
            scanf("%f", &valueC);

            if (valueA + valueB < valueC)
            {
                printf("\nA soma dos valores A e B é menor que o valor C");
            }
            else
            {
                printf("\nA soma dos valores A e B é maior que o valor C");
            }
        };
    }
    else
    {
        printf("\nO tipo de valor escolhido %s não é válido", valueType);
    }

    return 0;
}