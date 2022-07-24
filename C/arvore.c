#include <stdio.h>
#include <string.h>

int main()
{
  int num;
  while(scanf("%d", &num) != EOF){
    char linha[101];
    int i, j;
    for(i = num/2, j = 1; i >=0; --i, j +=2){
      memset(linha, ' ', i);
      memset(linha + i, '*', j);

      linha[i + j] = '\0';

      puts(linha);
    }

    i = num/2;
    memset(linha, ' ', i);
    memset(linha + i, '*', 1);
    linha[i + 1] = '\0';
    puts(linha);

    i -= 1;
    memset(linha, ' ', i);
    memset(linha + i, '*', 3);
    linha[i+3]= '\n';
    linha[i+4]= '\0';
    puts(linha);
  }

  return 0;
}
