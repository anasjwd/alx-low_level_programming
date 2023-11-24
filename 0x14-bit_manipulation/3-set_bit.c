#include "main.h"
#include <stddef.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number.
 * @index: the index of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (n == NULL || index > 31)
		return (-1);
	bitmask = 1 << index;
	*n |= bitmask;
	return (1);
}
