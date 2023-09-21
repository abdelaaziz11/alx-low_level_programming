#include "main.h"

/**
 * _strcat - This function appends the src string
 * to the dest string
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination string (dest)
*/

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = ('\0');

	return (original_dest);
}
