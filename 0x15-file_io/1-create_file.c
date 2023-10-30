#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Create a file
 * @filename: parameter pointer
 * @text_content: string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, len, write_start;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	write_start = write(file, text_content, len);
	if (close(file) == -1)
		return (-1);
	return (write_start == -1 ? -1 : 1);
}
