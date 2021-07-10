#include <stdio.h>
#include <stdlib.h>

int main()
{
    float areaTotal;
    float areaConstruida;
    printf("Digite a area total do terreno: ");
    scanf("%f", &areaTotal);
    printf("Digite a area construida: ");
    scanf("%f", &areaConstruida);
    float areaNaoConstruida = areaTotal - areaConstruida;
    float impostoAreaConstruida = 5 * areaConstruida;
    float impostoAreaNaoConstruida = 3.8 * areaNaoConstruida;
    float impostoTotal = impostoAreaConstruida + impostoAreaNaoConstruida;
    printf("O imposto que voce ira pagar sera %f", impostoTotal);

    return 0;
}
