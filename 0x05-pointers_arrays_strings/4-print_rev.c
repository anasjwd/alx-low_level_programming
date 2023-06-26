#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer of s
 */

void print_rev(char *s)
{
	int i;

	for (i = 62 ; i > -1 ; i--)
		_putchar(*(s + i));
	_putchar('\n');

}
