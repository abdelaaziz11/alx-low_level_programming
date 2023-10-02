#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: the memory area pointed to by s
 * @b: the bytes constant
 * @n: the first bytes od the memory
 *
 * Return: he memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
