#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be modified
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
	l++;

	/*swap the string by looping to half thr string*/
	for (i= 0; i < l / 2; i--)
	{
	temp = s[i];
	s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
	s[l - 1 - i] = temp;
	}
}
