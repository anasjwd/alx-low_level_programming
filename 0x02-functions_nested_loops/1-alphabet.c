#include "main.h"
/**
 * main - Entry point of program
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	char lwr[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i < 25 ; i++)
		_putchar(lwr[i]);
	_putchar('\n');
	return (0);
}
