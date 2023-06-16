#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	char b[] = "0123456789abcdef";

	for (i = 0 ; i < 17 ; i++)
		putchar(b[i]);
	putchar('\n');
	return (0);
}
