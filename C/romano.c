#include <stdio.h>
#include <string.h>
int main()
{
  char num[4];
  int tama;
  scanf("%s", num);

  tama = strlen(num);

  //Centena
  if(tama == 3){
    switch(num[0]){
      case '1' :
        printf("C");
        break;
        case '2' :
          printf("CC");
          break;
        case '3' : 
          printf("CCC");
          break;
        case '4' :
          printf("CD");
          break;
        case '5' :
          printf("D");
          break;
        case '6' :
          printf("DC");
          break;
        case '7' :
          printf("DCC");
          break;
        case '8' :
          printf("DCCC");
          break;
        case '9' :
          printf("CM");
          break;
    }
    switch(num[1]){
      case '1' :
        printf("X");
        break;
        case '2' :
          printf("XX");
          break;
        case '3' :
          printf("XXX");
          break;
        case '4' :
          printf("XL");
          break;
        case '5' :
          printf("L");
          break;
        case '6' :
          printf("LX");
          break;
        case '7' :
          printf("LXX");
          break;
        case '8' :
          printf("LXXX");
          break;
        case '9' :
          printf("XC");
          break;
    }
    switch(num[2]){
      case '1' :
        printf("I");
        break;
        case '2' :
          printf("II");
          break;
        case '3' :
          printf("III");
          break;
        case '4' :
          printf("IV");
          break;
        case '5' :
          printf("V");
          break;
        case '6' :
          printf("VI");
          break;
        case '7' :
          printf("VII");
          break;
        case '8' :
          printf("VIII");
          break;
        case '9' :
          printf("IX");
          break;
    }
    printf("\n");
  }

  if(tama == 2){
    switch(num[0]){
      case '1' :
        printf("X");
        break;
        case '2' :
          printf("XX");
          break;
        case '3' :
          printf("XXX");
          break;
        case '4' :
          printf("XL");
          break;
        case '5' :
          printf("L");
          break;
        case '6' :
          printf("LX");
          break;
        case '7' :
          printf("LXX");
          break;
        case '8' :
          printf("LXXX");
          break;
        case '9' :
          printf("XC");
          break;
    }
    switch(num[1]){
      case '1' :
        printf("I");
        break;
        case '2' :
          printf("II");
          break;
        case '3' :
          printf("III");
          break;
        case '4' :
          printf("IV");
          break;
        case '5' :
          printf("V");
          break;
        case '6' :
          printf("VI");
          break;
        case '7' :
          printf("VII");
          break;
        case '8' :
          printf("VIII");
          break;
        case '9' :
          printf("IX");
          break;
    }
    printf("\n");
  }

  if(tama == 1){
    switch(num[0]){
      case '1' :
        printf("I");
        break;
        case '2' :
          printf("II");
          break;
        case '3' :
          printf("III");
          break;
        case '4' :
          printf("IV");
          break;
        case '5' :
          printf("V");
          break;
        case '6' :
          printf("VI");
          break;
        case '7' :
          printf("VII");
          break;
        case '8' :
          printf("VIII");
          break;
        case '9' :
          printf("IX");
          break;
    }
    printf("\n");
  }

  return 0;
}