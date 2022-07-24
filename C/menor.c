#include <stdio.h>

int  menor(int quant, const int xs[quant])
{
  int menor = xs[0];

  for(int i = 1; i < quant; ++i)
  {
    if(xs[i] < menor)
      menor = xs[i];
  }

  return menor;
}

int posix(int quant, const int xs[quant])
{
  int posi;
  for(int i = 0; i < quant; ++i)
    {
      if(xs[i] == menor(quant, xs))
        posi = i;
    }
  return posi;
}

int main()
{
  int quant;
  scanf("%d", &quant);

  int xs[quant];

  for(int i = 0; i < quant; ++i){
    scanf("%d", &xs[i]);
  }

  printf("Menor valor: %d\n", menor(quant, xs));
  printf("Posicao: %d\n", posix(quant, xs));

  return 0;
}
