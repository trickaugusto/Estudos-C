#include <stdio.h>
#include <stdlib.h>

/* 4.1.1 Egocentrismo - Implemente um programa que mostra seu nome na tela dez vezes. */

int main()
{

    char nomeDigitado[50];
    printf("Digite seu nome: ");
    scanf("%s", nomeDigitado);

    for(int i = 0; i<10; i++){
        printf("%s ", nomeDigitado);
    }
    return 0;
}
