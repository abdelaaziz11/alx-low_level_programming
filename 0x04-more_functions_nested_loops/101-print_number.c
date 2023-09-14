#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int nl;

	if  (n < 0)
	{
	nl = -n;
	_putchar('-');
	}
	else
	{
	nl = n;
	}

	if (nl / 10)
	{
	print_number(nl / 10);
	}

	_putchar((nl % 10) + '0');
}
