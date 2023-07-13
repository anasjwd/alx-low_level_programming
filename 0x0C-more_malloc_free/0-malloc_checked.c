#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of space allocated in memory.
 * Return:
 *	-allocates memory using malloc.
 *	-if malloc fails, cause normal process
 *	termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
