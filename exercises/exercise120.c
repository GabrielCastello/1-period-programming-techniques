//Faça uma função para receber dois valores inteiros A e B e calcular A/B usando subtrações internamente, retornando ao final a parte inteira da divisão.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divisao(int a, int b)
{
  int quociente = 0;
  while (a >= b)
  {
    a -= b;
    quociente++;
  }
  return quociente;
}

int main(void)
{
  int a, b;
  scanf(" %d%d", &a, &b);
  printf("\nResultado: %i\n", divisao(a, b));
  return 0;
}