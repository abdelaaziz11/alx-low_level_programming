#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer input character
 * Return: covert number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		total = total << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			total = total | 1;
		b++;
	}
	return (total);
}
