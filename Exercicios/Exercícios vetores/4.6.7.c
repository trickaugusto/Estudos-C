#include <stdio.h>
#include <stdlib.h>

/*

4.6.7 Pesquisa notas - Elaborar programa com opções para: ler 10 notas de 0 a 10,
pesquisar se uma nota existe no vetor e mostrar o conteúdo do vetor. Na leitura, rejeitar notas fora da faixa válida.

Notas de 0 a 10 em sequencia

qual nota quer pesquisar

Se sim:
    encontrada na posicao x
*/

int main()
{
    int i, opcaoEscolhida, notaPraPesquisar, notaDigitada[11];

    for(i = 0; i < 10; i++){
        printf("Digite a nota de 0 a 10: ");
        scanf("%d", &notaDigitada[i]);

        while(notaDigitada[i] > 10){
            printf("Nota incorreta, digite novamente: ");
            scanf("%d", &notaDigitada[i]);
        }
    }

    do{
        printf("Digite uma nota que deseja pesquisar no vetor anteriormente digitado: ");
        scanf("%d", &notaPraPesquisar);

        while(notaPraPesquisar > 10){
            printf("Nao existe a nota no vetor, digite novamente: ");
            scanf("%d", &notaPraPesquisar);
        }

        for(i = 0; notaPraPesquisar != notaDigitada[i]; i++){
        }

        printf("A nota eh %d, na posicao %d\n", notaDigitada[i], i);

        printf("Deseja pesquisar mais?\n\n1- sim\n2- nao\n\n");
        scanf("%d", &opcaoEscolhida);

    } while(opcaoEscolhida == 1);

    return 0;
}
