#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that print a struct dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		d->name = "(nil)";
	if (d->owner == 0)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
