#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 is success
 */
int main(void)
{
	char lw[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(lw[i]);
	}
	for (i = 0 ; i < 26 ; i++)
	{
		putchar(up[i]);
	}
	putchar('\n');
	return (0);
}
