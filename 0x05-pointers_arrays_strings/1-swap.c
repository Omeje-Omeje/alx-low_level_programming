#include "main.h"

/**
 * swap_int - Function that swaps two integers
 * @a: First operand
 * @b: Second Operand
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
