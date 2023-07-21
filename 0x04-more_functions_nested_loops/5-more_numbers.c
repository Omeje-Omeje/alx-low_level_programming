#include "main.h"

/**
 * more_numbers - Function to print numbers in loop
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
		
			_putchar(j%10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
