#include "function_pointers.h"
#define NULL ((void *)0)
/**
 * print_name - function that prints a name.
 * @name: the name.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
