#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void){
    
    setlocale("LC_ALL", "portuguese");
    
    float numero1, numero2, media;

    printf("\nDigite o primeiro valor: ");
    scanf("%f", &numero1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &numero2);

    media = (numero1 + numero2)/2;

    printf("\nA média dos valores informados é: %6.3f ", media);

    system("read -p 'Press Enter to continue...' var");
}