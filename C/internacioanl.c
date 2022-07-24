#include <stdio.h>
#include <string.h>

int main()
{
  int casos;
  char idiomas[20][20];
  scanf("%d", &casos);

  for(int i = 0; i < casos; ++i){
    int pessoas;
    scanf("%d", &pessoas);

    for(int j = 0; j < pessoas; ++j){
      scanf("%s", idiomas[j]);
    }
    int eoun = 0;
    for(int j = 1; j < pessoas; ++j)
      if(strcmp(idiomas[0], idiomas[j]) != 0)
        eoun = 1;

    if(eoun)
      printf("ingles\n");
    else
      printf("%s\n", idiomas[0]);
  }

  return 0;
}
