#include <stdio.h>
#include <string.h>

int main()
{
  int linha, i, j;
  char op[1];
  double elem = 0.0, M[12][12];
  scanf("%d", &linha);
  scanf("%s", op);
  for(i = 0; i <= 11; ++i){
    for(j = 0; j <= 11; ++j){
      scanf("%lf", &M[i][j]);
      if(i == linha)
        elem += M[i][j];
    }
  }
  if(op[0] == 'S')
    printf("%.1lf\n", elem);
  else if(op[0] == 'M'){
    elem /= 12.0;
    printf("%.1lf\n", elem);
  }
}
