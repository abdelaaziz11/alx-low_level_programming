#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer file
 * @letters: input
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_write;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");

	if (!fp)
		return (0);

	buffer = (char *)malloc(letters);

	if (!buffer)
		return (0);

	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	fclose(fp);
	free(buffer);

	if (bytes_read != bytes_write)
		return (0);
	return (bytes_write);
}
