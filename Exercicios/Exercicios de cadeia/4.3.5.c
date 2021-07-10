#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*4.3.5 Inserção de caractere 2 - Altere o programa acima para que ele insira um caractere lido do teclado.
Ele repete tudo enquanto o usuário digitar uma cadeia. Se nada for digitado, o programa termina.
------
Finaliza se nao digitou nada.
Pede pra escolher o separador */

int main()
{
    char caracteresDigitado[100];
    int i = 0;
    char separadorDigitado;

    do{
        printf("Escreva a palavra desejada: ");
        scanf(" %s", caracteresDigitado);
        // duas leituras seguidas de SCANF, deixar um espaço antes!

        printf("Escreva o separador desejado: ");
        scanf(" %c", &separadorDigitado);

        int tamanho = strlen(caracteresDigitado);

        for(i = 0; i<tamanho; i++){
            printf("%c", caracteresDigitado[i]);
            if(i != tamanho-1){
                printf("%c", separadorDigitado);
            }
        }
        printf("\n");
    }
    while(strlen(caracteresDigitado) >= 2);
    return 0;
}
