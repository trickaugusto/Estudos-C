#include <stdio.h>
#include <stdlib.h>

/*

3.2.1 Maior de 2 - Elaborar programa que l� dois n�meros quaisquer e mostra na tela uma mensagem indicando qual � o maior, ou se s�o iguais.

*/

int main()
{
    int numero1;
    int numero2;

    printf("Digite o primeiro numero: ");
    scanf(" %d", &numero1);

    printf("Digite o segundo numero: ");
    scanf(" %d", &numero2);

    if(numero1 > numero2){
        printf("%d eh maior que %d", numero1, numero2);

    } else if(numero1 < numero2){
        printf("%d eh menor que %d", numero1, numero2);

    } else{
        printf("%d eh igual ao %d", numero1, numero2);
    }
    return 0;
}
