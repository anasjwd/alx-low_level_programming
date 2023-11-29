#include "main.h"
#include <stdio.h>

/**
 * ft_close - close a file descriptor.
 * @fd_from: the file we copied from.
 * @fd_to: the file we copied to.
 *
 * Return: 0 on success, 100 on failue.
 */
int ft_close(int fd_from, int fd_to)
{
	int	close_checker;

	close_checker = close(fd_to);
	if (close_checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}
	close_checker = close(fd_from);
	if (close_checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	return (0);
}

/**
 * main - program that copies the content of a file to another file.
 * @ac: number of arguments passed.
 * @av: array of strings containing the arguments.
 *
 * Return: 0 on success, exit codes (97, 98, 99, 100) on failure.
 */
int main(int ac, char **av)
{
	int	fd_from, fd_to;
	char	buffer[1024];
	ssize_t	read_bytes = 1024, wrote_bytes;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		return (99);
	}
	while (read_bytes == 1024)
	{
		read_bytes = read(fd_from, buffer, 1024);
		if (read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			ft_close(fd_from, fd_to);
			return (98);
		}
		wrote_bytes = write(fd_to, buffer, read_bytes);
		if (wrote_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			ft_close(fd_from, fd_to);
			return (99);
		}
	}
	return (ft_close(fd_from, fd_to));
}
