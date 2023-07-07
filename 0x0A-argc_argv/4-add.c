#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int checkisdigit(char *s);

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array holding the arguments
 * Return: -0 If no number is passed to the program,
 * -1 If one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int i;
	int si;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		exit(0);
	}


	for (i = 1 ; i < argc ; i++)
	{
		if (checkisdigit(argv[i]))
		{
			si = atoi(argv[i]);
			sum += si;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * checkisdigit - checks if it is a digit or not
 * @s: points to string
 * Return: 1 or 0
 */

int checkisdigit(char *s)
{
	long unsigned int i = 0;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
