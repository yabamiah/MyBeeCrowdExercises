#include <stdio.h>
#include <string.h>
#include <ctype.h>

int even(char out[16][16], int N, char in[16][16]){
  int cout = 0;

  for(int i = 0; i < N; ++i){
    if(isdigit(in[i]))
     out[cout] = in[i];
  }

  return out[cout];
}

int main()
{
  int casos;
  char aleato[16][16], resul[16][16];
  scanf("%d", &casos);

  for(int i = 0; i < casos; i++){
    scanf("%s", aleato[i]);
  }

  char U = even(aleato, casos, resul);

  for(int i = 0; i < casos; ++i){
    printf("%s%c", resul[i], i == casos - 1 ? '\n' : ' ');
  }
  return 0;
}
