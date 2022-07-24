#include <stdio.h>

int main()
{
  int corrida, metros;

  scanf("%d %d", &corrida, &metros);

  printf("%d\n", corrida % metros);

  return 0;
}
