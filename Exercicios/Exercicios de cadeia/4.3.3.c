#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4.3.3 Concatenação de caracteres:

- Elabore um programa que lê uma quantidade qualquer de números de 32 a 254. OK
- Mostra na tela uma cadeia formada pela concatenação dos caracteres ASCII de cada número.
- Se um dos números estiver fora de faixa, é mostrada uma mensagem de erro e o programa espera a correção. OK
- O final da entrada de números ocorre quando for lido zero. OK */

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
