#include <stdio.h>

int main()
{
  int v[3], temp;

  for(int i = 0; i < 3; ++i)
    scanf("%d", &v[i]);

  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 2; ++j){
      if(v[j] > v[j+1]){
        temp = v[j + 1];
        v[j + 1] = v[j];
        v[j] = temp;
      }
    }
  }

  printf("%d\n", v[1]);
  return 0;
}
