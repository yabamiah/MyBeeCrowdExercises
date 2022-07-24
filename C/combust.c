#include <stdio.h>

int main()
{
    int velocidade, tempo, distancia;

    scanf("%d", &velocidade);
    scanf("%d",&tempo);

    distancia = velocidade * tempo;

    printf("%.3lf", distancia / 12.0);

}