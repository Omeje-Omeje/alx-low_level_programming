#include "main.h"
/**
 * print_numbers - Function to print numbers
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
