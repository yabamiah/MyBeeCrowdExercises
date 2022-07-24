// Sequencia IJ 2 - 1096
// @author: Yabamiah

#include <stdio.h>

int main() 
{
	int I = 1, J = 8;

	do {
		J--;
		printf("I=%d J=%d\n", I, J);
		if (J <= 5) {
			J += 3;
			I += 2;
		}
	} while (I <= 9);

	return 0;
}
