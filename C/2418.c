#include <stdio.h>

void sort(int n, double xs[])
{
  for(int  i = 0; i < n; ++i){
    int k = i;

    for(int j = i + 1; j < n; ++j){
      if(xs[j] < xs[k])
        k = j;

      double temp = xs[i];
      xs[i] = xs[k];
      xs[k] = temp;
    }
  }
}

int main()
{
  double notas[5];

  for(int i = 0; i < 5; ++i)
    scanf("%lf", &notas[i]);

  sort(5, notas);

  double resul = notas[1] + notas[2] + notas[3];

  printf("%.1lf\n", resul);

  return 0;
}
