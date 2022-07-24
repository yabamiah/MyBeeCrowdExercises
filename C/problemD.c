#include <stdio.h>

int main()
{

    int A, N, borave;

    scanf("%d %d", &N, &A);
    borave = N % A; 

    if(borave == 0)
        printf("Sim\n");
    else
        printf("Nao\n");

    return 0;
}