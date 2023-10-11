#include "function_pointers.h"
#define NULL ((void *)0)

/**
 * int_index - function that searches for an integer.
 * @array: the array.
 * @size: the size of the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: - the index of the first element for which the cmp function does not
 *	   return 0
 *	   - -1 If no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
