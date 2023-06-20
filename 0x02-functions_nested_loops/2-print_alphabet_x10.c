#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 */

void print_alphabet_x10(void)
{
	char lw[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 26 ; i++)
			_putchar(lw[i]);
		_putchar('\n');
	}
}
