//Fazer um programa em C para informar, em relação à idade de uma pessoa,
//a sua condição de eleitor:
//Idade    Mensagem
//0-16     Não pode votar
//16-17    Voto facultativo
//18-59    Voto Obrigatório
//60-∞     Voto opcional

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale("LC_ALL", "portuguese");

    int personAge;
    char
        message1[50] = "Não pode votar",
        message2[50] = "Não pode votar",
        message3[50] = "Voto facultativo",
        message4[50] = "Voto Obrigatório",
        message5[50] = "Voto Opcional";

    printf("\nDigite a idade da pessoa: ");
    scanf(" %i", &personAge);

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