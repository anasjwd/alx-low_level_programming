#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 *         NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0' ; haystack++)
	{
		char *phaystack = haystack;
		char *pneedle = needle;

		while (*phaystack == *pneedle)
		{
			pneedle++;
			phaystack++;
		}
		if (*pneedle == '\0')
			return (haystack);
	}
	return (0);
}
