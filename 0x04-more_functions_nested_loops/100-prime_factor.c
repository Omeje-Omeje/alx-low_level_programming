#include <stdio.h>

/**
 * main - Function to print the largest prime number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int x;
	long int y = 2, maxPrime;

	x = 612852475143;

	while (x != 0)
	{
		if (x % y != 0)
		{
			y = y + 1;
		}
		else
		{
			maxPrime = x;

			x = x / y;

			if (x == 1)
			{
				printf("The largest prime factor = %li\n", maxPrime);

				break;
			}
		}
	}
	return (0);
}
