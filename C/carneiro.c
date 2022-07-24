#include <stdio.h>
#include <string.h>

int main()
{
  int star;
  scanf("%d", &star);

  int xs[star + 1];

  for(int i = 1; i <= star; ++i)
    scanf("%d", &xs[i]);

  int ys[star + 1];
  memset(ys, 0, sizeof ys);
  int pos = 1;

  while( 1 <= pos && pos <= star){
    ys[pos] = 1;
    int dir = xs[pos] % 2 == 0 ? -1 : 1;

    if(xs[pos] > 0)
      --xs[pos];

    pos += dir;
  }

  long long nRoubados = 0, atac = 0;

  for(int i = 1; i <= star; ++i){
    atac += ys[i];
    nRoubados += xs[i];
  }

  printf("%lld %lld\n", atac, nRoubados);

  return 0;
}
