#include <stdio.h>

int main()
{
  int fari, ovo, leite, bolo;
  scanf("%d %d %d", &fari, &ovo, &leite);

  fari /= 2;
  ovo /= 3;
  leite /= 5;

  if(fari < ovo)
    bolo = fari;
  else
    bolo = ovo;

  if(leite < bolo)
    bolo = leite;

  printf("%d\n", bolo);

  return 0;
}
