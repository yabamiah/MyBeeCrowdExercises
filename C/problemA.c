#include <stdio.h>

int main()
{
	int bytes = 1, kilobyte, kibibyte;

	kilobyte = bytes * 1000;
	kibibyte = bytes * 1024;

	printf("1 kilobyte = %d bytes\n", kilobyte);
	printf("1 kibibyte = %d bytes\n", kibibyte);

	return 0;

}