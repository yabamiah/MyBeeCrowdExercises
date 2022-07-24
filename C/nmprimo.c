#include <stdio.h>
#include <math.h>

int doido(int num){
        int root, ind;
        root=sqrt(num);
        for(int j=3; j<=root; j=j+2)
        {
                if(num%j==0)
                        return 0;
        }
       return 1;
}

int main()
{
	int num, tests; 

	scanf("%d", &tests);

	for(int i = 1; i <= tests; ++i){

                scanf("%d", &num);

        
                //num = i; alteração para testar todos os numeros de [1,100]
                if(num == 1){
                        printf("%d nao eh primo\n", num);
                }else if(num % 2 == 0){
                        if(num == 2){
                                printf("%d eh primo\n", num);
                        }else{
                                printf("%d nao eh primo\n", num);
                        }
                }else if(num % 3 == 0){
                        if(num == 3){
                                printf("%d eh primo\n", num);
                        }else{
                                printf("%d nao eh primo\n", num);
                        }
                }else if(num % 5 == 0){
                        if(num == 5){
                                printf("%d eh primo\n", num);
                        }else{
                                printf("%d nao eh primo\n", num);
                        }
                }else if(num % 7 == 0){
                        if(num == 7){
                                printf("%d eh primo\n", num);
                        }else{
                                printf("%d nao eh primo\n", num);
                        }
                }else if(num % 11 == 0){
                        if(num == 11){
                                printf("%d eh primo\n", num);
                        }else{
                                printf("%d nao eh primo\n", num);}
                }else if(doido(num) == 0){
                        printf("%d nao eh primo\n", num);
                }else if(doido(num) == 1){
                        printf("%d eh primo\n", num);
                }else{
                        printf("%d eh primo\n", num);
                }
	}

	return 0;

}
