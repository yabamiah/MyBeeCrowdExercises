#include <stdio.h>
#include <string.h>

int main()
{
  long long numba1, numba2;
  char soma[256];

  do{
    scanf("%lld %lld", &numba1, &numba2);
    if(numba1 == 0 && numba2 == 0)
      break;

    sprintf(soma, "%lld", numba1 + numba2);
    int tam = strlen(soma);

    for(int i = 0; i < tam; ++i)
      if(soma[i] != '0')
          printf("%c", soma[i]);

    printf("\n");

  }while(1);

  return 0;
}
