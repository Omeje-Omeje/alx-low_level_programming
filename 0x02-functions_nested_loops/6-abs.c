#include "main.h"

/**
 * _abs - Function to print absolute value
 * @n: Operand
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
