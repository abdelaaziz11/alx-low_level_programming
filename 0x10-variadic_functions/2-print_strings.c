#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings by a new line
 * @separator: string
 * @n: numbers of string
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		if (!separator[i])
			printf("(nil)");
	}

	va_end(args);
	printf("\n");
}
