#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *t_name;
	char *t_owner;
	dog_t *new_d;

	t_name = malloc(sizeof(*name) * (strlen(name) + 1));
	t_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_d = malloc(sizeof(dog_t));
	if (t_name && t_owner && new_d)
	{
		strcpy(t_name, name);
		strcpy(t_owner, owner);
		new_d->name = t_name;
		new_d->age = age;
		new_d->owner = t_owner;
	}
	else
	{
		free(t_name);
		free(t_owner);
		free(new_d);
		return (0);
	}
	return (new_d);
}
