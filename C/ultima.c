#include <stdio.h>
#include <string.h>

int main()
{
	int casos, tam, ola;
	char palavra[256];

	scanf("%d", &casos);
	
	while(casos--)
	{
		char * olha = &palavra[0];

		scanf("%s", palavra);
		
		tam = strlen(palavra);

		for(olha = palavra; *olha != '\0'; ++olha){
			if(0 < *olha[0] < 10)
				if(*olha[1] != '')
			else if(*olha == 'f'&& *olha + 1 == 'o' )
				ola = 0;
		}
		if(ola == 0)
			printf("Nao\n");
	}

	return 0;
}
