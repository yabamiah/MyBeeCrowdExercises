#include <stdio.h>

int main()
{
	int consu, conta = 7;

	scanf("%d", &consu);
	
	if(consu >= 11)
	{
		if(consu <= 30){
			for(int i = 11; i <= consu; ++i)
				conta += 1;	
		}

		else{
			for(int i = 11; i <= 30; ++i)
				conta += 1;	
			}
	}
	
	if(consu >= 31)
	{
		if(consu <= 100){
			for(int i = 31; i <= consu; ++i)
				conta += 2;
		}
		else{
			for(int i = 31; i <= 100; ++i)
				conta += 2;
		}
	}
	
	if(consu >= 101){
		for(int i = 101; i <= consu; ++i)
			conta += 5;
	}

	printf("%d\n", conta);

	return 0;
}
