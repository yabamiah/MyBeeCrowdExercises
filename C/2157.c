#include <stdio.h>

int main()
{
	int casos, n1, n2;
	int cont, temp;

	scanf("%d", &casos);

	for(int i = 0; i < casos; ++i)
	{
		scanf("%d %d", &n1, &n2);

		for(int j = n1; j <= n2; ++j)
			printf("%d", j);

		for(int j = n2; j >= n1; --j)
		{
			cont = j;
			
			while(cont > 0){
				temp = cont % 10;
				printf("%d", temp);
				cont = cont / 10;
			}
		}
		printf("\n");
	}

	return 0;
}
