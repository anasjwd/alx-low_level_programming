#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name.
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int	fd;
	ssize_t	bytes_read, bytes_write;
	char	*buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, "r");
	if (fd < 0)
		return (0);
	buffer = malloc(letters * sizeof(char));
	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
		return (0);
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write < (ssize_t)letters)
		return (0);
	return (bytes_write);
}
