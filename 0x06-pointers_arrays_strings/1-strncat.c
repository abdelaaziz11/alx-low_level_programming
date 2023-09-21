#include "main.h"

/**
 * _strncat - the functoin _strncat is similar to the _strcat funtoin
 *
 * @dest: pointer to the destination string
 * @src: pointer to tyhe source string
 * @n: most n bytes from src
 *
 * Return: takes dest string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src && n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (original_dest);
}
