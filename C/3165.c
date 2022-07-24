#include <stdio.h>
#include <stdlib.h>

int main()
{
	int gmf[1000];
	int np;

	scanf("%d", &np);

	int gm[2000] = {0};

	for(int i = 0; i < np; ++i)
	{
		if(i % i+1 != 0 && i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
			gm[i] = i;
		}
	}

	for(int i = 0; i < np; ++i)
	{
		if(gm[i] != 0)
		{
			gmf[i] = gm[i];
		}

		if(gmf[i+1] - gmf[i] == 2)
			printf("%d %d\n", gmf[i+1], gmf[i]);
	}

	printf("%d %d\n", &gmf[0], &gmf[0+1]);

	return 0;
}
