#include <stdio.h>

int main()
{
	int B, T;

	scanf("%d %d", &B, &T);

	if(B > (160 - T))
		printf("1\n");
	else if(B < (160 - T))
		printf("2\n");
	else
		printf("0\n");

	return 0;
}
