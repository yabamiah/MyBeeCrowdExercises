#include <stdio.h>

int main()
{
	int f1, f2, f3, M, ans;

	scanf("%d %d %d", &M, &f1 ,&f2);

	f3 = M - (f1 + f2);

	if(f1 > f2 && f1 > f3)
		ans = f1;
	else if(f2 > f1 && f2 > f3)
		ans = f2;
	else if(f3 > f1 && f3 > f2)
		ans = f3;	
	
	printf("%d\n", ans);

	return 0;
}
