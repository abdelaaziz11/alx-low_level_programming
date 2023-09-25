#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: character prointer input
 * @c: character input
 *
 * Return: character
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
