#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    
    int t,n,r=0;
    scanf("%d",&t);
    char s[256];
    char a[256]="char",b[256]="short",c[256]="int",d[256]="long",e[256]="float",f[256]="double";

    for(int i=0;i<t;i++){
        scanf("%s %d",s,&n);
        if(strcmp(s,a)==0){
            r=1*n;
            printf("%d\n",r);
        }
        else if(strcmp(s,b)==0){
            r=2*n;
            printf("%d\n",r);
        }
        else if(strcmp(s,c)==0){
            r=4*n;
            printf("%d\n",r);
        }
        else if(strcmp(s,d)==0){
            r=8*n;
            printf("%d\n",r);
        }
        else if(strcmp(s,e)==0){
            r=4*n;
            printf("%d\n",r);
        }
        else if(strcmp(s,f)==0){
            r=8*n;
            printf("%d\n",r);
        }
    }

    return 0;
}
