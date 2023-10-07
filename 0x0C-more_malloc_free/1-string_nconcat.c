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
	char *s;
	unsigned int i, j, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	s = malloc(len1 + n + 1);

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

	s[i] = '\0';

	return (s);
}
