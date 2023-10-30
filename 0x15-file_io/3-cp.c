#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array pointer value of arguments
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to;
	char buffer[BUF_SIZE];
	ssize_t bytes_read;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (bytes_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (fd_to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (EXIT_SUCCESS);
}
