//Faça um programa que contenha um módulo que monte um menu de opções na tela,
//este menu deve apresentar as seguintes opções: 1- Somar, 2-Subtrair, 3-Dividir, 4-Multiplicar.
//Para cada uma das opções o programa principal deve direcionar a um módulo para realizar a respectiva operação.
//O menu deve aparecer ao final de cada operação escolhida pelo usuário, onde opção 0 (zero) deve terminar o programa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addition()
{
  float x, y;
  printf("\n Digite o primeiro valor: ");
  scanf(" %f", &x);
  printf("\n Digite o segundo valor: ");
  scanf(" %f", &y);

  printf("%f", x + y);
}
void subtraction()
{
  float x, y;
  printf("\n Digite o primeiro valor: ");
  scanf(" %f", &x);
  printf("\n Digite o segundo valor: ");
  scanf(" %f", &y);

  printf("%f", x - y);
}
void division()
{
  float x, y;
  printf("\n Digite o primeiro valor: ");
  scanf(" %f", &x);
  printf("\n Digite o segundo valor: ");
  scanf(" %f", &y);

  printf("%f", x / y);
}
void multiplication()
{
  float x, y;
  printf("\n Digite o primeiro valor: ");
  scanf(" %f", &x);
  printf("\n Digite o segundo valor: ");
  scanf(" %f", &y);

  printf("%f", x * y);
}
int menu()
{
  int opcao;

  printf("\n 0-Sair");
  printf("\n 1-Somar");
  printf("\n 2-Subtrair");
  printf("\n 3-Multiplicar");
  printf("\n 4-Dividir");

  scanf(" %i", &opcao);
  return opcao;
}

int main()
{
  int opcao;
  do
  {
    opcao = menu();
    switch (opcao)
    {
    case 1:
      addition();
      break;
    case 2:
      subtraction();
      break;
    case 3:
      multiplication();
      break;
    case 4:
      division();
      break;

    default:
      break;
    }
  } while (opcao != 0);
  return 0;
}