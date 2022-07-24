#include <stdio.h>

double triangulo(double a, double c)
{
	return (a * c) / 2;
}

double circulo(double c)
{
	return 3.14159 * c * c;
}

double trapezio(double a, double b, double c)
{
	return (( a + b ) * c) / 2;
}

double quadrado(double b)
{
	return b * b;
}

double retangulo(double a, double b)
{
	return a * b;
}

int main()
{
	double A, B, C;

	scanf("%lf %lf %lf", &A, &B, &C );

	printf("TRIANGULO: %.3lf\n", triangulo(A, C));
	printf("CIRCULO: %.3lf\n", circulo(C));
	printf("TRAPEZIO: %.3lf\n", trapezio(A, B, C));
	printf("QUADRADO: %.3lf\n", quadrado(B));
	printf("RETANGULO: %.3lf\n", retangulo(A, B));

	return 0;

}
