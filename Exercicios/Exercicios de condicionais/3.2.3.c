#include <stdio.h>
#include <stdlib.h>

/*

3.2.3 Divis�o - Escrever um programa que l� dois n�meros e efetua uma divis�o, mas somente se o divisor for diferente de zero;
Quando isto ocorrer, � mostrada uma mensagem de erro apropriada.

*/

int main()
{
    int dividendo;
    int divisorDigitado;
    int resultado;

    printf("Digite o dividendo: ");
    scanf(" %d", &dividendo);

    printf("Digite o divisor: ");
    scanf(" %d", &divisorDigitado);

    if(divisorDigitado == 0){
        printf("divisor invalido");
    } else {
        printf("A conta eh: %d / %d = %d", dividendo, divisorDigitado, resultado = dividendo/divisorDigitado);
    }
    return 0;
}
