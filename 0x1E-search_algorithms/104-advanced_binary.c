#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 * @array: the array
 * @size: the array size
 * @value: value
 * Return: the number index
 */

int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: the array
 * @size:  the array size
 * @value: value
 * Return: the number index
 */

int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = rec_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
