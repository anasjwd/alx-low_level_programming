#include "main.h"

/**
 * num_of_bits -  calc the num of digits in the bin representation of a num.
 * @num: the decimal number.
 *
 * Return: the num of digits in the bin rep of the num given.
 */
int	num_of_bits(unsigned long num)
{
	int     digits;

	digits = 1;
	while (num > 1)
	{
		num >>= 1;
		digits++;
	}
	return (digits);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number given.
 */
void print_binary(unsigned long int n)
{
	int	size;
	int	bit;
	int	iterator;

	size = num_of_bits(n);
	iterator = size - 1;
	while (iterator >= 0)
	{
		_putchar(((n >> iterator) & 1) + '0');
		iterator--;
	}
}
