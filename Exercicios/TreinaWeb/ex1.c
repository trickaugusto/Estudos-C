#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorInformado = 0;
    float valorEmReais = 0;
    printf("Digite o valor em dolares: ");
    scanf("%f", &valorInformado);
    valorEmReais = valorInformado * 3.85;
    printf("%f", valorEmReais);
    return 0;
}
