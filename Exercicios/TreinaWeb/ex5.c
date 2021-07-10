#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int qtdMiado = 0;
    printf("Digite a quantidade de miados: ");
    scanf("%d", &qtdMiado);
    for (i = 0; i <= qtdMiado; i++) {
        printf("MIAU ");
    }
    return 0;
}
