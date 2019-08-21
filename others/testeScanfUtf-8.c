/* #include <stdio.h>
#include <string.h>

int main(void)
{

    char teste[20];

    printf("Informe a String: \n");
    scanf("%s", &teste);

    printf("A string informado foi: %s\n", teste);

    return 0;
} */

//Programa para conversão de temperatura
#include <stdio.h>
// Programa principal
int main(void)
{
    // Declaração das variáveis do programa principal
    float t1;
    float t2;
    // Lê valor da temperatura a ser entrado via teclado
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &t1);
    // faz a conversão
    t2 = 1.8 * t1 + 32;
    // exibe resultado
    printf("%f", t2);
    // finaliza o programa principal
    return 0;
}