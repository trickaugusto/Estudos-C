#include <stdio.h>
#include <stdlib.h>

/*

3.2.3 Divisão - Escrever um programa que lê dois números e efetua uma divisão, mas somente se o divisor for diferente de zero;
Quando isto ocorrer, é mostrada uma mensagem de erro apropriada.

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
