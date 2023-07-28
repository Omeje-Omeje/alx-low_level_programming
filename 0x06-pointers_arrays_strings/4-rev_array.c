#include "main.h"

/**
 * reverse_array - Function to reverse string
 * @a: Operand one
 * @n: Operand two
 *
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];

		a[i] = a[n];

		a[n] = tmp;
	}
}
