#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4.3.6 Substitui��o de caractere - Elabore um programa que troca todos os espa�os de uma cadeia
lida por um caractere tamb�m lido. O programa repete isso at� que seja lida uma cadeia nula (neste
caso o caractere n�o � lido).

Ler o que foi digitado
Ler o caractere escolhido
No lugar do espa�o colocar um caractere escolhido
*/

int main()
{
    char caracteresDigitados[100];
    char caracterDoEspaco;

    printf("Digite a cadeia desejada: ");
    fgets(caracteresDigitados, 100, stdin);

    printf("Digite o caractere para substituir o espaco: ");
    scanf(" %c", &caracterDoEspaco);

    int tamanho = strlen(caracteresDigitados);

    for(int i = 0; i<tamanho; i++){
        if(caracteresDigitados[i] == ' '){
            printf("%c", caracterDoEspaco);
            i++;
        }
        printf("%c", caracteresDigitados[i]);
    }
    return 0;
}
