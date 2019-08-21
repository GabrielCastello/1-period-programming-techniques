// Faça um algoritmo para ler quatro valores referentes a quatro notas escolares de um aluno e
// imprimir uma mensagem dizendo que o aluno foi aprovado, se o valor da média escolar for maior ou igual a 7.
// se o valor da média ou menor que 7, solicitar a nota de exame, somar com o valor da média e obter nova média.
// Se a nova média for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno foi aprovado em exame.
// Se o aluno não foi aprovado, indicar uma mensagem informando esta condição.
// Apresentar junto com as mensagens o valor da média do aluno, para qualquer condição.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale("LC_ALL", "portuguese");

    float nota1, nota2, nota3, nota4, media, exame;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);
    printf("\nDigite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7)
    {
        printf("\nAluno aprovado com nota %2.2f\n", media);
    }
    if (media < 7)
    {
        printf("\nDigite a nota de exame: ");
        scanf("%f", &exame);

        media = (media + exame) / 2;
        if (media >= 5)
        {
            printf("\nAluno aprovado com nota %2.2f em exame\n", media);
        }
        else
        {
            printf("\nAluno reprovado com média: %2.2f\n", media);
        }
    }


    return 0;
}