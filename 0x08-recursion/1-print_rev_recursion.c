#include "main.h"

/**
 * _print_rev_recursion - Function to reverse string
 * @s: Operand
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
}
