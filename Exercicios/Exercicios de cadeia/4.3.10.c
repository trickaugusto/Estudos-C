#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4.3.10 Invers�o de cadeia - Elaborar um programa que l� uma cadeia de caracteres e mostra-a
invertida na tela. Ap�s, o programa volta para ler outra, assim fazendo at� que a cadeia nula seja
nula, isto �, sem nenhum caractere. */

int main()
{
    char caracteresDigitados[100];

    printf("Digite a palavra desejada: ");
    scanf("%s", caracteresDigitados);

    int tamanho = strlen(caracteresDigitados);

    for(int i = tamanho-1; i >= 0; i--) {
        printf("%c", caracteresDigitados[i]);
    }
    return 0;
}
