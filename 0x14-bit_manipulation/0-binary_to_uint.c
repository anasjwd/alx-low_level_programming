#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 in case of an error.
 */
unsigned int binary_to_uint(const char *b)
{
	int	i = 0;
	unsigned int	result = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		result <<= 1;
		if (b[i] == '1')
			result |= 1;
		else if (b[i] != '0')
			return (0);
		i++;
	}
	return (result);
}
