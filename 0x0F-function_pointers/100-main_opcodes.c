#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: the number of args
 * @argv: arg vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);

	for (i = 0; i < b; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < b - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
