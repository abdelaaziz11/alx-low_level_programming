#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: length
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: string 
 * @text_content: string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t l;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
		l = write(file, text_content, _strlen(text_content));
	close(file);
	if (l == -1)
		return (-1);
	return (1);
}
