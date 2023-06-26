#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: ponter of a
 * @b: pointer of b
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
