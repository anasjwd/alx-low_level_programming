#include <unistd.h>
#include "main.h"

/**
 * putstr - print a string.
 * @str: the string.
 */
void putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
}

/**
 * main - print the name of the program.
 * @argc: thr number of command line arguments.
 * @argv: array of the command line argumentsa.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	(void)argc;

	putstr(argv[0]);
	_putchar('\n');
	return (0);
}
