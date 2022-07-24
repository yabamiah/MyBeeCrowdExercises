#include <stdio.h>

int main()
{
	int tam, min, max, ans = 0;

	scanf("%d %d %d", &tam, &min, &max);

	int vet[tam];

	for(int i = 0; i < tam; ++i)
		scanf("%d", &vet[i]);

	for(int i = 0; i < tam; ++i)
	{
		int cont = 0, temp;
		while(cont != tam)
		{
			if(vet[i] == vet[cont])
				ans += 0;
			else
			{
				temp = vet[i] + vet[cont];
				if(temp >= min && temp <= max)
				{
					ans++;
				}
			}
			cont++;
		}
	}

	printf("%d\n", ans/2);

	return 0;
}

