#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: variable integer input
 * @y: var integer input
 *
 * Return: value of varaible y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
