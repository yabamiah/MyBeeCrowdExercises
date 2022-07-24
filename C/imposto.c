#include <stdio.h>

int main()
{
    double salario, impRenda, impRenda8;
    scanf("%lf", &salario);

    if(salario <= 2000.00){
        printf("Isento\n");
    }else if(salario > 2000 && salario <= 3000){
        impRenda = (salario-2000)*0.08;
        printf("R$ %.2f\n", impRenda);
    }else if(salario > 3000 && salario <= 4500){
        impRenda = (1000*0.08) + ((salario-3000)*0.18);
        printf("R$ %.2lf\n", impRenda);
    }else if(salario > 4500){
        impRenda = (1000*0.08) + (1500*0.18) + ((salario-4500)*0.28);
        printf("R$ %.2lf\n", impRenda);
    }

    return 0;
}