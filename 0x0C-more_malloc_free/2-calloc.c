#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array,
 * @nmemb: integer input
 * @size: integer input
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	s = malloc(total_size);
	if (s == NULL)
		return (NULL);
	return (s);
}
