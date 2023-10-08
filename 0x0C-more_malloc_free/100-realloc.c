#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: pointer to the new allocated space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *ptr1;
	unsigned char *_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		i = 0;
		_ptr = (unsigned char *)ptr;
		if (new_size < old_size)
		{
			while (i < new_size)
			{
				ptr1[i] = _ptr[i];
				i++;
			}
		}
		else if (new_size > old_size && ptr)
		{
			while (i < old_size)
			{
				ptr1[i] = _ptr[i];
				i++;
			}
		}
	}
	free(ptr);
	return ((void *)ptr1);
}
