#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int T[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0 ; i < 10 ; i++)
		putchar(T[i] + '0');
	putchar('\n');
	return (0);
}
