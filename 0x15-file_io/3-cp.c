#include "main.h"
#define USAGE "Usage: file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array pointer value of arguments
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
	int fd_from = 0, fd_to = 0;
	ssize_t bytes_read;
	char buffer[BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
		if (write(fd_to, buffer, bytes_read) != bytes_read)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (bytes_read == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	if (close(fd_from) == -1 ||	close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, (close(fd_from) == -1) ? fd_from : fd_to);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
