#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int N, int xs[])
{
    bool updated;

    do {
        updated = false;

        for (int i = 1; i < N; ++i)
        {
            if (xs[i - 1] > xs[i])
            {
                updated = true;

                int temp = xs[i];
                xs[i] = xs[i - 1];
                xs[i - 1] = temp;
            }
        }
    } while (updated);
}

int main()
{
	int qtd, temp, k = 0, x = 1;

	scanf("%d", &qtd);

	int notas[qtd];

	for(int i = 0; i < qtd; ++i)
		scanf("%d", &notas[i]);

	bubble_sort(qtd, notas);

	for(int i = 0; i < qtd; ++i)
	{
		int cont = 0;
		k = 0;
		while(cont != qtd)
		{	
			if(notas[i] == notas[cont])
			{
				k++;
			}
			
			if(k >= x)
			{
				x = k;
				temp = notas[i];
			}	

			cont++;
		}
	}

	printf("%d\n", temp);

	return 0;
}
