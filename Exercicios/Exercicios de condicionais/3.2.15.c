#include <stdio.h>
#include <stdlib.h>

/*

3.2.15 Ano bissexto - Um ano � bissexto se for divis�vel por 4 exceto os s�culos, que s�o bissextos se forem m�ltiplos de 400.
Escreva um programa que determina se um ano � bissexto.

*/


int main()
{
    int anoDigitado;

    printf("Digite o ano: ");
    scanf("%d", &anoDigitado);

    int resto = anoDigitado % 4;

    if(resto == 0){
        printf("O ano eh bissexto");
    } else {
        printf("O ano nao eh bissexto");
    }
    return 0;
}
