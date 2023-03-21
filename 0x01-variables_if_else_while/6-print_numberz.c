#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: should return 0
 */
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
		putchar((nb % 10) + '0');

	putchar('\n');

	return (0);
}
