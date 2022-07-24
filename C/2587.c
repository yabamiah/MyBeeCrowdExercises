#include <stdio.h>
#include <string.h>

int main()
{
  int casos, ola[2], x = 0;
  char pal1[16], pal2[16], adv[16], rel;
  scanf("%d", &casos);
  for(int i = 0; i < casos; ++i){
    scanf("%s", pal1);
    scanf("%s", pal2);
    scanf("%s", adv);
    rel = 'N';

    int tam = strlen(adv);
    for(int j = 0; j < tam; ++j){
      if(adv[j] == '_'){
        ola[x++] = j;
      }
    }

    if(pal1[ola[0]] == pal2[ola[0]] && pal1[ola[1]] == pal2[ola[1]])
      rel = 'Y';
    else if(pal1[ola[0]] == pal2[ola[1]] || pal1[ola[1]] == pal2[ola[0]])
      rel = 'Y';

    printf("%c\n", rel);
  }
  return 0;
}
