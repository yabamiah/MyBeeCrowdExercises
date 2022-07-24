#include <stdio.h>

int main()
{
	double A, G, Ra, Rg;

	scanf("%lf %lf %lf %lf", &A, &G, &Ra, &Rg);

	double pA = (100/Ra) * A;
	printf("A(%lf) \n\n", pA);
	double pG = (100/Rg) * G;
	printf("G(%lf) \n\n", pG);

	if(pA > pG)
		printf("G\n");
	else if(pA == pG)
		printf("G\n");
	else
		printf("A\n");

	return 0;
}
