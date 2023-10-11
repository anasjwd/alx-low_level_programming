#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @ac: number of arguments.
 * @av: the arguments.
 *
 * Return: 0 on success.
 *	   98 if the number of arguments is wrong.
 *	   99 if the operator is invalid.
 *	   100 if the user tries to divide (/ or %) by 0.
 */
int main(int ac, char **av)
{
	int (*op)(int, int);
	int result;
	int a;
	int b;
	char *operation;

	if (ac == 4)
	{
		operation = av[2];
		a = atoi(av[1]);
		b = atoi(av[3]);
		if ((*operation == '/' || *operation == '%') && b == 0)
		{
			printf("Error\n");
			return (100);
		}
		op = get_op_func(av[2]);
		if (op == NULL || av[2][1] != '\0')
		{
			printf("Error\n");
			return (99);
		}
		result = op(a, b);
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (98);
}
