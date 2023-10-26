#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input value
 * @index: position input
 * Return: 0 , or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n  = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
