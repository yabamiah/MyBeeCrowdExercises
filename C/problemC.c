#include <stdio.h>

int main()
{
    int l, p, total;

    scanf("%d %d", &l, &p);
    total = l + p;

    if(total % 2 == 0)
        printf("Pedro\n");
    else
        printf("Lucas\n");

    return 0;
}