#include <stdio.h>
 
int main(){

    int medi, a1, a2, z=0;
    scanf("%d",&medi);
    scanf("%d %d",&a1,&a2);
    int v[medi];
    double r=0;
    double m=0;

    for(int i=0;i<medi;i++){
        scanf("%d",&v[i]);
        if(v[i]>=a1 && v[i]<=a2){
            r+=v[i];
            m++;
        }
        else{
            z++;
        }
    }

    double f;
    f=r/m;
    if(z==medi){
        printf("-1");
    }
    else{
        printf("%.5f",f);
    }

    return 0;
}
