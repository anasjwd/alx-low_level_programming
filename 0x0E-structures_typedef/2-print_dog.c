#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);
	if (d->name == NULL)
		strcopy(d->name, "nil");
	if (d->owner == NULL)
		strcopy(d->owner, "nil");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
