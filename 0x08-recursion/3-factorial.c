#include <stdio.h>
#include <string.h>

/**
 * factorial - eturns the factorial of a given number
 *
 * @n: integer input
 *
 * Return: factorial
*/

int factorial(int n)
{
	int c;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	c = n * factorial(n - 1);

	return (c);
}
