#include <stdio.h>

/**
 *  main - program print size data type
 *  Return:0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", (int) sizeof(a));
	printf("Size of a int: %d byte(s)\n", (int) sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(c));
	printf("Size of a lolng lolng int: %d byte(s)\n", (int) sizeof(d));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(f));
	return (0);

}
