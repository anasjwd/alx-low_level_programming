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
	int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char s[] = "abcdef";

	for (i = 0 ; i < 10 ; i++)
		putchar(b[i] + '0');
	for (i = 0 ; i < 7 ; i++)
		putchar(s[i]);
	putchar('\n');
	return (0);
}
