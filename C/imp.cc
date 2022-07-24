#include <iostream>
 
using namespace std;
 
int main() {
 
    int nX, nY, cont = 0;

    scanf("%d %d", &nX, &nY);
    
    if(nX > nY){
    	for(int i = nX; i < nY; ++i){
        	if(i % 3 == 0){
            	cont += 1;
        	}
    	}
    }else{
	    for(int i = nY; i < nX; ++i){
		    if(i % 3 == 0){
			    cont += 1;
		    }
	    }
    }
    
    printf("%d\n", cont);
    
    return 0;
}
