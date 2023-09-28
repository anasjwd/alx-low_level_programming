#include "main.h"

/**
 * is_prime2 - function tells if the number given is a prime number
 *                   or not.
 * @n: the number.
 * @i: iterator.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime2(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime2(n, i - 1));
}

/**
 * is_prime_number - function tells if the number given is a prime number
 *		     or not.
 * @n: the number.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime2(n, n - 1));
}
