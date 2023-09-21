#include "main.h"

/**
 * cap_string - Capitalizes all worlds of a string
 * @ser: The string to be capitalized
 * Return: a pointer to changed string
*/

char *cap_string(char *ser)
{
	int tr = 0;

	while (ser[tr])
	{
		while (!(ser[tr] >= 'a' && ser[tr] <= 'z'))
			tr++;
		if (ser[tr - 1] == ' ' ||
				ser[tr - 1] == '\t' ||
				ser[tr - 1] == '\n' ||
				ser[tr - 1] == ',' ||
				ser[tr - 1] == ';' ||
				ser[tr - 1] == '.' ||
				ser[tr - 1] == '!' ||
				ser[tr - 1] == '?' ||
				ser[tr - 1] == '"' ||
				ser[tr - 1] == '(' ||
				ser[tr - 1] == ')' ||
				ser[tr - 1] == '{' ||
				ser[tr - 1] == '}' ||
				tr == 0)
			ser[tr] -= 32;
		tr++;
	}
	return (ser);
}
