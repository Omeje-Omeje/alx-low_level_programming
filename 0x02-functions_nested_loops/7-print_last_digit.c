#include "main.h"

/**
 * print_last_digit - Function to print the last digit
 * @n: n to be checked
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar('0' + lastDigit);

	return (0);
}
