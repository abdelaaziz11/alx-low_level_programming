#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation
 * @n: input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	signed long int s;
	char c;
	int z;

	s = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	z = 0;

	while (s >= 0)
	{
		c = (n >> s) & 1;

		if (z == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				z = 1;
			}
		}

		s -= 1;
	}
}
