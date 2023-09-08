#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters excet q and e
 *
 * Return: Alwas 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
