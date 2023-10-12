#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments.
 * @...: list of arguments.
 *
 * Return: sum of all the numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
