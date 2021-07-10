#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*4.3.2 Soma de códigos ASCII - Escreva um programa que lê uma cadeia de caracteres
quaisquer e mostra a soma dos códigos ASCII dos seus caracteres.
Isto é repetido até que a cadeia lida seja nula.*/

int main()
{
    char nome[100];
    int soma = 0;
    printf("Escreva uma cadeia de caracteres: ");
    fgets(nome, 100, stdin);
    //scanf("%s", str);

    for (int x=0;x<strlen(nome); x++) {
        // strlen usado pra verificar o tamanho TOTAL da string
        printf("%d\n", nome[x]);
        soma = soma + nome[x];
    }
    printf("A soma final e: %d", soma);
    return 0;
}
