#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

4.6.9 Valida��o de senha:

Implementar um programa que l� um nome e uma senha (entre 4 e 8 caracteres) e verifica se o usu�rio est� autorizado ou n�o.
Para essa verifica��o, o programa mant�m uma lista de nomes e respectivas senhas.
O programa mostra mensagens de erro se o nome ou a senha estiverem incorretos. S�o permitidas at� 3 tentativas.

Ler nome
Ler senha
Verificar usuario autorizado
    Comparar com lista de nomes
    Comparar com lista de senhas
Se estiver errado
    Mensagem de erro
    Max 3 tentativas
*/


int main()
{
    char nomeDigitado[9], senhaDigitada[8];
    int qtdTentativas = 0;

    char* nomeCadastrado[3];
    nomeCadastrado[0] = "Lucas";
    nomeCadastrado[1] = "Jean";
    nomeCadastrado[2] = "Gustavo";
    nomeCadastrado[3] = "Jose";

    char* senhaCadastrada[3];
    senhaCadastrada[0] = "fedcba";
    senhaCadastrada[1] = "abcdef";
    senhaCadastrada[2] = "dcba";
    senhaCadastrada[3] = "abcd";

    do{
        printf("Digite o nome: ");
        scanf(" %s", nomeDigitado);

        printf("Agora digite a senha: ");
        scanf(" %s", senhaDigitada);

        for(int i = 0; i < 4; i++){
            if(strcmp(nomeCadastrado[i], nomeDigitado) == 0){
                if(strcmp(senhaCadastrada[i], senhaDigitada) == 0){
                    printf("Login realizado");
                    return 0;
                }
            }
        }
        qtdTentativas++;
        printf("Invalido.\n\n");

    }while(qtdTentativas <= 3);

    printf("Limite de tentativas atingido");
    return 0;
}
