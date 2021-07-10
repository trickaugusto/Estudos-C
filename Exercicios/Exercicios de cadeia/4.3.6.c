#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4.3.6 Substituição de caractere - Elabore um programa que troca todos os espaços de uma cadeia
lida por um caractere também lido. O programa repete isso até que seja lida uma cadeia nula (neste
caso o caractere não é lido).

Ler o que foi digitado
Ler o caractere escolhido
No lugar do espaço colocar um caractere escolhido
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
