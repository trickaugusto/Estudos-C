#include <stdio.h>
#include <stdlib.h>

/*

4.6.11 Ordena��o - Escrever um programa que preencha at� 20 n�meros inteiros para um vetor de forma aleat�ria.
Pergunte ao usu�rio 1 - Ordenar crescente, 2 - Ordenar decrescente. Fa�a a ordena��o do vetor conforme indicado pelo usu�rio.

*/

int main()
{
    srand(time(NULL));
    int i = 0, alteracoes = 0, temporario = 0, opcaoDesejada, numerosAleatorios[20];

    for(i = 0; i < 20; i++){
        numerosAleatorios[i] = rand() % 100 + 1;
        printf("%d ", numerosAleatorios[i]);
    }

    printf("\n\nAgora, escolha a opcao desejada:\n\n1- Ordenar de forma crescente.\n2- Ordenar de forma decrescente.\n\n");
    scanf("%d", &opcaoDesejada);

    if(opcaoDesejada == 1){
        alteracoes = 1;
        while(alteracoes > 0){
            alteracoes = 0;
            for (i = 0; i < 19; i++) {
                if (numerosAleatorios[i] > numerosAleatorios [i + 1]) {
                    temporario = numerosAleatorios[i];
                    numerosAleatorios[i] = numerosAleatorios[i + 1];
                    numerosAleatorios[i + 1] = temporario;
                    alteracoes = alteracoes + 1;
                }
            }
        }
    } else{
        while(alteracoes < 20) {
            alteracoes = 21;
            for (i = 0; i < 20; i++) {
                if (numerosAleatorios[i] > numerosAleatorios [i - 1]) {
                    temporario = numerosAleatorios[i];
                    numerosAleatorios[i] = numerosAleatorios[i - 1];
                    numerosAleatorios[i - 1] = temporario;
                    alteracoes = alteracoes - 1;
                    }
                }
        }
    }

    printf("Resultado da ordenacao: \n\n");
    for (i = 0; i < 20; i++){
        printf("%d ", numerosAleatorios[i]);
    }
    return 0;
}



