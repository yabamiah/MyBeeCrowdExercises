#include <stdio.h>

int main()
{
  int dias, horasTrab = 0, horasTotal;

  scanf("%d", &dias);

  int horas[dias];

  // Horas total trabalhadas
  for(int i = 0; i < dias; ++i){
    scanf("%d", &horas[i]);
    horasTrab += horas[i];
  }
  // Horas total útil
  horasTotal = dias * 8;

  if(horasTotal == horasTrab)
    printf("A jornada de trabalho foi cumprida\n");

  if(horasTotal > horasTrab){
    int falta = horasTotal - horasTrab;
    printf("Horas a serem pagas: %d hora(s)\n", falta);
  }

  if(horasTotal < horasTrab){
    int sobra = horasTrab - horasTotal;
    printf("Banco de horas: %d hora(s)\n", sobra);
  }

  return 0;
}
