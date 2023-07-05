#include "main.h"

int second_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - original function
 * @n: the number
 * Return: the second function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * second_sqrt_recursion - second function
 * @n: the number
 * @i: fa2r tajarib
 * Return: the natural square root
 */

int second_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return  (actual_sqrt_recursion(n, i + 1));
}
