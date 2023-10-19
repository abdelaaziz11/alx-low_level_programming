#include <stdio.h>

void my_constructor_fun(void) __attribute__((constructor));

/**
 * my_constructor_fun - Prints text of function before main function executed
 *
 * Return: void
 */

void my_constructor_fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
