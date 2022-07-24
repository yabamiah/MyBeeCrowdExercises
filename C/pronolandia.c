#include <stdio.h>
#include <string.h>

int main()
{
  int ameno, j;
  char mensag[30];

  scanf("%s", mensag);
  ameno = strlen(mensag);

  for(int i = 0; i < ameno; ++i){
    j = ameno - i - 1;
    printf("%c", mensag[j]);
    if(j == 0)
      printf("\n");
  }



  return 0;
}
