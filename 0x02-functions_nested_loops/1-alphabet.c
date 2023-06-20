#include "main.h"
/**
 * print_alphabet - Entry point of program
 */

void print_alphabet(void)
{
	int i;
	char lwr[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i < 26 ; i++)
		_putchar(lwr[i]);
	_putchar('\n');
}
