#include <stdio.h>

int main()
{
	int comp, alt, comp2, alt2, tipo2, tipo1 = 0;

	scanf("%d %d", &alt, &comp);

	alt2 = alt - 1;
	comp2 = comp - 1; 

	for(int i = 1; i <= alt; ++i){
		tipo1 += comp;
	}

	for(int i = 1; i <= alt2; ++i){
		tipo1 += comp2;
	}

	alt2 += alt2;
	comp2 += comp2;

	tipo2 = alt2 + comp2;

	printf("%d\n", tipo1);
	printf("%d\n", tipo2);

	return 0;
}
