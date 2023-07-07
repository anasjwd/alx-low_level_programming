#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: the num of argument passed to the program
 * @argv: an array holding the argument passed
 * Return: 0 on success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
