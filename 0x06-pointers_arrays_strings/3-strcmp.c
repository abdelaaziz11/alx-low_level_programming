#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return:
 *   - 0 if the strings are equal.
 *   - A negative integer if s1 is less than s2.
 *   - A positive integer if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return ((int)(*s1 - *s2));
}
