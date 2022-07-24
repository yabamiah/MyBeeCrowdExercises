#include <stdio.h>
#include <string.h>

int main()
{
	char cipo[100 + 1], x = 0;

	while(scanf("%s", cipo) != EOF)
	{
		int tam = strlen(cipo);
		int cont = 0, comp = 0;

		for(int i = 0; i < tam; ++i)
		{
			int R = cont + 1;

			while(R < tam && cipo[R] != 'x')
				++R;

			if(comp == 0 || R == tam)
			{
				if(x > R - cont)
					x = x;
				else
					x = R - cont;
			}
			else
			{
				if(x > R - cont)
					x = x;
				else
					x = (R - cont)/2;	
			}

			cont = R + 1;
		}
	}
	
	printf("%d\n", x);
	return 0;
}
