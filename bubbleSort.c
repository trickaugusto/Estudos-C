#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i, numero, alteracoes = 0;
    for (i = 0; i < 5; i++) {
        printf("Digite um n�mero para entrar no vetor: ");
        scanf("%d", &numero);
        vetor[i] = numero;
    }
    printf("Vetor antes da ordena��o: \n");
    for (i = 0; i < 5; i++){
        numero = vetor[i];
        printf("%d\n", numero);
    }
    alteracoes = 1;
    int temporario = 0;
    while(alteracoes > 0) {
        alteracoes = 0;
        for (i = 0; i < 4; i++) {
            if (vetor[i] > vetor [i + 1]) {
                temporario = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temporario;
                alteracoes = alteracoes + 1;
            }
        }
    }
    printf("Resultado da ordena��o: \n\n");
    for (i = 0; i < 5; i++){
        numero = vetor[i];
        printf("%d\n", numero);
    }
    return 0;
}
