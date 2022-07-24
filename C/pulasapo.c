#include <stdio.h>

int main()
{

  int alt, qtd_pulos, cont = 0;
  scanf("%d %d", &alt, &qtd_pulos);
  int cano[qtd_pulos];

  for(int i = 0; i < qtd_pulos; ++i){
    scanf("%d", &cano[i]);
  }	

  for(int i = 1; i < qtd_pulos; ++i){
    int difalt;
    if(cano[i] > cano[i - 1])
      difalt = (cano[i] - cano[i -1 ]);
    else
      difalt = (cano[i - 1] - cano[i]);
    if(difalt <= alt)
      cont ++;
    }

  if(cont == qtd_pulos - 1)
    printf("YOU WIN\n");
  else
    printf("GAME OVER\n");

  return 0;
}
