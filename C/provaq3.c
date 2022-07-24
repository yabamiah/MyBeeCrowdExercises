#include <stdio.h>
#include <string.h>

int main()
{
  int casos, lA, lB, lC;
  scanf("%d", &casos);

  for(int i = 0; i < casos; ++i){
    scanf("%d %d %d", &lA, &lB, &lC);

    if(lA+lB>lC && lA+lC>lB && lB+lC>lA)
      printf("Sim\n");
    else if(lA+lB==lC || lA+lC==lB || lB+lC==lA)
      printf("Degenerado\n");
    else
      printf("Nao\n");
  }

  return 0;
}
