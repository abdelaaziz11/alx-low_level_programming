#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - description of this
 * @ad: int input
 * @ar: arguments
 * Return: string
*/

char *argstostr(int ad, char **ar)
{
	int i = 0, nc = 0, j = 0, cmp = 0;
	char *s;

	if (ad == 0 ||	ar == NULL)
	{
		return (NULL);
	}
	for (; i < ad; i++, nc++)
		nc += _strlen(ar[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ad; i++)
	{
		for (j = 0; ar[i][j] != '\0'; j++, cmp++)
			s[cmp] = ar[i][j];

		s[cmp] = '\n';
		cmp++;
	}
	s[cmp] = '\0';
	return (s);
}
