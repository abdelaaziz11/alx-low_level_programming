#include "search_algos.h"

/**
  * linear_search - searches for a value in an array of integers
  * @array: array
  * @size: array size
  * @value: target value
  * Return: the index or -1 if NULL
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
