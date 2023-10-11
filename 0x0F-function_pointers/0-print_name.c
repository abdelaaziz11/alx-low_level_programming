#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string input of name
 * @f: function pinter
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
