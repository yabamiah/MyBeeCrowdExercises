#include <stdio.h>

int main()
{
  char numero[10];
  for(int i = 0; i < 10; i++){
    scanf("%c", &numero[i]);
  }

  printf("(%c%c) %c%c%c%c-%c%c%c%c\n", numero[0],numero[1],numero[2],numero[3],numero[4],numero[5],numero[6],numero[7],numero[8],numero[9]);

  return 0;

}
