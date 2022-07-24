// Mano, acho que isso aqui tá funcionando
#include <stdio.h>

int main()
{
  int tam, ans = 0;
  scanf("%d", &tam);
  
  int vet[tam];

  for (int i = 0; i < tam; ++i) {
	 scanf("%d", &vet[i]);
  }

  for (int i = 0; i < tam; ++i) {
	 if (vet[i] != vet[i+2]) {
		if (vet[i] != vet[i+1])
		  ans++;
	 } else if (vet[i] != vet[i+1]) {
		  ans++;
	 }
  }
  printf("%d\n", ans);
  
  return 0;
}
