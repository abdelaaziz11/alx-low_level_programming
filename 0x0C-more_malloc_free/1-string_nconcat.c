#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @n: unsignde integer input
 * @s1: pointer of char
 * @s2: pointer of char
 * Return: a pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		n = strlen(s2);
		s = malloc(strlen(s1) + n + 1);
	}
	else
		s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	return (s);
}
