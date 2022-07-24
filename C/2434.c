#include <stdio.h>

int main()
{
	int dias, saldo, saldof;

	scanf("%d %d", &dias, &saldo);
	
	saldof = saldo;
	int mov[dias];

	for(int i = 0; i < dias; ++i)
		scanf("%d", &mov[i]);

	for(int i = 0; i < dias; ++i){
		saldo = saldo + mov[i];
		
		if(saldof > saldo)
			saldof = saldo;	
	}

	printf("%d\n", saldof);

	return 0;
}
