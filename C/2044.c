#include <stdio.h>

int main()
{
	int qtd, din, ans, temp;

COMECO:

	ans = temp = 0;
		
	scanf("%d", &qtd);
		
	while(qtd)
	{	
		if(qtd == -1)
			goto SAIR;

		scanf("%d", &din);

		if(din % 100 != 0 || din % 100 == 0)
		{
			temp += din;
			
			if(temp % 100 == 0)
			{
				ans++;		
				temp = 0;
			}
		}
	qtd--;
	}

	printf("%d\n", ans);
	goto COMECO;

SAIR:
	return 0;
}
