#include <stdio.h>
#include <stdlib.h>

/* 4.3.8 Prenome - Escrever um programa que lê um nome completo e mostra na tela o prenome, isto é,
o primeiro nome. Suponha que o nome nunca começa com um espaço. O programa repete esses
passos até que o nome lido seja uma cadeia nula (o usuário não digitou nada). */


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
