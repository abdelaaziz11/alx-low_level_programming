#include "main.h"

/**
 * print_times_table - Prints the n table, begins with zero.
 * @n: numbers of the times table.
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 1; mult <= n; mult++)
			{
				prod = num * mult;
				if (mult == 0)
				{
					_putchar(prod + '0');
				} else if (prod < 10 && mult != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				} else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				} else if (prod >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}
