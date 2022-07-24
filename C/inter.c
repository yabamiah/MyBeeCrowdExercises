#include <stdio.h>

int main()
{
	double coloqui;

	scanf("%lf", &coloqui);

	if( coloqui > 0 && coloqui <= 25){
		printf("Intervalo [0,25]\n");
	}else if( coloqui > 25 && coloqui <= 50){
		printf("Intervalo (25,50]\n");
	}else if( coloqui > 50 && coloqui <= 75){
		printf("Intervalo (50,75]\n");
	}else if( coloqui > 75 && coloqui <= 100){
		printf("Intervalo (75,100}\n");
	}else{
		printf("Fora de intervalo\n");
	}

	return 0;

}
