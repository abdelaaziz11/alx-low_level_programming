#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: string array
 * @size: size of array
 * @cmp: function pointer
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size && cmp && array)
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
