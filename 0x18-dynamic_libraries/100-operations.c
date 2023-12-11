#include <stdio.h>

/**
 * mul - mutplication
 * Return: number
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * add - addition
 * Return: number
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - sub
 * Return: number
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * div - division
 * Return: number
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: 0\n");
		return 0;
	}
	return (a / b);
}
/**
 * mod - modulas
 * Return: number
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: 0\n");
		return 0;
	return (a % b);
}
