#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string char input
 *
 * Return: integer of len
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == ('\0'))
	{
		return (len);
	}
	else
	{
	len = len + 1;

	return (len + _strlen_recursion(s + 1));
	}
}
