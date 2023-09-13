#include "main.h"

/**
 * print_times_table - Prints the n table, begins with zero.
 * @n: numbers of the times table.
*/

void print_times_table(int n)
{
	int i, w, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (w = 1; w <= n; w++)
			{
				k = w * i;
				if (w == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && w != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}
