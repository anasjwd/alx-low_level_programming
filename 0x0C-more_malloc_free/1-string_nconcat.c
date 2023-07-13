#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes from s2.
 * Return:
 *	point to a newly allocated space in memory
 *	If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int length = strlen(s1) + n;

	/*allocate space for s1 and n bytes from s2*/
	s = malloc(length);
	if (s == NULL)
		return (NULL);

	/* treating NULL as an empty string*/
	if (s2 == NULL)
		s2 = "";

	/*concatenating the two strings.*/
	strcpy(s, s1);
	if (n >= strlen(s2))
	{
		strcat(s, s2);
	}
	else
	{
		strncat(s, s2, n);
	}

	return (s);
}
