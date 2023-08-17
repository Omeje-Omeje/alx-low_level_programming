#include "function_pointers.h"

/**
 * print_name - Function to print name
 * @name: operand to one
 * @f: Pointer to a function
 *
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
	{
		f(name);
	}
}
