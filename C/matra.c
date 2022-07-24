#include <stdio.h>
#include <string.h>

int main()
{
  int linha;
  double soma = 0, m[12][12];
  char op;

  scanf("%d", &linha);
  scanf("%c", &op);

  for(int i = 0; i < 11; ++i)
  {
      for(int j = 0; j < 11; ++i)
     {
       scanf("%lf", &m[i][j]);
       if(i == linha)
         soma += m[linha][j];
     }
  }

  if(op == 'S')
    printf("%.1lf\n", soma);
  else if(op == 'M')
    printf("%.1lf\n", soma / 12.0);


  return 0;
}
