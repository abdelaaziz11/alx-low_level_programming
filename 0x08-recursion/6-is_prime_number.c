#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer input
 * @othrn: integer input
 * Return: 0 or 1
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - cheker all n if they can divide it
 * @n: int
 * @othrn: int
 * Return: int
 */

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0   ||	n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
