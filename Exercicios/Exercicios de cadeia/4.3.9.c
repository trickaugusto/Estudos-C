#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4.3.9 Iniciais - Escreva um programa que l� um nome de pessoa e identifica suas iniciais, segundo o
seguinte crit�rio: uma inicial � o primeiro caractere ou o caractere que segue um espa�o. */


int main()
{
    char nomeDigitado[50];
    int i = 0;

    printf("Digite o seu nome: ");
    fgets(nomeDigitado, 50, stdin);

    printf("%c", nomeDigitado[i]);

    int tamanho = strlen(nomeDigitado);

    for(i = 0; i<tamanho; i++){
        if(nomeDigitado[i] == ' '){
            printf("%c", nomeDigitado[i+1]);
        }
    }
    printf("\nprograma finalizado");
    return 0;
}
