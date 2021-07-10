#include <stdio.h>
#include <stdlib.h>

/* 3.1.1 Menu principal - Fa�a um programa de menu que mostra na tela, sob o t�tulo de "Menu Principal", tr�s op��es:
"1 - Fim",
"2 - Cadastro" e
"3 - Consulta"

l� do teclado a op��o desejada pelo usu�rio e mostra uma mensagem confirmando a op��o escolhida ou uma mensagem de erro, se a op��o for inv�lida. (use switch case)
*/

int main()
{
    int opcaoEscolhida;

    printf("Menu Principal:\n\n1 - Fim\n2 - Cadastro\n3 - Consulta\n\nEscolha uma das opcoes: ");
    scanf("%d", &opcaoEscolhida);

    switch(opcaoEscolhida){
        case 1:
            printf("Opcao escolhida: 1\n");
            break;
        case 2:
            printf("Opcao escolhida: 2\n");
            break;
        case 3:
            printf("Opcao escolhida: 3\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
