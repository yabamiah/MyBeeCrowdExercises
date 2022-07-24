#include <stdio.h>

int main()
{
	int i, pag, res = 0;

	scanf("%d %d", &i, &pag);
	
	if(pag % 2 == 0)
	{
		for(int k = 0; k < pag; ++k)
			res = i + k;

		printf("%d\n", res);
	}
	else
		printf("-1\n");

}
