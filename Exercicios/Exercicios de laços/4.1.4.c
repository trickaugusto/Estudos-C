#include <stdio.h>
#include <stdlib.h>
/* 4.1.3 Caracteres progressivos 1 - Escrever um programa que produza a saída abaixo na tela, para N
linhas e usando um caractere lido do teclado (no exemplo, *). Após mostrar uma vez, o programa
repete o processo, só parando quando N for zero.
4.1.4 Caracteres progressivos 2 - Faça o mesmo que acima para:
*
**
***
****
*****
(...)*/

int main()
{
    char caractereEscolhido;
    int quantidadeLinhas, i, j;

    do{
        printf("Se quiser parar o programa, digite 0.\n\nDigite a quantidade de linhas: ");
        scanf(" %d", &quantidadeLinhas);

        printf("Digite o caractere: ");
        scanf(" %c", &caractereEscolhido);

        for (i = 1; i <= quantidadeLinhas; i++){
            for (j = 1; j <= i; j++){
                printf("%c", caractereEscolhido);
            }

        printf("\n");
        }

    }while(quantidadeLinhas != '0');

    return 0;

}
