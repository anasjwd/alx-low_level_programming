#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer of the string
 * @accept: point to the bytes we'r looking for
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for ( ; *s != '\0' ; s++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == *s)
			{
				goto here;
			}
		}
	}
here:
	return (s);
}
