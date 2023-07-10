#include "main.h"
#include <string.h>

/**
 * _strdup - copy of the string given as a parameter.
 * @str: pointer to the string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int length = strlen(str) + 1;
	char *p;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * length);
	if (p == NULL)
		return (NULL);

	strcpy(p, str);

	return (p);
}
