#include <stdio.h>

int main()
{
  int lX = 432, lY = 468;
  int bX, bY;

  scanf("%d %d", &bX, &bY);

  if(bX > lX || bX < 0)
    printf("fora\n");
  else if(bY > lY || bY < 0)
    printf("fora\n");
  else
    printf("dentro\n");

  return 0;
}
