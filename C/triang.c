#include <stdio.h>

int main()
{
    double a, b, c, peri;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Perimetro = %.1lf\n", a + b + c);
    }else{
        printf("Area = %.1lf\n", (a+b)*c/2);
    }

    return 0;
}