#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	char lwrv[] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0 ; i < 26 ; i++)
		putchar(lwrv[i]);
	putchar('\n');
	return (0);
}
