#include "main.h"

/**
 * _isalpha - Function to check for lower || upper case
 * @c: c to check
 *
 * Return: 1 if c is lower or upper. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
