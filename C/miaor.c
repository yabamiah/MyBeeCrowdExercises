#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, AB, BC;

    scanf("%d %d %d", &a, &b, &c);

    AB =  (a+b+abs(a-b)) / 2;

    BC = (AB+c+abs(AB-c)) / 2;

    printf("%d eh o maior\n", BC);
}