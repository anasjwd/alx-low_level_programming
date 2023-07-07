#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: number of arguments
 * @argv: array holding the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}
