#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer input character
 * Return: covert number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int total = 0, dec_val = 1, i;

	if (!b)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += dec_val;
		dec_val *= 2;
	}
	return (total);
}
