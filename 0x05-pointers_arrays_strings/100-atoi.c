#include "main.h"
/**
 * _atoi - convert a number from string to an int.
 * @s: the string.
 *
 * Return: the number.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int j;

	i = 0;
	j = 0;
	sign = 1;
	result = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else
		{
			i++;
		}
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result *= 10;
		result += s[i] - '0';
		i++;
		if (j == 8 && s[i] == '8')
			return (-2147483648);
		j++;
	}
	return (result * sign);
}
