#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
  int casos;
  scanf("%d", &casos);

  while(casos)
  {
    char num[256], numeros[256];
    scanf("%s", num);
    int res = 0, i = 0;

    while(num[i] != '\0'){
      if(num[i] >= '0' && num[i] <= '9'){
        int j = 0;
        while(1){
          if(isdigit(num[i]))
            numeros[j] = num[i];
          else
            break;

          j++, i++;
        }
        numeros[j] = '\0';
        int charint;
        sscanf(numeros, "%d", &charint);
        res += charint;
      }
      i++;
    }

    printf("%d\n", res);

    --casos;
  }

  return 0;
}
