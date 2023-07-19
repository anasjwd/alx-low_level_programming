#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: the array of numbers.
 * @size: the size of the array
 * @cmp: pointer to the function check if a number is equal to 98
 * Return:
 *	-returns the index of the number if found
 *	-(-1), if no element matches
 *	-(-1), If size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
