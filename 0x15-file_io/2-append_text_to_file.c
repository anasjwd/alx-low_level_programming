#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content:  the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	ssize_t	bytes_wrote;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	bytes_wrote = write(fd, text_content, strlen(text_content));
	if (bytes_wrote == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
