#include <stdio.h>

int main()
{
	int idade, aux=0;
	double media, i=0;

	do {
		scanf("%d", &idade);
		if(idade < 0){
			break;
		}else{
			aux += idade;
			i++;
		}
		
	} while (idade > 0);

	media = aux/i;
	printf("%.2lf\n", media);
	return 0;

}
