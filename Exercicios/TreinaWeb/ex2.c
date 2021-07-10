#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento;
    float largura;
    float altura;
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("A area do retangulo eh %f e o perimetro e %f", comprimento * altura, 2 * comprimento + 2 * altura);

    return 0;
}
