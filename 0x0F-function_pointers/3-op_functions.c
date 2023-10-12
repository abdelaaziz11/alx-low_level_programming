#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add operations
 * @a: input
 * @b: input
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub operatuins
 * @a: input
 * @b: input
 * Return: def
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply operatuins
 * @a: input
 * @b: input
 * Return: product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide operatuins
 * @a: input
 * @b: input
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod operatuins
 * @a: input
 * @b: input
 * Return: division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
