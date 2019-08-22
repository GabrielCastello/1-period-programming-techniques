// Faça uma função para receber dois valores inteiros A e B e calcular A*B usando somas internamente, retornando ao final o produto.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int produto(int a, int b)
{
  int p = 0;
  for (int i = 1; i <= b; i++)
  {
    p += a;
  }
  return p;
}

int main(void)
{
  int a, b;
  scanf(" %d%d", &a, &b);
  printf("\nResultado: %i\n", produto(a, b));
  return 0;
}