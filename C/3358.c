//PROBLEM 3358
//link = https://www.beecrowd.com.br/judge/pt/problems/view/3358
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int vogal(char *p) {
	switch(*p) {
		case 'a': return 1;
		case 'e': return 1;
		case 'i': return 1;
		case 'o': return 1;
		case 'u': return 1;
	}

	return 0;
}

int verif(int tam, char* p) 
{
	int i = 0;

	p[tam - 1] = '\0';
	p[0] = tolower(p[0]);

	for (; i < tam - 3; i++) {
		if (!vogal(&p[i]) && !vogal(&p[i+1]) && !vogal(&p[i+2]))
			return 0;
	}

	return 1;
}

int main() {
	int qtd;
	char sobrenome[43];

	scanf("%d", &qtd);
	getchar();

	for(int i = 0; i < qtd; i++) 
	{
		fgets(sobrenome, 42, stdin);
		sobrenome[strlen(sobrenome)] = '\0';		

		if(verif(strlen(sobrenome), sobrenome)) 
		{
			sobrenome[0] = toupper(sobrenome[0]);
			printf("%s eh facil\n", sobrenome);
		} 
		else 
		{
			sobrenome[0] = toupper(sobrenome[0]);
			printf("%s nao eh facil\n", sobrenome);
		}
	}

	return 0;
}