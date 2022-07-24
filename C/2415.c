#include <stdio.h>

int main()
{
  int casos, cont = 0, ponto = 0;
  scanf("%d", &casos);

  int valores[256];

  for(int i = 0; i < casos; ++i)
  {
    scanf("%d", &valores[i]);
  }

  for(int x = 1; x <= casos; ++x){
    if(valores[x - 1] == valores[x])
      cont++;
    else
      if(cont > ponto){
        ponto = cont;
        cont = 0;
      }else
        cont = 0;
  }

  printf("%d\n", ponto + 1);

  return 0;
}
