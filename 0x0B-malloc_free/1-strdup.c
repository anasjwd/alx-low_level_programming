#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts the length of a string.
 * @s: the string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * _strdup - make a copy of the string given as a parameter.
 * @str: the string.
 *
 * Return: a pointer to a newly allocated space in memory.
 *	   NULL if it fails.
 */
char *_strdup(char *str)
{
	int size;
	char *pstr;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	size = _strlen(str);
	pstr = malloc(sizeof(char) * (size + 1));
	if (pstr == NULL)
		return (NULL);
	while (i < size)
	{
		pstr[i] = str[i];
		i++;
	}
	pstr[i] = '\0';
	return (pstr);
}
