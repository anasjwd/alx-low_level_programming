#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string
 * @accept: point to the initial segment of s which consist only of bytes from
 * Return: the number of bytes
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int n = 0;
	unsigned int i;
	unsigned int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		x = 0;
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				x = 1;
				break;
			}
		}
		if (x == 0)
		{
			break;
		}
		else
		{
			n = n + 1;
		}
	}
	return (n);
}
