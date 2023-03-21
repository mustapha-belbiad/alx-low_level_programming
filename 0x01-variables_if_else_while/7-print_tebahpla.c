#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse.
 *
 * Return: 0
*/
int main(void)
{
	int str;

	for  (str = 'z'; str >= 'a'; str--)
		putchar(str);

	putchar('\n');

	return (0);
}
