#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: arg of numbers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, s = 0;

	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	while (i--)
		s += va_arg(p, int);
	va_end(p);
	return (s);
}
