#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[30] , lastName[30];
    
    printf("Informe o seu nome: \n");
    scanf("%s", &name);

    printf("Informe o seu sobrenome: \n");
    scanf("%s", &lastName);

    printf("O seu nome completo é: %s %s\n", name, lastName);

    return 0;
}