#include <stdio.h>

int tomada(int xs[4])
{
  int som = 0;
    for (int i = 0; i < 3; ++i)
      {
        xs[i] = xs[i] - 1;
      }

    for(int i = 0; i < 4; ++i)
      {
        som += xs[i];
      }

    return som;
}

int main()
{
  int xs[4];

  for (int i = 0; i < 4; ++i)
  {
    scanf("%d", &xs[i]);
  }

  printf("%d\n", tomada(xs));

  return 0;

}
