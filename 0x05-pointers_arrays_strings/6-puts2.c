#include "main.h"

/**
 * puts2 - Functionto print every other char of a string
 * @str: Operand
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	char *c = str;

	while (*c != '\0')
	{
		c++;
		i++;
	}

	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
