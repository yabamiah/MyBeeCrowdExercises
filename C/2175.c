#include <stdio.h>

int main()
{
	double O, B, I;
	int Juiz = 0;

	scanf("%lf %lf %lf", &O, &B, &I);

	if(O < B && O < I)
		Juiz += 1;

	if(B < O && B < I)
		Juiz += 2;

	if(I < O && I < B)
		Juiz += 3;

	switch(Juiz)
	{
		case 1:
			printf("Otavio\n");
			break;
		case 2:
			printf("Bruno\n");
			break;
		case 3:
			printf("Ian\n");
			break;
		default :
			printf("Empate\n");
			break;
	}

	return 0;
}
