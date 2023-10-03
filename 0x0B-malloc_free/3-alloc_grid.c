#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 *		integers.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: pointer to a 2 dimensional array of integers.
 *	   NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	i = 0;
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc((sizeof(int) * width));
		if (grid[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
