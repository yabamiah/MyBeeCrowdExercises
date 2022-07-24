#include <stdio.h>

int main() {
	int n1, n2, n3, n4, ans1, ans2, temp;

	scanf("%d %d %d %d", &n1 ,&n2 ,&n3 ,&n4);

	if(n2 == n4)
	{
		ans1 = n1 + n3;
		ans2 = n2 = n4;
		if((n1 + n3) % n2 == 0)
		{	
			temp = n2 = n4;
			ans1 = (n1 + n3)/ temp;
			ans2 = temp / temp;
		}
	}
	else
	{
		ans1 = (n1 * n4) + (n3 * n2);
		ans2 = (n2 * n4);
		if(ans2 % ans1 == 0)
		{
			ans2 /= ans1;
			ans1 /= ans1;
		}
	}
	
	int k = ans1, y = ans2, resto = ans1 % ans2;

	while(resto != 0)
	{
		k = y;
		y = resto;
		resto = k % y; 
		
	}
	printf("++ %d\n", y);

	printf("%d %d\n", ans1 / y, ans2 / y);

	return 0;
}
