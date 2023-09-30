#include "main.h"

/**
 * ft_strlen - calculating thr length of the string.
 * @s: the string.
 *
 * Return: the length of the string.
 */
int ft_strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * recursive_pal - function checks if a string is a palindrome.
 * @s: the string.
 * @index: iterator.
 * @len: length of the string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int recursive_pal(char *s, int index, int len)
{
	if (s[index] != s[len - 1 - index])
		return (0);
	else if (index == len)
		return (1);
	else
		return (recursive_pal(s, index + 1, len));
}

/**
 * is_palindrome -  function that returns 1 if a string is a palindrome and 0
 *		    if not.
 * @s: the string.
 *
 * Return: 1 if a string is a palindrome
 *	   0 if not.
 */
int is_palindrome(char *s)
{
	int len;

	len = ft_strlen(s);
	return (recursive_pal(s, 0, len));
}
