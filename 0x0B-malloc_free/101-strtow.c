#include "main.h"
#include <stdlib.h>

/**
 * ft_isspace - Check if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if 'c' is a space, 0 otherwise.
 */
int ft_isspace(char c)
{
	return (c == ' ');
}

/**
 * wordcounter - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The count of words in the string.
 */
int wordcounter(char *str)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (ft_isspace(str[i]) == 0 && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		counter++;
		i++;
	}
	return (counter);
}

/**
 * ft_strncpy - Copy up to 'n' characters from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * fill - Populate an array with words from a string.
 * @str: The input string.
 * @array: The array to populate with words.
 *
 * This function dynamically allocates memory for each word in the input
 * string and stores them in the 'array'.
 */
void fill(char *str, char **array)
{
	int i;
	int tmp;
	int index;

	i = 0;
	index = 0;
	if (str == NULL)
		return;
	while (str[i])
	{
		if (ft_isspace(str[i]) == 1)
		{
			i++;
			continue;
		}
		tmp = i;
		while (ft_isspace(str[i]) == 0 && str[i])
			i++;
		array[index] = malloc(sizeof(char) * (i - tmp + 1));
		ft_strncpy(array[index], &str[tmp], i - tmp);
		index++;
	}
}

/**
 * ft_split - Split a string into an array of words.
 * @str: The input string to split.
 *
 * Return: A dynamically allocated array of strings.
 *
 * This function splits the input string into words and returns an array
 * of dynamically allocated strings, where each string represents a word
 * from the input string. The last element of the array is set to NULL.
 * If memory allocation fails, it returns NULL.
 */
char **ft_split(char *str)
{
	char **array;
	int nbr_words;

	nbr_words = wordcounter(str);
	array = malloc(sizeof(char *) * (nbr_words + 1));
	if (array == NULL)
		return (NULL);
	array[nbr_words] = 0;
	fill(str, array);
	return (array);
}
