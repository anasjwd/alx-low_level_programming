#include "main.h"
#include <unistd.h>

/**
 * _isdigit - checks if a strig is only containing digits.
 * @s: the string.
 *
 * Return: 1 on success.
 *	   0 on failure.
 */
int _isdigit(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

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
 * main - program that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 *
 * Return: 0 on success.
 *	   1 on failure.
 */
int main(int argc, char **argv)
{
	int i;
	int sum;

	sum = 0;
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (_isdigit(argv[i]) == 0)
			{
				write(1, "Error\n", 6);
				return (1);
			}
			sum += _atoi(argv[i]);
			i++;
		}
	}
	putnbr(sum);
	_putchar('\n');
	return (0);
}
