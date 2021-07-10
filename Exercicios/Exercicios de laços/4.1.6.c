#include <stdio.h>
#include <stdlib.h>
/* 4.1.6 Caracteres progressivos 3 - Idem acima, para o formato abaixo seguindo a seguinte regra:

1               -> *
2 + 1 (de cima) -> ***
3 + 3 (de cima) -> ******
4 + 6 (de cima) -> **********
5 + 10 ( cima)  -> ***************
6 + 15 = 21
7 + 21 = 28
8 + 28 = 36
9 + 36 = 45
10 + 45
*/


int main()
{
    char caractereEscolhido;
    int quantidadeLinhas, i, j;

    do{
        int calculo = 0;

        printf("Se quiser parar o programa, digite 0.\n\nDigite a quantidade de linhas: ");
        scanf(" %d", &quantidadeLinhas);

        printf("Digite o caractere: ");
        scanf(" %c", &caractereEscolhido);

        for (i = 0; i < quantidadeLinhas ; i++){
            for (j = 0; j <= calculo; j++){
                printf("%c", caractereEscolhido);
            }
        calculo = j + i + 1;
        printf("\n");
        }

    }while(quantidadeLinhas != '0');

    return 0;

}
