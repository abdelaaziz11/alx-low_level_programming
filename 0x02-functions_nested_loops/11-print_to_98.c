#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *	separated by comma, followed
 *	by space and number should be
 *	printed in order
 *
 * @c: input
*/

void print_to_98(int c)
{
	int count;

	if (c > 98)
		for (count = c; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = c; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
