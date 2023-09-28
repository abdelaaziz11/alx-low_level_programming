#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Prints a string
 *
 * @s: pointer character input
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
