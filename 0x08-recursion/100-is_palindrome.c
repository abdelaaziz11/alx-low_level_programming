#include <stdio.h>

/**
 *  last_index - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: pointer char input
 * Return: integer
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a polindrome
 * @s: string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - this is a cheker of do the palindome
 * @s: string
 * @start: int moves right to left
 * @end: integer move left to right
 * @mod: integer
 * Return: 0 or 1
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) ||	(start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
