#include <stdio.h>
#include <stdlib.h>

/*

4.6.2 Maior e menor - Escrever um programa que preencha um vetor de 100 elementos com valores inteiros aleatórios,
e identifique o maior e o menor número gerados, e respectivas posições.

Vetor 100 elementos; OK
Gerar randomicamente números inteiros; OK
Identificar o maior OK
    e qual sua posição;
Identificar o menor OK
    e qual sua posição; ?

http://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/#:~:text=Para%20gerar%20um%20n%C3%BAmero%20aleat%C3%B3rio,problema%20bastante%20comum%20em%20programa%C3%A7%C3%A3o.&text=Quando%20esta%20fun%C3%A7%C3%A3o%20%C3%A9%20chamada,0%20e%20a%20constante%20RAND_MAX.

*/


int main()
{
    srand(time(NULL));
    int i, posicaoMaior = 0, posicaoMenor = 0, numerosAleatorios[101];

    for(i = 0; i < 101; i++){
        numerosAleatorios[i] = rand() % 100 + 1;
        printf("%d ", numerosAleatorios[i]);
    }

    int menor = numerosAleatorios[0], maior = numerosAleatorios[0];

    for (i = 0; i < 100; i++){
        if (numerosAleatorios[i] > maior) {
            maior = numerosAleatorios[i];
            posicaoMaior = i;
        }
        if (numerosAleatorios[i] < menor){
            menor = numerosAleatorios[i];
            posicaoMenor = i;
        }
    }
    printf("\n\nO maior numero eh o %d e a posicao eh %d\n", maior, posicaoMaior);
    printf("O menor numero eh o %d e a posicao eh %d\n\n", menor, posicaoMenor);
    return 0;
}
