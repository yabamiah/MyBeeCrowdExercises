#include <stdio.h>

int main()
{
  int casos, dimen;
  scanf("%d", &casos);

  for(int i = 0; i < casos; ++i){
    scanf("%d", &dimen);
    int vs[dimen], ws[dimen], angulo = 0;

    for(int j = 0; j < dimen; ++j){
      scanf("%d", &vs[j]);
    }

    for(int j = 0; j < dimen; ++j){
      scanf("%d", &ws[j]);
    }

    for(int j = 0; j < dimen; ++j){
      angulo += vs[j] * ws[j];
    }

    if(angulo == 0)
      printf("Reto\n");
    else if(angulo > 0)
      printf("Agudo\n");
    else if(angulo < 0)
      printf("Obtuso\n");
  }

  return 0;
}
