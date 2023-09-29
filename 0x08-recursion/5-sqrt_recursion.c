#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer input
 * @val: sqrt root
 * Return: natural number
*/
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - returns the square root
 * @n: integer input
 * @val: sqrt root
 * Return: integer
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
