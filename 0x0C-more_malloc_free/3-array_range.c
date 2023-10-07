#include "main.h"
#include <stdlib.h>

/**
 * _abs - the absolute value.
 * @a: the numbere.
 *
 * Return: the absolute value of the number.
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

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
	size = _abs(max - min + 1);
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
