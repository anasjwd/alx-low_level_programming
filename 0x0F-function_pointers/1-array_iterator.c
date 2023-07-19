#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array of elements
 * @size:  the size of the array
 * @action: a pointer to the function the fct need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
