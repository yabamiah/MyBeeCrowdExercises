#include <stdio.h>
#include <math.h>

int main()
{
    double a = 2.34, b = 45.2;

    double resto = fmod(a, b);

    printf("%lf %% %lf = %lf", a, b, resto);
}
