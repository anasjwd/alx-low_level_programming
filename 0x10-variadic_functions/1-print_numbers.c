#include "variadic_functions.h"
#include <stdarg.h>
#define NULL ((void *)0)

/**
 * putstr - print a string.
 * @str: the string.
 */
void putstr(const char *str)
{
	if (str == NULL)
		return;
	while (*str)
		_putchar(*str++);
}

/**
 * putnbr - print a number.
 * @num: the number.
 */
void putnbr(long num)
{
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		_putchar(num + '0');
		return;
	}
	putnbr(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: list of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	const char *sep;
	unsigned int i;
	unsigned int num;
	va_list args;

	i = 0;
	num = n;
	va_start(args, n);
	sep = "";
	while (i < num)
	{
		putstr(sep);
		putnbr(va_arg(args, int));
		sep = separator;
		i++;
	}
	_putchar('\n');
	va_end(args);
}
