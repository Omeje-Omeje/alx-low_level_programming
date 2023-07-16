#include <stdio.h>
/**
 * main - Function to print alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
