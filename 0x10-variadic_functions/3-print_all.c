#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * format_int - prints an int
 * @args: the list of args
 * @separator: string
 */
void format_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}
/**
 * format_char - prints a char
 * @args: the list of args
 * @separator: string
 */
void format_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}
/**
 * format_string - prints a string
 * @args: the list of args
 * @separator: string
 */
void format_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}
/**
 * format_float - prints floats
 * @args: the list of args
 * @separator: string
 */
void format_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_all - prints all
 * @format: formats of arg
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;
	token_t tokens[] = {{"c", format_char}, {"i", format_int}, {"f", format_float}, {"s", format_string}, {NULL, NULL}};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
