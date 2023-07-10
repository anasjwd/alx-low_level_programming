#include "main.h"
#include <string.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: string 1
 * @s2: strong 2
 * Return: pointer the contents of s1, followed by the contents of s2
 */

char *str_concat(char *s1, char *s2)
{
	int length = strlen(s1) + strlen(s2) + 1;
	char *s3;

	/*allocate dynamically a space for s1 and s2*/
	s3 = malloc(sizeof(char) * length);
	/*if no space memory is left return NULL to avoid any segfault*/
	if (s3 == NULL)
		return (NULL);

	/*cocatenate the tweo string in s3*/
	strcat(s3, s1);
	strcat(s3, s2);
	/*add the null terminated to the end of the string*/
	s3[length] = '\0';

	return (s3);
}
