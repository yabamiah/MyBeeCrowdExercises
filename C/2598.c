#include <stdio.h>

int main()
{
  int casos, comp, radA,radQ;

  scanf("%d", &casos);

  while(casos--) {
	 scanf("%d %d", &comp, &radA);

    radQ = (comp / radA);

	 if(radQ*radA == comp)
		printf("%d\n", radQ);
	 else{
		radQ++;
		printf("%d\n", radQ);
	 }
  }
  
  return 0;
}
