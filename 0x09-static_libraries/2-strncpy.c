#include "main.h"

/**
 * _strncpy - function that copies string
 *
 * @dest: pointer to the destinstion string
 * @src: pointer to the source string
 * @n: most n bytes from src
 *
 * Return: takes dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src && n > 0)
	{
		*dest = *src;
	dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
