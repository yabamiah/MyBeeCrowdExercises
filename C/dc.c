#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int digits = 0;
	do{
		++ digits;
		n /= 10;

	}while(n);

	printf("Digitos: %d\n", digits);

	return 0;

}
