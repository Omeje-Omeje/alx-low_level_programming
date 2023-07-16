#include <stdio.h>
/**
 * main - Function that prints hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
