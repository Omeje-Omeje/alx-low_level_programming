/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: \n%ld byte(s)", sizeof(char));
	printf("Size of an int: \n%li byte(s)", sizeof(int));
	printf("Size of a long int: \n%li byte(s)", sizeof(long int));
	printf("Size of a long long int: \n%ld byte(s)", sizeof(long int));
	printf("Size of a float: \n%ld byte(s)", sizeof(float));

	return (0);
}
