#include <stdio.h>
#include <stdlib.h>
/*
4.6.1 M�dia - Escrever um programa que leia at� 20 n�meros inteiros para um vetor e calcule a m�dia dos valores.

Ler at� 20 n�meros;
Calcular a m�dia

Limitadores:
Se n�o for preenchido os 20 espa�os;
A m�dia tem que ser baseada no que foi digitado, n�o na qtd total do vetor;

*/


int main()
{
    int i = 0, soma = 0, media = 0, numeroDigitado[21];
    char opcaoEscolhida;

    do{
        printf("Digite um numero: ");
        scanf(" %d", &numeroDigitado[i]);

        printf("Deseja digitar mais numeros? s / n\n");
        scanf(" %c", &opcaoEscolhida);

        soma = numeroDigitado[i] + soma;

        i++;

    }while(opcaoEscolhida == 's');

    printf("A media dos numeros eh: %d", media = soma / i);
    return 0;
}
