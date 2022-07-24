#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C, delta;
 
    scanf("%lf %lf %lf", &A, &B, &C);
    
    delta = B*B - 4*A*C;
    
    if(delta < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    double R1 = (-B + sqrt(delta))/(2*A);
    double R2 = (-B - sqrt(delta))/(2*A);
    
    printf("R1 = %.5f\n", R1);
    printf("R2 = %.5f\n", R2);
 
    return 0;
}
