#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    int i = 0;
    printf("Digite um numero: ");
    scanf("%d", numero);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
