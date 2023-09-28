#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: pointer char input
 *
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(*s);
		_print_rev_recursion(s--);
	}
	else
		putchar('\n');
}
