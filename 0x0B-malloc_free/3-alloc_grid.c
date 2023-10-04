#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *alloc_grid - returns a pointer to 2 dimensional array of integer
 *
 * @width: input
 * @height: input
 *
 * Return: pointer to the allocated 2D array
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **c;

	c = malloc(height * sizeof(*c));
	if (width <= 0 ||	height <= 0 ||	c == 0)
	{
		return (NULL);
	}
	else
	{
	for (w = 0; w < height; w++)
	{
		c[w] = malloc(width * sizeof(**c));
		if (c[w] == 0)
		{
			while (w--)
				free(c[w]);
			free(c);
			return (NULL);
		}

		for (h = 0; h < width; h++)
		c[w][h] = 0;
	}
	}

	return (c);
}
