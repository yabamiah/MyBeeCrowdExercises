#include <stdio.h>

int fib(long long posix)
{
  long long fibs[posix + 1], h;

  fibs[0] = 0;
  fibs[1] = 1;

  for (int i = 2; i <= posix; ++i)
  {
    if(i <= 1){
      h = i;
    }else{
    fibs[i] = fibs[i - 1] + fibs[i - 2];

    h = fibs[i];
    }
  }

  return h;
}

int main()
{

  long long vez, posix;

  scanf("%lld", &vez);

  for (int i = 0; i < vez; ++i)
  {
    int aux;
    scanf("%lld", &posix);
    aux = fib(posix);
    printf("Fib(%lld) = %lld\n", posix, aux);
  }

}
