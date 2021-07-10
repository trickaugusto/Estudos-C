#include <stdio.h>
#include <stdlib.h>

/*4.3.4 Inserção de caractere 1
Implementar um programa que insere hífens entre as letras de uma
cadeia de caracteres, como em f-a-b-u-l-o-s-o.*/

int main()
{
    char caracteresDigitado[100];
    int i = 0;
    printf("Escreva a palavra desejada: ");
    scanf("%s", caracteresDigitado);

    int tamanho = strlen(caracteresDigitado);

    for(i = 0; i<tamanho; i++){
        printf("%c", caracteresDigitado[i]);
        if(i != tamanho-1){
            printf("-");
        }
    }
    return 0;
}
