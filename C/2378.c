#include <stdio.h>

int main()
{
	int leit, cap, ans = 0, alo = 0;

	scanf("%d %d", &leit, &cap);

	int sai[leit], entra[leit];

	for(int i = 0; i < leit; ++i)
	{
		scanf("%d %d", &sai[i] ,&entra[i]);

		if(sai[i] != 0)
			ans -= sai[i];

		if(entra[i] != 0)
			ans += entra[i];

		if(ans > cap)
			alo = 1;
	}

	if(alo)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
