#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosDigitados[10];
    // ^^ declarado o VETOR
    int i = 0;
    for (i = 0; i <= 9; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numerosDigitados[i]);
    }
    printf("Os numeros digitados foram: \n");
    for (i = 0; i <= 9; i++) {
        printf("%d\n", numerosDigitados[i]);
        // no caso do printf não preciso do & por que não estou substituindo nenhum valor, apenas puxando o que tem na posição pra informar
    }
    return 0;
}
