#include <stdio.h>
#include <stdlib.h>

/* 4.3.8 Prenome - Escrever um programa que l� um nome completo e mostra na tela o prenome, isto �,
o primeiro nome. Suponha que o nome nunca come�a com um espa�o. O programa repete esses
passos at� que o nome lido seja uma cadeia nula (o usu�rio n�o digitou nada). */


int main()
{
    char nomeDigitado[50];

    printf("Digite seu nome completo: ");
    scanf("%s", nomeDigitado);

    int tamanho = strlen(nomeDigitado);

    for(int i = 0; i<tamanho; i++){
        printf("%c", nomeDigitado[i]);
        if(nomeDigitado[i] == ' '){
            break;
        }
    }
    return 0;
}
