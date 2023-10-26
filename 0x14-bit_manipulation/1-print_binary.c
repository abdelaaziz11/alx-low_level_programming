#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation
 * @n: input
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	int c = sizeof(n) * 8;
	int z = 1;

	for (i = (c - 1); i >= 0; i--)
	{
		unsigned long int b = (n >> i) & 1;

		if (b)
			z = 0;
		if (!z)
			printf("%lu", b);
	}
	if (z)
		printf("0");
}
