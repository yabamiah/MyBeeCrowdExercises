#include <stdio.h>

int main()
{
	int divi, total = 0;

	scanf("%d", &divi);
	
	int pedacos[divi];
	for(int i = 0; i < divi; ++i){
		scanf("%d", &pedacos[i]);
		total += pedacos[i];
	}

	printf("%d\n", total - divi);
}
