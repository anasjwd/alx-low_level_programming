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
	{
		putstr("(nil)");
		return;
	}
	while (*str)
		_putchar(*str++);
}

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: the number of strings passed to the function.
 * @...: list of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		putstr(va_arg(args, char *));
		if (separator != NULL)
			sep = separator;
		i++;
	}
	_putchar('\n');
	va_end(args);
}
