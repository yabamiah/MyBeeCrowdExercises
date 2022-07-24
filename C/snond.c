#include <stdio.h>

int main()
{
  double notas[5];

  for(int i = 0; i < 5; ++i)
    scanf("%lf", &notas[i]);

  for (int contador = 1; contador < 5; contador++) {
   for (int i = 0; i < 5 - 1; i++) {
     if (notas[i] > notas[i + 1]) {
       double aux = notas[i];
       notas[i] = notas[i + 1];
       notas[i + 1] = aux;
     }
   }
  }

  double resul = notas[1] + notas[2] + notas[3];

  printf("%.1lf\n", resul);

  return 0;
}
