#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: input
 * @index: index input
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z, k;

	z = sizeof(*n) * 8 - 1;

	if (index > z)
		return (-1);

	k = 1 << index;

	*n = k | *n;

	return (1);
}
