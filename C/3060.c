#include <stdio.h>

int main()
{
	int valor, parc, count;

	scanf("%d %d", &valor, &parc);
	int divi = valor / parc;
	int resto = valor % parc;
	int cont = parc - resto;

	if(resto == 0)
	{
		while(parc--)
			printf("%d\n", divi);
	}
	else
	{
		while(resto--)
			printf("%d\n", divi + 1);
		while(cont--)
			printf("%d\n", divi);
	}

	return 0;
}
