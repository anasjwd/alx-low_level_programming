#include "function_pointers.h"
#define NULL ((void *)0)
/**
 * array_iterator - function that executes a function given as a parameter on
 *		    each element of an array.
 * @array: the array.
 * @size: the size of the array.
 * @action: pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
