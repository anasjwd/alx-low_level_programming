#include "main.h"

/**
 * _sqrt_recursion2 - recurses to find the natural square root of a number.
 * @n: the number.
 * @i: iterator.
 *
 * Return: the natural square root of a number.
 */

int _sqrt_recursion2(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion2(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number.
 *
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion2(n, 0));
}
