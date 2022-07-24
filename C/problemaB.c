#include <stdio.h>

int main()
{
	int medi, val1, val2, total = 0, err = 0;
	int velo[medi];
	double ans, g = 0;

	scanf("%d", &medi);
	
	scanf("%d %d", &val1, &val2);

 	for(int i = 0; i < medi; ++i){

		scanf("%d", &velo[i]);

		if(velo[i] >= val1 && velo[i] <= val2){
			total += velo[i];
			g++;
		}
		else
			err++;
	}
	
	ans = total/g;

	if(err == medi)
		printf("-1");
	else
		printf("%.5lf", ans);

	return 0;
}
