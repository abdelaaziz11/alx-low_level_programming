#include "main.h"

/**
 * print_square - print a square using the charcter #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	} else
	{
	int row, column;

	for (row = 1; row <= size; row++)
	{
	for (column = 1; column <= size; column++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
