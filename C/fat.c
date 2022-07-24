#include <stdio.h>

int main(){

	int n, cont = 1;
	scanf("%d",  &n);
	printf("\n\n\n");

	for(int i = n; i>=1; --i){
		printf("%d ", i);
		cont *= i;
	}

	printf("\n%d", cont);

	return 0;

}
