#include <stdio.h>
#include <stdlib.h>

/*

3.1.3 Múltipla escolha 2 - Enriqueça o programa acima da questão de múltipla escolha, incluindo uma outra questão de outro tema.
início do programa, ofereça ao usuário a escolha de qual tema quer responder.

*/

int main()
{
    int opcaoEscolhida;
    int questaoDesejada;

    printf("Sobre qual assunto deseja responder?\n\n1 - Musica\n2 - Percepcoes sensoriais humanas.\n\nDigite: ");
    scanf("%d", &questaoDesejada);

    switch(questaoDesejada){
        case 1:
            printf("Quais notas apertadas juntas no teclado formam o acorde de C?\n\n1 - C / E / D\n2 - D / E / B\n3 - C / E / G\n4 - G / B / C\n5 - C / E / B\n\nResponda com o numero da opcao: ");
            scanf("%d", &opcaoEscolhida);

            if(opcaoEscolhida == 3){
                printf("Voce acertou a questao\n");
            } else {
                printf("Voce errou a questao\n");
                }
            break;

        case 2:
            printf("Quais sao as percepcoes sensoriais humanas?\n\n1 - Visao, audicao, paladar, tato e oufato\n2 - Telepatia, audicao, paladar, tato e olfato\n3 - Telepatia, intuicao, paladar, tato e olfato\n4 - Telepatia, intuicao, paladar, tato e clarividencia\n5 - Telepatia, intuicao, paladar, visao e clarividencia\n\nResponda com o numero da opcao: ");
            scanf("%d", &opcaoEscolhida);

            if(opcaoEscolhida == 1){
                printf("Voce acertou a questao\n");
            } else {
                printf("Voce errou a questao\n");
                }
            break;
            }
    return 0;
}
