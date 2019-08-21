#include<stdio.h>
#include <string.h>
/* demo.c:  My first C program on a Linux */
int main(void)
{
 char name1[20] = "gabriel", name2[20], teste[20];
 int lado, area, comparassion;

     
 /* printf("Olá ! Testando C compiler !\n"); */
 printf("Olá ! Testando C compiler ! \nMe chamo %s.\n", name1);
 /* printf("Me chamo %s.\n", name); */

 printf("Digite um nome: \n");
 scanf("%s", &name2);

 printf("O nome digitado foi: %s\n",name2);

comparassion = strncmp(name1, name2, 20);

printf("%d", comparassion);

if (comparassion){
    printf("Você digitou meu nome\n");
}else{
    printf("Não temos o mesmo nome\n");
}


// Calculo de Area

/*  printf("Vamos calcular a area do quadrado!\n");

 printf("Digite o valor do lado: ");
 scanf(" %d", &lado);
 
 area = (lado*lado);
 printf("A área é: %d \n", area); */
 
 return 0;
}