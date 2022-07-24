#include <stdio.h>
#include <math.h>

int main()
{
  int tam, resul, i;
  scanf("%d", &tam);

  for(i = 0; tam >= 2; ++i){
    tam = tam/2;
  }
  resul = pow(4, i);

  printf("%d\n", resul);

  return 0;
}
