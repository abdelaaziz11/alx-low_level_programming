#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string
 * @str: pointer
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	putchar(str[i]);
	i++;
	}
}

/**
 * _atoi - convert a string to int
 * @c: character
 * Return: int converted
 */

int _atoi(const char *c)
{
	int p = 1;
	unsigned long int res = 0, num, i;

	for (num = 0; !(c[num] >= 48 && c[num] <= 57); num++)
	{
	if (c[num] == '-')
	{
	p *= -1;
	}
	}

	for (i = num; c[i] >= 48 && c[i] <= 57; i++)
	{
	res *= 10;
	res += (c[i] - 48);
	}

	return (p * res);
}

/**
 * print_integer - prints an integer
 * @m: integer
 * Return: 0
 */

void print_integer(unsigned long int m)
{
	unsigned long int div = 1, i, res;

	for (i = 0; m / div > 9; i++, div *= 10)
	;

	for (; div >= 1; m %= div, div /= 10)
	{
	res = m / div;
	putchar('0' + res);
	}
}

/**
 * main - print multiplies two positive numbers
 * @argc: integer
 * @argv: list pointer to point
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	print_integer(_atoi(argv[1]) * _atoi(argv[2]));
	putchar('\n');
	return (0);
}
