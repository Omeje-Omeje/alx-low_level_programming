#include "main.h"

/**
 * print_alphabet_x10 - Function to print alphabet in a loop
 */

void print_alphabet_x10(void)
{
	/* declare variables */
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
