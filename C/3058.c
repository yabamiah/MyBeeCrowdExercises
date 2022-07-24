#include <stdio.h>

int main()
{
	int casos;

	scanf("%d", &casos);
	
	double m[casos], p[casos], r[casos], ans = 1000.01;

	for(int i = 0; i < casos; i++)
	{
		scanf("%lf %lf", &m[i], &p[i]);
	}	

	for(int i = 0; i < casos; ++i)
	{
		r[i] = (m[i] / p[i]) * 1000;

		if(r[i] < ans)
		{
			ans = r[i];
		}

	}

	printf("%.2lf\n", ans);
}
