#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nX, nY, cont = 0;
 
 	scanf("%d %d", &nX, &nY);
	
	if(nY > nX){
		for(int i = nX; i <= nY; ++i){
			if(i % 13 != 0){
				cont += i;
			}
		}
	}else{
		for(int i = nY; i <=nX; ++i){
			if(i % 13 != 0){
				cont += i;
			}
		}
	}

	printf("%d\n", cont);			

	return 0;
}
