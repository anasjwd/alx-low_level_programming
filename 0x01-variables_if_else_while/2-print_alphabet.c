#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 is success
 */
int main(void)
{
	char n[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
