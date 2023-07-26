#include "main.h"
#include <stdio.h>
/**
 * print_array - Funtion that print elem of arr
 * @a: First operand
 * @n: Second operand
 *
 * Return: Always 0 (success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
		if (i == n - 1)
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
