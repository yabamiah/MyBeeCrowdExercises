#include <stdio.h>

int main()
{
  int medid[4];
  for(int i = 0; i < 4; ++i){
    scanf("%d", &medid[i]);
  }

  for(int i = 0; i < 4; ++i){
    for(int j = i + 1; j < 4; ++j){
      if(medid[j] < medid[i]){
        int e;
        e = medid[i];
        medid[i] = medid[j];
        medid[j] = e;
        }
    }
  }

  int soma1, soma2;
  soma1 = medid[1] + medid[2];
  soma2 = medid[0] + medid[1];

  if(medid[3] < soma1 || medid[2] < soma2)
    printf("S\n");
  else
    printf("N\n");

  return 0;
}
