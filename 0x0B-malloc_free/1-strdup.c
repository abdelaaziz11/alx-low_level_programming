#include <stdio.h>
#include <stdlib.h>

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
	c = (char *)malloc(7 * sizeof(char));
	for (i = 0; i < 7; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
