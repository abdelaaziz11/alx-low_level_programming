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
	unsigned int i, j, s1_length, s2_length;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	s = malloc(s1_length + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	return (s);
}
