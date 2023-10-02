#include "main.h"

/**
 * putnbr - print a number.
 * @d: the number.
 */
void putnbr(int d)
{
	if (d < 10)
	{
		_putchar(d + '0');
		return;
	}
	putnbr(d / 10);
	_putchar(d % 10 + '0');
}

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	(void)argv;

	putnbr(argc - 1);
	_putchar('\n');
	return (0);
}
