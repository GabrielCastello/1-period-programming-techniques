//Um médico classifica seus pacientes com códigos de acordo com a tabela a baixo.
//Faça um algoritmo para auxiliar esse médico a prescrever o tratamento correto para cada tipo de caso TipoTratamento
//A - Repouso, alimentação leve.
//B - Vacina, medicação para controle.
//C - Não há vacina, medicação para auxiliar o sistema imunológico.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale("LC_ALL", "portuguese");
    char pacientType, treatmentA[50] = "A - Repouso, alimentação leve.", treatmentB[50] = "B - Vacina, medicação para controle.", treatmentC[50] = "C - Não há vacina, medicação para auxiliar o sistema imunológico.";

    printf("\nDigite o tipo do paciente: ");
    scanf(" %c", &pacientType);

    printf("\nTipo do paciente: %c", pacientType);

    switch (pacientType)
    {
    case 'A':
        printf("\nTratamento: %s\n", treatmentA);
        break;
    case 'B':
        printf("\nTratamento: %s\n", treatmentB);
        break;
    case 'C':
        printf("\nTratamento: %s\n", treatmentC);
        break;
    default:
    printf("\nSem tratamento programado.\n");
        break;
    }

    return 0;
}