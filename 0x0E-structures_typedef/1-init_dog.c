#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise the struct dog
 * @d:pointer to struct dog
 * @name:initialise name
 * @age:initialise age
 * @owner:initialise owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
