#include <stdio.h>

int main()
{
  int casos, qtd;
  float porcent = 0;

  scanf("%d", &casos);

  while (casos--)
  {
	 scanf("%d", &qtd);

	 int notas[qtd], media, soma = 0;
 
	 for (int i = 0; i < qtd; i++) {
		   scanf("%d", &notas[i]);
			soma += notas[i];			
	 }
	 
	 media = soma / qtd;

	 for (int i = 0; i < qtd; i++) {
		if (notas[i] > media)
		    porcent++;
		}
	 
	 printf("%.3f%\n", (porcent/qtd)*100);
	 porcent = 0;
	}

  return 0;
}
