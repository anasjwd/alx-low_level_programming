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
 * str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to a newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *pc;
	int size;
	int i;
	int s1len;
	int s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	size = s1len + s2len + 1;
	pc = malloc(sizeof(char) * size);
	if (pc == NULL)
		return (NULL);
	while (i < s1len)
	{
		pc[i] = s1[i];
		i++;
	}
	s1len = 0;
	while (s1len < s2len)
	{
		pc[i] = s2[s1len];
		s1len++;
		i++;
	}
	pc[i] = '\0';
	return (pc);
}
