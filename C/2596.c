#include <stdio.h>

int main()
{
	int casos, esf, k = 0;

	scanf("%d", &casos);

	while(casos)
	{
		scanf("%d", &esf);

		int ans = 0;

		for(int i = 1; i <= esf; ++i)
		{
			int temp = 1;
			k = 0;

			while(temp <= 1000)
			{
				if(i % temp == 0)
					k++;

			temp++;
			}

			if(k % 2 == 0)
				ans++;
		}

		printf("%d\n", ans);

		--casos;
	}

	return 0;
}
