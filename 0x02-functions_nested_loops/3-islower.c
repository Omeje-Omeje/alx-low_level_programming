#include "main.h"

/**
 * _islower - Function to check for lowercase
 * @c: c to be checked
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
	/* check to see if c is lowercase */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
