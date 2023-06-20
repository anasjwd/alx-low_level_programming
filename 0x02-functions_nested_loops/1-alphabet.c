#include "main.h"
/**
 * main - Entry point of program
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	int i;
	char lwr[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i < 26 ; i++)
		_putchar(lwr[i]);
	_putchar('\n');
}
