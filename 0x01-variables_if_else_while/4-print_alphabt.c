#include <stdio.h>
/**
 * main - print the alphabet in lowercase, except q and e.
 *
 * Return: 0
*/
int main(void)
{
	char str = 'a';

	while(str <= 'z')
	{
		if (str != 'e' && str != 'q')
		putchar(str);	
		str++;
	}
	
	putchar('\n');
	return (0);
}
