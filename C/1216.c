#include <stdio.h>
#include <string.h>

int main() 
{
	char nome[256];	
	float addr, md = 0.0, x = 0.0;

	while (scanf("%s", nome) != EOF) 
	{
		scanf("%d", &addr);
		md += addr;
		x++;
	}

	printf("%.1f\n", md/x);
}
