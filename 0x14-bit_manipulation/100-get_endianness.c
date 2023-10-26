#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	union
	{
		unsigned int number;
		unsigned char bytes[sizeof(unsigned int)];
	} test;

	test.number = 1;
	if (test.bytes[0] == 1)
		return (1);
	else
		return (0);
}
