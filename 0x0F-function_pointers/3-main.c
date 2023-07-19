#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: solution of the operation.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		return(98);
	}
	
	if (strcmp(operator, "+") != 0 && strcmp(operator, "-") != 0
		&& strcmp(operator, "*") != 0 && strcmp(operator, "/") != 0 
		&& strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	return (get_op_func(operator)(num1, num2));
}
