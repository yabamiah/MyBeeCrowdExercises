#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int i=1, j=1;
    char s[102], r[102];
    scanf("%s %s", r, s);
    s[strlen(s)]=0;
    r[strlen(r)-1]=0;
   while(s[i]){
    s[i]=tolower(s[i]);
     ++i;
     }
     while(r[j]){
    r[j]=tolower(r[j]);
     ++j;
       }
     printf("%s %s\n", s, r);


}
