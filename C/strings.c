#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	int qtd;
	char sobrenome[43];

	scanf("%d", &qtd);
	getchar();

	for(int i = 0; i < qtd; i++) 
	{
		fgets(sobrenome, 42, stdin);

        printf("Nome: %s\n", sobrenome);
    }
}