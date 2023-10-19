#include <stdio.h>

void my_constructor_fun(void) __attribute__((constructor));

/**
 * main - Prints text of function before main function executed
 *
 * Return: void
 */

void my_constructor_fun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
