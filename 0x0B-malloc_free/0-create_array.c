#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 *		  with a specific char.
 * @size: the size of the array.
 * @c: the specific char.
 *
 * Return: pointer to the array.
 *	   NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
		array[i++] = c;
	return (array);
}
