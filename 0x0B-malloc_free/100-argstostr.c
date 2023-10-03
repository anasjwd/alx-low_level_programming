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
 * _strcat - conctenate.
 * @dest: the destination.
 * @src: the source.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = _strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i++] = '\n';
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arg.
 * @av: 2d array storing the string.
 *
 * Return: pointer to a new string.
 *	   NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *array;
	int size;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	size = 0;
	while (i < ac)
	{
		size += _strlen(av[i]);
		i++;
	}
	size += ac;
	array = malloc(sizeof(char) * (size + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	array[0] = '\0';
	while (i < ac)
	{
		_strcat(array, av[i]);
		i++;
	}
	i = _strlen(array);
	array[i] = '\0';
	return (array);
}
