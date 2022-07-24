#include <stdio.h>

int main(){

    int segundos, horas, minutos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos - horas * 3600;

    minutos = segundos / 60;
    segundos = segundos - minutos * 60;

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;

}
