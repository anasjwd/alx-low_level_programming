#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to the struct variable
 * @name: name of dog
 * @age: the age
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
