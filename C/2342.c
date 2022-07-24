#include <stdio.h>

int main()
{
	int lim, n1, n2, ans;
	char op;

	scanf("%d", &lim);
	scanf("%d %c %d", &n1 ,&op ,&n2);

	switch(op)
	{
		case '+':
			ans = n1 + n2;
			break;
		case '*':
			ans = n1 * n2;
			break;
	}

	if(ans > lim)
		printf("OVERFLOW\n");
	else
		printf("OK\n");

	return 0;
}
