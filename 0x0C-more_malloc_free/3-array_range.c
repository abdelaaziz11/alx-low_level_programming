#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *s;
	int i, total_size;

	if (min > max)
		return (NULL);
	total_size = max - min + 1;

	s = malloc(sizeof(int) * total_size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		s[i] = min++;
	return (s);
}
