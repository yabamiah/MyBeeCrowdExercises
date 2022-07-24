#include <stdio.h>

int main()
{
	int diametro, larg, alt, prof;

	scanf("%d", &diametro);
	scanf("%d %d %d", &alt, &larg, &prof);

	if(alt >= diametro && larg >= diametro && prof >= diametro){
		printf("S\n");
	}else{
		printf("N\n");
	}

	return 0;

}
