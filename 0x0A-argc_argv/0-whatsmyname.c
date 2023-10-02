#include <stdio.h>

/**
 * main - Write a program that prints its name
 * @argc: argument count int
 * @argv: argument value list
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
