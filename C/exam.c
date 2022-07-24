#include <stdio.h>

int main()
{
  double Not1, Not2, Not3, Not4, media;

  scanf("%lf %lf %lf %lf", &Not1, &Not2, &Not3, &Not4);

  media = ((Not1*2)+(Not2*3)+(Not3*4)+(Not4*1))/10;
  printf("Media: %.1lf\n", media);

  if(media >= 7.0)
  {
    printf("Aluno aprovado.\n");
  }
  else if(media < 5.0)
  {
    printf("Aluno reprovado.\n");
  }
  else if(media > 5.0 && media < 6.9)
  {
    double nt5, ex;
    printf("Aluno em exame.\n");
    scanf("%lf", %nt5);
    printf("Nota do exame: ");
    ex = (media+nt5)/2.0;
    if(ex >= 5.0){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1lf", ex);
     }else  if(ex < 4.9){
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf", ex);
      }
  }

  return 0;

}
