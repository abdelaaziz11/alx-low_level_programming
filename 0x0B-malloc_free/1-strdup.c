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

	c = (char *)malloc(strlen(str) * sizeof(char));

	if (str == 0 ||	c < str)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
	{
		c[i] = str[i];
	}
	return (c);
}
