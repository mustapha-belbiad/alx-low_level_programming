#include <stdio.h>

/**
 * main - program that prints all the  numbers of base 16 in lowercase.
 *
 * Return: 0
*/

int main(void)
{
	char n = '0';
	char s = 'a';

	while (n <= '9')
		putchar(n++);
	while (s < 'g')
		putchar(s++);
	putchar('\n');

	return (0);
}
