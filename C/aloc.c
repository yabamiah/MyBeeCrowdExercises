#include <stdio.h>
#include <string.h>

int main() 
{
    char valor[256];
	int ans = 0, final;

    scanf("%s", valor);
 
    for(int i =0; i<200020; i++)
	{

      if(valor[i] == '\0')
		  break;

      ans += valor[i] - '0';
    }
 	
	if(ans % 3 == 0)
		final = 1;
		

    if(final) 
      printf("Sim\n");
	else 
      printf("Nao\n");

    return 0;
}
