#include "main.h"

/**
 * _isupper - Function to check for uppercase
 * @c: operand
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	/* loop the alphabets */

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
