#include <stdio.h>
#include <stdlib.h>

/*

4.6.10 Alunos e notas

Implemente um programa que lê uma lista de pares nomes de aluno/notas.
Depois são mostrados na tela os nomes e as notas, juntamente com a quantidade de alunos e a média das notas.


*/


int main()
{
    char nomeDigitado[50][50];
    int x, soma = 0, media, notaDigitada[50], qtdAlunosInformados;

    printf("Quantos alunos tera na lista? ");
    scanf(" %d", &qtdAlunosInformados);

    for(x = 0; x < qtdAlunosInformados; x++){

        printf("Digite o nome: ");
        scanf(" %s", nomeDigitado[x]);

        printf("Digite a nota desse aluno: ");
        scanf(" %d", &notaDigitada[x]);
    }

    printf("\n\nA quantidade de alunos eh: %d\n", qtdAlunosInformados);
    for(x = 0; x < qtdAlunosInformados; x++){

        printf("Aluno: %s. ", nomeDigitado[x]);
        printf("Nota: %d\n\n", notaDigitada[x]);

        soma = soma + notaDigitada[x];
    }
    printf("A media das notas eh: %d", media = soma / qtdAlunosInformados);
    return 0;
}
