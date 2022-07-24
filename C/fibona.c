#include<stdio.h>
int main()
{
   long long int posix, ant = 0, atu = 1, prox, c;
   int vez;
   scanf("%d", &vez);
   for(int i=1; i<=vez; i++, ant = 0, atu = 1)
   {
       scanf("%lld",&posix);
       posix=posix+1;
       for ( c = 0 ; c < posix ; c++ )
       {
          if (c <= 1){
	  	prox = c;
	}else{
             prox = ant + atu;
             ant = atu;
             atu = prox;
          }
       }
          printf("Fib(%lld) = %lld\n",posix-1,prox);
   }
   return 0;
}
