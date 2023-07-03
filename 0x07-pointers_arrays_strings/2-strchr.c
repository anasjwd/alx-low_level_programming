#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: pointer to the string
 * @c: the character
 * Return:  pointer to the first occurrence of the
 * character c in the string s
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	for ( ; *s != '\0' ; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == '\0')
		return (NULL);
}
