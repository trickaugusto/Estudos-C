#include <stdio.h>
#include <stdlib.h>

/*
# Menu
    - 1 Somar
    - 2 Subtrair
    - 3 Dividir
    - 4 Multiplicar
    - 5 Sair

Ao informar os numeros, somente passar quando for informado um numero válido
*/

int main()
{
    int opcaoEscolhida, primeiroNumero, segundoNumero, resultado;

    do{

    printf("Menu:\n\n1- Somar\n2- Subtrair\n3- Dividir\n4- Multiplicar\n5- Sair\n\nDigite a opcao desejada: ");
    scanf(" %d", &opcaoEscolhida);

    } while(opcaoEscolhida != 1 && opcaoEscolhida != 2 && opcaoEscolhida != 3 && opcaoEscolhida != 4 && opcaoEscolhida != 5);

    if(opcaoEscolhida == 5){
        printf("Finalizado");
        return 0;
    }

    do{
        printf("Digite o primeiro numero: ");
        scanf(" %d", &primeiroNumero);

        printf("Digite o segundo numero: ");
        scanf(" %d", &segundoNumero);

    } while(primeiroNumero != (int)primeiroNumero || segundoNumero != (int)segundoNumero);

    switch(opcaoEscolhida){
        case 1:
            printf("%d + %d = %d", primeiroNumero, segundoNumero, resultado = primeiroNumero + segundoNumero);
            break;
        case 2:
            printf("%d - %d = %d", primeiroNumero, segundoNumero, resultado = primeiroNumero - segundoNumero);
            break;
        case 3:
            printf("%d / %d = %d", primeiroNumero, segundoNumero, resultado = primeiroNumero / segundoNumero);
            break;
        case 4:
            printf("%d * %d = %d", primeiroNumero, segundoNumero, resultado = primeiroNumero * segundoNumero);
            break;
    }

    return 0;
}
