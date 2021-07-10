#include <stdio.h>
#include <stdlib.h>
/*
4.6.1 Média - Escrever um programa que leia até 20 números inteiros para um vetor e calcule a média dos valores.

Ler até 20 números;
Calcular a média

Limitadores:
Se não for preenchido os 20 espaços;
A média tem que ser baseada no que foi digitado, não na qtd total do vetor;

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
