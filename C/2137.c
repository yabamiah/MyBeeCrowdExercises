#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void selection_sort(int n, int xs[])
{
  int k, temp;
  for(int i = 0; i < n; ++i)
  {
    k = i;

    for(int j = i+1; j < n; ++j)
    {
      if(xs[j] < xs[k])
        k = j;

      temp = xs[i];
      xs[i] = xs[k];
      xs[k] = temp;
    }
  }
}

int main()
{
  int casos;

  while(scanf("%d", &casos) != EOF){
    int cod[casos];

    for(int i = 0; i < casos; ++i)
      scanf("%d", &cod[i]);

    selection_sort(casos, cod);

    for(int i = 0; i < casos; ++i)
      printf("%04d\n", cod[i]);
  }

  return 0;
}
