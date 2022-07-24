#include <stdio.h>
#include <string.h>

int main()
{
  int casos, len1, len2, x, y, cont = 0;
  char num1[255], num2[255];

  scanf("%d", &casos);

  while (casos)
  {
	 scanf("%s %s", num1, num2);

	 len1 = strlen(num1);
	 len2 = strlen(num2);

	 for (x = len2 - 1, y = len1 - 1; x > -1; --x, --y)
	 {
		if (num2[x] == num1[y])
		{
		  cont++;
		}
	 }

	 if (len1 < len2)
	 {
		printf("nao encaixa\n");
	 } else {
	 if (cont == len2)
		{
		  printf("encaixa\n");
		} else {
		printf("nao encaixa\n");
	   }
	 }

	 cont = 0;
	 casos--;
  }

  return 0;
}
