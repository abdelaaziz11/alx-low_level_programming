#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: destination input
 * @src: source input
 * @n: bytes from memory area src
 *
 * Return: takes destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}


	return (dest);
}
