#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: integer
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		a = malloc(size);
		for (i = 0; i < size; i++)
			a[i] = c;
		return (a);
	}
}
