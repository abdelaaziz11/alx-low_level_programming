#include <stdio.h>

/**
 * main - Entry point
 *
 * Desription: print a-z in reverse
 *
 * Return: Alwas 0 (Success)
 *
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
