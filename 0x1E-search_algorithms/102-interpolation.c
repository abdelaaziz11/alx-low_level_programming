#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: the array
 * @size: array size
 * @value: the value
 * Return: index of the number or -1 if Null
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double varf;

	if (array == NULL || size == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size != NULL)
	{
		varf = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + varf);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
