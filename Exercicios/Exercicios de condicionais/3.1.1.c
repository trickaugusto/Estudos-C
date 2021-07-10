#include <stdio.h>
#include <stdlib.h>

/* 3.1.1 Menu principal - Faça um programa de menu que mostra na tela, sob o título de "Menu Principal", três opções:
"1 - Fim",
"2 - Cadastro" e
"3 - Consulta"

lê do teclado a opção desejada pelo usuário e mostra uma mensagem confirmando a opção escolhida ou uma mensagem de erro, se a opção for inválida. (use switch case)
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
