#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum number.
 * @max: maximum number.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (!ptr)
		return (NULL);
	i = min;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
