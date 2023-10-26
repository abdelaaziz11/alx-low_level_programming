#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another
 * @n: input
 * @m: input
 * Return: flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total;
	unsigned int c = 0;

	total = n ^ m;

	while (total != 0)
	{
		if ((total & 1) == 1)
			c++;
		total = total >> 1;
	}
	return (c);
}
