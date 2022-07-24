#include <stdio.h>
#include <string.h>

int main()
{
	int alunos, times;

	scanf("%d %d", &alunos ,&times);

	char nomes[alunos][10000];
	int hab[alunos];

	for(int i = 0; i < alunos; i++)
	{
		scanf("%s %d", nomes[i], hab[i]);
	}

	return 0;
}
