#include <stdio.h>
#include <ctype.h>

int main(void) {
	int N, i, j, soma;
	char linha[100], numero[100];

	scanf("%d", &N);

	while(N--) {
		scanf("%s", linha);

		i = 0;
		soma = 0;

		while(linha[i] != '\0') {
			if(linha[i] >= '0' && linha[i] <= '9') {
				j = 0;
				while(1) {
					if(!isdigit(linha[i]))
						break;

					numero[j] = linha[i];

					j++, i++;
				}

				numero[j] = '\0';
				int numeroInt;
				sscanf(numero, "%d", &numeroInt);
				soma += numeroInt;
			}

			i++;
		}

		printf("%d\n", soma);
	}
}
