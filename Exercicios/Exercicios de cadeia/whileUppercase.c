#include <stdio.h>
#include <string.h>

int main()
{
    int intensidade = 0;
    char comando[10] = "";


    while (strcmp("PARAR", comando)) {
        printf("Digite o nivel do miado: ");
        scanf("%d", &intensidade);

        printf("M");
        for(int i=1; i <= intensidade; i++) {
            printf("I");
        }
        printf("AU\n");

        printf("O que vc deseja fazer agora?\n");
        scanf("%s", comando);


        int j = 0;
        while (comando[j]) {
            comando[j] = toupper(comando[j]);
            j++;
        }

    }

    return 0;
}
