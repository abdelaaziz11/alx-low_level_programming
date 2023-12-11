#include <stdio.h>

/**
 * mul - mutplication
 * @a: a
 * @b: b
 * Return: number
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * add - addition
 * @a: a
 * @b: b
 * Return: number
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - sub
 * @a: a
 * @b: b
 * Return: number
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * div - division
 * @b: b
 * @a: a
 * Return: number
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: 0\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - modulas
 * @a: a
 * @b: b
 * Return: number
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: 0\n");
		return (0);
	return (a % b);
}
