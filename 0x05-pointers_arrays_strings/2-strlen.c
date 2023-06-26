#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer of str
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	for ( ; *s != '\0' ; s++)
		x += 1;

	return (x);
}
