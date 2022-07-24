#include <stdio.h>

int variacao(char ch)
{
  switch(ch)
  {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'S':
    case 's':
      return 3;
  }

  return 2;
}

int main()
{
  int casos;
  scanf("%d", &casos);

  while(casos)
  {
    char senha[17], *ptr;
    int vari = 1;

    scanf("%s", senha);

    for(ptr = senha; *ptr != '\0'; ++ptr)
      vari *= variacao(*ptr);

    printf("%d\n", vari);

    --casos;
  }

  return 0;
}
