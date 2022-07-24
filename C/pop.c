#include <stdio.h>

int main()
{
	int vez, popA, popB, j;
	double taxA, taxB;

	scanf("%d", &vez);

	for(int i=0 ; i<vez ;++i){
		scanf("%d %d %lf %lf", &popA, &popB, &taxA, &taxB);
		for(j=0;popA<=popB;++j){
			popA *= (taxA/100.0) + 1.0;
			popB *= (taxB/100.0) + 1.0;
			if(j>100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if(j<=100)
			printf("%d anos.\n", j);

	}
	return 0;

}



