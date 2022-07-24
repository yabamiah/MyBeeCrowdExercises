#include <stdio.h>

int main()
{
	int carros, voltas;

	scanf("%d %d", &carros, &voltas);

	int tempo[carros];

	for(int i = 0; i < voltas; ++i)
	{
		for(int j = 1; j <= carros; ++j)
		{
			tempo[j] += tempo[j];
			scanf("%d", &tempo[j]);
			tempo[j] += tempo[j];
		}
	}

	for(int i = 0; i < voltas; ++i)
	{
		for(int j = 1; j <= carros; ++j)
		{
			printf("[%d] %d\n",j ,tempo[j]);
		}
	}


	return 0;
}
