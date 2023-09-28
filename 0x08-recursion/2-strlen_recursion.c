#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string.
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 1;
	if (*s == '\0')
		return (0);
	return (len + _strlen_recursion(s + 1));
}
