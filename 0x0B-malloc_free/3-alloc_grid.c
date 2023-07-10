#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: -pointer to a 2 dimensional array of integers
 *         -NULL on failure
 *         -NULL If width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = malloc(sizeof(int *) * width);
		/*if ptr[i] is NULL free all space allocated and return NULL*/
		if (ptr[i] == NULL)
		{
			for (; i >= 0 ; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
