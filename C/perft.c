#include <stdio.h>

int main(){
	int vez, numero, aux;

	scanf("%d", &vez);

	for(int i=0;i<vez;i++){
		scanf("%d", &numero);
		aux = 0;
		for(int j=1;j<=numero/2;j++){
			if(numero%j==0){
				aux += j;
			}
		}
		if(aux == numero){
			printf("%d eh perfeito\n", numero);
		}else{
			printf("%d nao eh perfeito\n", numero);

		}

	}		

	return 0;
}
