#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * @size: the size of athe array
 * @c: the character we initialize with
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == 0)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		p[i] = c;

	return (p);
}
