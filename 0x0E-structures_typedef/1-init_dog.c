#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize of type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
