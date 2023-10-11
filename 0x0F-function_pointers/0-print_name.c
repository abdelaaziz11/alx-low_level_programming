#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string input of name
 * @f: function pinter
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (name);
}
