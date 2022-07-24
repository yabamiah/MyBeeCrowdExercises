#include <stdio.h>
#include <string.h>

int main(){

  int tam;
  scanf("%d", &tam);

  char pal[tam];

  scanf("%s", pal);
  int vogal = 0, consoante = 0;

  for(int i = 0; i < tam;++i){
    if(pal[i]=='A'||pal[i]=='E'||pal[i]=='I'||pal[i]=='O'||pal[i]=='U' )
      vogal++;
    else
      consoante++;
  }

    printf("%d %d\n", vogal, consoante);

  return 0;
}
