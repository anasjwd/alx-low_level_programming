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
 * main - program that prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		putstr(argv[i++]);
		_putchar('\n');
	}
	return (0);
}
