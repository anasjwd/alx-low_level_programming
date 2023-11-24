#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 *	       from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: returns the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbit;
	unsigned long int mbit;
	unsigned long int iterator;
	int	count;

	iterator = 0;
	count = 0;
	while (iterator < sizeof(unsigned long int) * 8)
	{
		nbit = n & 1;
		mbit = m & 1;
		if (nbit != mbit)
			count++;
		n >>= 1;
		m >>= 1;
		iterator++;
	}
	return (count);
}
