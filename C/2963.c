#include <stdio.h>

int main()
{
	int cand, carl, alo;

	scanf("%d", &cand);
	
	int notas[cand];

	for(int i = 0; i < cand; ++i)
	{
		scanf("%d", &notas[i]);
		carl = notas[0];
	}

	for(int i = 0; i < cand; ++i)
	{
		if(carl == notas[0] && carl > notas[i])
			alo = 1;
		else
			alo = 0;
	}	

	if(alo)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}

