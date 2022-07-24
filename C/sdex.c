#include <stdio.h>
#include <math.h>

int esfera(int d){

	double const pi = 3.14159;
	int r, esfera;

	r = d/2;
	esfera = 4*pi*r*r*r/3;

	return esfera;
}

int caixa(int a, int l, int p){

	int volumeC;

	volumeC = a * l * p;

	return volumeC;
}

int main()
{
	int diametro, alt, larg, prof;

	scanf("%d", &diametro);
	scanf("%d %d %d", &alt, &larg, &prof);

	if(esfera(diametro) < caixa(alt, larg, prof)){
		printf("S\n");
	}else{
		printf("N\n");
	}

	printf("%d\n", esfera(diametro));
	printf("%d\n", caixa(alt, larg, prof));
	return 0;

}
