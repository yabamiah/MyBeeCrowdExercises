#include <stdio.h>

int main()
{
  int comp, dist, kmC, pdC, pdQ, cust;

  scanf("%d %d %d %d", &comp ,&dist ,&kmC ,&pdC);

  pdQ = comp / dist;

  cust = (comp * kmC) + (pdQ * pdC);

  printf("%d\n", cust);
}
