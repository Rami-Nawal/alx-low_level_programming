#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's info
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
