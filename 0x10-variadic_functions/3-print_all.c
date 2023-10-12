#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * format_char - printfs a char from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void format_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * format_int - printfs an int from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void format_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * format_float - printfs a float from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void format_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * format_string - printfs a string from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void format_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;
	funckey key[4] = { {format_char, 'c'}, {format_int, 'i'},
			   {format_float, 'f'}, {format_string, 's'} };
	int keyind = 0, notfirst = 0;

	ptr = format;
	va_start(list, format);
	while (format != NULL && *ptr)
	{
		if (key[keyind].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(list);
			ptr++;
			keyind = -1;
		}
		keyind++;
		ptr += keyind / 4;
		keyind %= 4;
	}
	printf("\n");

	va_end(list);
}
