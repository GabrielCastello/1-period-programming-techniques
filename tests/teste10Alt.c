
//Dada a tabela abaixo, observar apenas o colesterol total e
//informar ao final a condição do paciente,
//a depender da sua idade e do seu colesterol total.
//Resultado de imagem para exame de sangue colesterol

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale("LC_ALL", "portuguese");

    int pacientAge, totalColesterol;


    printf("\nInforme a idade do paciente: ");
    scanf(" %i", &pacientAge);

    printf("\nInforme o colesterol total do paciente: ");
    scanf(" %i", &totalColesterol);

    switch (pacientAge)
    {
    case 0 ... 20:



    
        {
            printf("\nColesterol total(%i) no nível desejado !\n", totalColesterol);
        }
        if ((totalColesterol >= 150) && (totalColesterol <= 169))
        {
            printf("\nColesterol total(%i) no nível máximo !\n", totalColesterol);
        }
        if (totalColesterol > 169)
        {
            printf("\nColesterol total(%i) no nível alto !\n", totalColesterol);
        }
        break;

    default:
      if (totalColesterol < 200)
        {
            printf("\nColesterol total(%i) no nível desejado !\n", totalColesterol);
        }
        if ((totalColesterol >= 200) && (totalColesterol <= 239))
        {
            printf("\nColesterol total(%i) no nível máximo !\n", totalColesterol);
        }
        if (totalColesterol > 239)
        {
            printf("\nColesterol total(%i) no nível alto !\n", totalColesterol);
        }
    
        break;
    }
    

    return 0;
}