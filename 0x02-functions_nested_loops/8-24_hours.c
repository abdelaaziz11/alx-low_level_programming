#include "main.h"

/**
 * Description: jack_bauer - prints rvery minute od the day
 *
 * Return: Alwas0 (Success)
*/

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 33; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
	return (0);
}
