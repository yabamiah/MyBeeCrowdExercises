#include <stdio.h>

int main()
{
	int const poderrr = 8000;
	int casos, nivel;
	
	scanf("%d", &casos);

	while(casos--)
	{
		scanf("%d", &nivel);
		if(nivel > poderrr)
			printf("Mais de 8000!\n");
		else
			printf("Inseto!\n");
	}

	return 0;
}
