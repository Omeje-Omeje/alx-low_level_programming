#include <stdio.h>

/**
 * main - Function to print Fizz Buzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n = 0;

	for (i = 1; i <= 100; i++, n++)
	{
		if (n > 0)
		{
			putchar(' ');
		}
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
