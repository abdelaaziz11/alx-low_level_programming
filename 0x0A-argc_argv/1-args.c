#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count int
 * @argv: argument value list
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
