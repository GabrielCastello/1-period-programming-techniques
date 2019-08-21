//Faça um programa que leia o nome e o total de votos obtidos por 4 candidatos e
//o total de votos em branco e nulo,
//a partir daí o programa deverá dizer o percentual de votos nulos e em branco na eleição
//e o nome do candidato eleito.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale("LC_ALL", "portuguese");
    int candidate1Votes, candidate2Votes, candidate3Votes, candidate4Votes, whiteVotes, nullVotes, totalVotes;
    char candidateName1[60] = "", candidateName2[60] = "", candidateName3[60] = "", candidateName4[60] = "";
    float whiteVotesPercentage, nullVotesPercentage;

    printf("\nDigite o nome do primeiro candidato: ");
    scanf(" %[^\n]s", candidateName1);
    printf("\nDigite a quantidade de votos do primeiro candidato: ");
    scanf(" %i", &candidate1Votes);

    printf("\nDigite o nome do segundo candidato: ");
    scanf(" %[^\n]s", candidateName2);
    printf("\nDigite a quantidade de votos do segundo candidato: ");
    scanf(" %i", &candidate2Votes);

    printf("\nDigite o nome do terceiro candidato: ");
    scanf(" %50[0-9a-zA-Z ]", candidateName3);
    printf("\nDigite a quantidade de votos do terceiro candidato: ");
    scanf(" %i", &candidate3Votes);

    printf("\nDigite o nome do quarto candidato: ");
    scanf(" %50[0-9a-zA-Z ]", candidateName4);
    printf("\nDigite a quantidade de votos do quarto candidato: ");
    scanf(" %i", &candidate4Votes);

    printf("\nDigite a quantidade de votos brancos: ");
    scanf(" %i", &whiteVotes);

    printf("\nDigite a quantidade de votos nulos: ");
    scanf(" %i", &nullVotes);

    totalVotes = candidate1Votes + candidate2Votes + candidate3Votes + candidate4Votes + whiteVotes + nullVotes;

    whiteVotesPercentage = (((float)whiteVotes / totalVotes) * 100);
    nullVotesPercentage = (((float)nullVotes / totalVotes) * 100);

    if (candidate1Votes > candidate2Votes && candidate1Votes > candidate3Votes && candidate1Votes > candidate4Votes)
    {
        printf("\nO candidado %s foi eleito com %i votos !", candidateName1, candidate1Votes);
    }
    else if (candidate2Votes > candidate1Votes && candidate2Votes > candidate3Votes && candidate2Votes > candidate4Votes)
    {
        printf("\nO candidado %s foi eleito com %i votos !", candidateName2, candidate2Votes);
    }
    else if (candidate3Votes > candidate1Votes && candidate3Votes > candidate2Votes && candidate3Votes > candidate4Votes)
    {
        printf("\nO candidado %s foi eleito com %i votos !", candidateName3, candidate3Votes);
    }
    else if (candidate4Votes > candidate1Votes && candidate4Votes > candidate2Votes && candidate4Votes > candidate3Votes)
    {
        printf("\nO candidado %s foi eleito com %i votos !", candidateName4, candidate4Votes);
    }
    else if (candidate1Votes == candidate2Votes || candidate1Votes == candidate3Votes || candidate1Votes == candidate4Votes ||
             candidate2Votes == candidate3Votes || candidate2Votes == candidate4Votes ||
             candidate3Votes == candidate4Votes)
    {
        printf("\nNenhum candidato foi eleito, haverá segundo turno !");
    }

    printf("\nPercentual de votos brancos: %2.2f", whiteVotesPercentage);
    printf("\nPercentual de votos nulos: %2.2f\n", nullVotesPercentage);

    return 0;
}