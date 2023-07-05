#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: point to the string
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
