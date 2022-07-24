#include <stdio.h>

int main()
{
	int matriz[256][256], a, b, qtd = 0, maior = 0;

	scanf("%d %d", &a, &b);

	//////////////////////////
	for(int x = 0; x < a; ++x)
	{
		for(int z = 0; z < b; ++z)
		{
			scanf("%d", &matriz[x][z]);
		}
	}
	
	//////////////////////////////////
	for(int i = 0; i < b; ++i)
	{
		for(int j = 0; j < a; ++j)
				qtd += matriz[i][j];

		if(qtd > maior)
			maior = qtd;

		qtd = 0;		
	}

	/////////////////////////
	for(int i = 0; i < b; ++i)
	{
		for(int j = 0; j < a; ++j)
			qtd += matriz[j][i];

		if(qtd > maior)
			maior = qtd;	

		qtd = 0;
	}

	printf("%d\n", maior);

	return 0;
}
