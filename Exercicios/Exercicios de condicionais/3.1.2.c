#include <stdio.h>
#include <stdlib.h>

/*

3.1.2 M�ltipla escolha 1 - Elaborar uma quest�o de m�ltipla escolha de uma disciplina que esteja cursando ou um tema de interesse,
com um enunciado e cinco alternativas, sendo uma correta ou incorreta. Escrever um programa que mostra a quest�o na tela,
pede a resposta correta e informa ao usu�rio se este acertou ou errou.

Quais notas formam o acorde de C (DO)?

*/

int main()
{
    int opcaoEscolhida;
    mostrarMenu();
    scanf("%d", &opcaoEscolhida);

    if(opcaoEscolhida == 3){
        printf("Voce acertou a questao\n");
        return 0;
    }
    printf("Voce errou a questao\n");
    return 0;
}

void mostrarMenu()
{
    printf("Quais notas apertadas juntas no teclado formam o acorde de C?\n\n1 - C / E / D\n2 - D / E / B\n3 - C / E / G\n4 - G / B / C\n5 - C / E / B\n\nResponda com o numero da opcao: ");

}
