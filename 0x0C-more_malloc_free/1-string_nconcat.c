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
	unsigned int i, j, len1, len2, total_len;
	char *s;

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + n;

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (total_len + 1));

	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
	}
	else
		s[0] = '\0';

	for (j = 0; j < len2; j++)
		s[i + j] = s2[j];

	return (s);
}
