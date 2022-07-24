#include <stdio.h>

int main()
{
	int nX, nY;
	
	do{
		scanf("%d %d", &nX, &nY);
		if(nX > nY){
			printf("Decrescente\n");
		}else if(nX < nY){
			printf("Crescente\n");
		}	
		
	}while(nX != nY);

	return 0;

}
