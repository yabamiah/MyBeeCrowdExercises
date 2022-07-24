#include <stdio.h>

int main()
{
  int testes, cont = 0;

  while(scanf("%d", &testes) != EOF){
    int numero = 1;
    cont ++;
    numero += ((testes * (testes + 1)) / 2);

    if(testes == 0)
      printf("Caso %d: %d numero\n", cont, numero);
    else
      printf("Caso %d: %d numeros\n", cont, numero);

    printf("0");

    for(int i = 0; i <= testes; ++i)
      {
        for(int j = 1; j <= i; ++j)
          printf(" %d", i);
      }

    printf("\n\n");
  }

  return 0;
}
