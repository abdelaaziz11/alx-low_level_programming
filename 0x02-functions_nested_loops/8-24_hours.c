#include "main.h"

/**
 * jack_bauer - prints rvery minute od the day
*/

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 33; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}