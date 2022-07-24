#include <stdio.h>

int main()
{
	int caso = 1, etap, ciclo, i = 1;

	while(caso)
	{	
		scanf("%d", &etap);

		if(etap == -1)
			break;

		ciclo = etap / 2;
		
		printf("Experiment %d: %d full cycle(s)\n", i, ciclo);

		i++;
	}

	return 0;
}
