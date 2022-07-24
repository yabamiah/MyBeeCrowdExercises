#include <stdio.h>
#include <string.h>

int main()
{
  int vez;
  scanf("%d", &vez);

  for(int i = 0; i < vez; ++i)
  {
    char num[10];
    scanf("%s", num);
    if(strlen(num) == 5)
      printf("3\n");

    int y = 0;

    if(num[0] == 'o')
      y++;
    if(num[1] == 'n')
      y++;
    if(num[2] == 'e')
      y++;

    if(y >= 2)
      printf("1\n");
    else if(y < 2 && strlen(num) == 3)
      printf("2\n");
  }

  return 0;
}
