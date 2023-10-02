#include "main.h"
#include <unistd.h>

/**
 * _atoi - turn a number from string to int.
 * @str: the string.
 *
 * Return: the number.
 */
int _atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (str[i] == '+')
		{
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

/**
 * putnbr - print a number.
 * @d: the number.
 */
void putnbr(long d)
{
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	if (d < 10)
	{
		_putchar(d + '0');
		return;
	}
	putnbr(d / 10);
	_putchar(d % 10 + '0');
}

/**
 * main - program that multiplies two numbers..
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int mult;

	if (argc == 3)
	{
		mult = _atoi(argv[1]) * _atoi(argv[2]);
		putnbr(mult);
		_putchar('\n');
		return (0);
	}
	write(1, "Error\n", 6);
	return (1);
}
