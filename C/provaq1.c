#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  long long som = 0;
  scanf("%d", &n);
  int peso[n];
  for(int i=0;i<n;++i){
    scanf("%d", &peso[i]);
    som += peso[i];
  }

  printf("Carga total: %lld kilogramas\n", som);

  return 0;
}
