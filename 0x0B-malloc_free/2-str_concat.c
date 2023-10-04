#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: input pointer char1
 * @s2: input pointer char2
 * Return: NULL
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	c = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		c[i + j] = s2[j];
	}
	c[i + j] = ('\0');
	return (c);
}
