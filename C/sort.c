#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int contA = a, contB = b, contC = c, comp; 
        
        if(contA < contB){
                
                comp= contA;       
                contA = contB;
                contB = comp; 
        }
        if(contB < contC){
                comp = contB;
                contB = contC;
                contC = comp;
        }       
        if(contA < contB){
                comp = contA;
                contA = contB;
                contB = comp;
        }

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", contC, contB, contA, a, b, c);

	return 0;
}
