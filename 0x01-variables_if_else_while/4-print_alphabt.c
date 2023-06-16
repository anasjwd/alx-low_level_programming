#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: Print all the letters except q and e
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;
	char lw[] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0 ; i < 24 ; i++)
	{
		putchar(lw[i]);
	}
	putchar('\n');
	return (0);
}
