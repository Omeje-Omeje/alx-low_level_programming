#include <stdio.h>
/**
 * main - Function to print alphabets in lowercase without letter q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c = 'q' && c = 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
