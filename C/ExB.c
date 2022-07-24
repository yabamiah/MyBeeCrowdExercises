#include <stdio.h>
#include <math.h>

int main()
{
    int V, Vo, a, s;

    scanf("%d %d %d", &Vo, &a, &s);

    V = sqrt( ((Vo*Vo) + (2*a*s))  );

    printf("Velocida final: %d\n", V);

    return 0;
}