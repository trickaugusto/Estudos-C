#include <stdio.h>
#include <stdlib.h>

/* 3.2.2 Maior de 3 - Fa�a um programa que l� tr�s n�meros diferentes e mostra na tela uma mensagem indicando qual � o maior.*/

int main()
{

    int numero1;
    int numero2;
    int numero3;

    printf("Digite o primeiro numero: ");
    scanf(" %d", &numero1);

    printf("Digite o segundo numero: ");
    scanf(" %d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf(" %d", &numero3);

    if(numero1 > numero2 && numero1 > numero3){
        mostrarMaiorNumero(numero1);

    } else if(numero2 > numero1 && numero2 > numero3){
        mostrarMaiorNumero(numero2);

    } else if(numero3 > numero1 && numero3 > numero2){
        mostrarMaiorNumero(numero3);

    } else{
        printf("Todos iguais");
    }

    return 0;
}

void mostrarMaiorNumero(int maiorNumero)
{
    printf("parabens o maior numero eh %d", maiorNumero);
}
