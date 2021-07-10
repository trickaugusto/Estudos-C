#include <stdio.h>
#include <string.h>

int main()
{
    char comando[10] = "";
    do {
      int intensidade = 1;
      printf("Digite o nivel do miado: ");
      scanf("%d", &intensidade);

      printf("M");
      for (int i=1; i <= intensidade; i++) {
            printf("I");
      }
      printf("AU\n");

      printf("O que vc deseja fazer?");
      scanf("%s", comando);

    } while(strcmp("PARAR", comando));

    return 0;
}
