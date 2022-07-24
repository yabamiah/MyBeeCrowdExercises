#include <stdio.h>

int main()
{
  int casos, pl1, pl2;

  scanf("%d", &casos);

  while (casos--) {
	 
	 scanf("%d %d", &pl1, &pl2);

	 int temp;
	 if (pl2 > pl1) {
		temp = pl1;
		pl1 = pl2;
		pl2 = temp;
	 }

	 int x = pl1, y = pl2, resto = pl1 % pl2;
  
	 while (resto != 0) {
		x = y;
		y = resto;
		resto = x % y;
	 }

	 printf("%d\n", y);
  }
  
  return 0;
}
