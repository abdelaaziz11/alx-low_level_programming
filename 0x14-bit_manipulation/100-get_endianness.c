#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
