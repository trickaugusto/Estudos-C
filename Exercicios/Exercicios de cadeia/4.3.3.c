#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4.3.3 Concatena��o de caracteres:

- Elabore um programa que l� uma quantidade qualquer de n�meros de 32 a 254. OK
- Mostra na tela uma cadeia formada pela concatena��o dos caracteres ASCII de cada n�mero.
- Se um dos n�meros estiver fora de faixa, � mostrada uma mensagem de erro e o programa espera a corre��o. OK
- O final da entrada de n�meros ocorre quando for lido zero. OK */

int main()
{
    int numeroDigitado;

    do{
        printf("Digite um numero de 32 a 254: ");
        scanf("%d", &numeroDigitado);

        if (numeroDigitado > 0 && numeroDigitado < 32 || numeroDigitado > 254){
            printf("Numero invalido\n");
        }else{
            printf("%c\n", numeroDigitado);
        }
    }
    while(numeroDigitado != 0);
    printf("Programa finalizado");
    return 0;
}
