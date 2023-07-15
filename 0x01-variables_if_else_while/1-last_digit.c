#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Function to print the last digit of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastdigit;
	char string = "6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get the last digit and store in lastdigit */
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit of %i is %i and is less than %i\n", n, lastdigit, string);
	}

	return (0);
}
