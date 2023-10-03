#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: integer of pointer input
 *
 * Return: pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *c;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	c = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (strlen(str) + 1); i++)
	{
		c[i] = str[i];
	}
	return (c);
}
